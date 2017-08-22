read char
if [[ "$char" == [N] ]] || [[ "$char"  == [n] ]]; then
    echo "NO"
else
    echo "YES"
fi