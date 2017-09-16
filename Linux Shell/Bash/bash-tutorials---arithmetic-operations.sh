read expr
printf "%.3f" $(echo $expr | bc -l)