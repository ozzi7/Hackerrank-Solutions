while read line; do
    arr=("${arr[@]}" $line)
done
declare -a patter=( ${arr[@]/*a*/} )
declare -a patter2=( ${patter[@]/*A*/} )
echo ${patter2[@]}