# Remove all main files in the subdirectories of the current directory

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
                    if [ -f "$dir4/main" ]; then
                        echo "Removing $dir4/main"
                        rm "$dir4/main"
                    fi
                done
            done
        done
    done
done
