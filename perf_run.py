from argparse import ArgumentParser, ArgumentDefaultsHelpFormatter
import subprocess
import os


perf_counters = ['task-clock','instructions','cycles','branches','branch-misses','L1-dcache-loads','L1-dcache-load-misses','L1-icache-loads','L1-icache-load-misses','stalled-cycles-frontend','stalled-cycles-backend']
implementations = ['tl2cgen', 'tl2cgen_flint', 'tl2cgen_flint_prob_to_int']
n_iterations = 100


# Handle command line arguments
parser = ArgumentParser(formatter_class=ArgumentDefaultsHelpFormatter)
parser.add_argument('-n', '--n_estimators', help='Number of trees in random forest', nargs='+', type=int, default=0)
parser.add_argument('-m', '--max_depth', help='Maximum depth of the tree', nargs='+', type=int, default=0)
parser.add_argument('-c', '--classifiers', help='Number of classifiers to train per dataset', type=int, default=0)
parser.add_argument('-o', '--output', help='Output file', type=str, default='output.csv')
parser.add_argument('-d', '--datasets', help='Datasets to run', nargs='+', type=str)
args = parser.parse_args()


def output_to_csv(dataset, split, n_estimators, max_depth, implementation, perf_output):
    output_list = perf_output.decode('utf-8').replace('\n', ',').split(',')
    perf_counter_values = [output_list[i-2] for i, x in enumerate(output_list) if x[:-2] in perf_counters]

    with open(args.output, 'a') as file:
        file.write(','.join([dataset, str(split), str(n_estimators), str(max_depth), implementation, *perf_counter_values]) + '\n')


def run_perf_counters(dirpath):
    # Run the perf counters on the executable in the given directory
    return subprocess.run(['perf', 'stat', '-e', ','.join(perf_counters), '--field-separator=,', f'{dirpath}/main'], check=True, stderr=subprocess.PIPE, stdout=subprocess.PIPE).stderr


if __name__ == '__main__':
    # Initialize csv file
    with open(args.output, 'w') as file:
        file.write(','.join(['dataset', 'split', 'n_estimators', 'max_depth', 'implementation', *perf_counters]) + '\n')

    # Loop over all datasets, splits, n_estimators, max_depths, and implementations, and run perf command
    for _ in range(n_iterations):
        for dataset in args.datasets:
            for split in range(args.classifiers):
                for n in args.n_estimators:
                    for m in args.max_depth:
                        for implementation in implementations:
                            dirpath = f'./codegen/{dataset}/split_{split}/n_estimators_{n}/max_depth_{m}/{implementation}'
                            perf_output = run_perf_counters(dirpath)
                            output_to_csv(dataset, split, n, m, implementation, perf_output)