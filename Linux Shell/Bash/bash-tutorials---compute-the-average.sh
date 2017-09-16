read count
sum=0
for ((x=0; x <=count-1; x +=1))
    do
        read t
        sum=$((sum+t))
    done
printf "%.3f" $(echo "$sum/$count" | bc -l)