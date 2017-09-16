while read line; do
    arr=("${arr[@]}" $line)
done
arr=("${arr[@]}" $line)
arr2=("${arr[@]}" "${arr[@]}")
arr2=("${arr2[@]}" "${arr[@]}")
echo ${arr2[@]}