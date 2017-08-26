while read line; do
    arr=("${arr[@]}" $line)
done
arr=("${arr[@]}" $line)
echo ${#arr[@]}