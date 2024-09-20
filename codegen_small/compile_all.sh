# Compile all the main.c files in the subdirectories of the current directory

for dir0 in ./*/
do
    for dir1 in $dir0*/
    do
        for dir2 in $dir1*/
        do
            for dir3 in $dir2*/
            do
                for dir4 in $dir3*/
                do
                    # If ./main does not exists in this directory, compile
                    if [ ! -f "$dir4/main" ]; then
                        echo "Compiling $dir4"
                        cd "$dir4" && riscv64-unknown-elf-gcc -g -o main -O3 -march=rv64imafdc -mabi=lp64d main.c && cd ../../../../../
                    fi
                done
            done
        done
    done
done
