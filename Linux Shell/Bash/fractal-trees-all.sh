read n
one="1"
us="_"
x=0

# choose starting row
if ((n == 4)); then
    x=3
elif ((n == 3)); then
    x=7
elif ((n == 2)); then
    x=15
elif ((n == 1)); then
    x=31
fi
for ((i=0; i <=x-1; i +=1)) do
    string=""
    for ((y=0; y <=100-1; y +=1)) do
        string=$string$us
    done
    echo $string
done
for ((; x <=63-1; x +=1)) do
    string=""
    for ((y=0; y <=100-1; y +=1)) do
        if ((x == 0)); then
            string=$string$us
        elif ((x == 1)); then
            if ((y > 17)) && ((y < 82)) && ((y % 2 == 0)); then
                string=$string$one
            else
                string=$string$us
            fi
        elif ((x == 2)) || ((x == 3)); then
            if ((y > 17)) && ((y < 81)) && (((y +1) % 4 == 0)); then
                string=$string$one
            else
                string=$string$us
            fi
        elif ((x == 4)); then
            if ((y > 17)) && ((y < 81)) && ((((y+4) % 8 == 0)) || (((y+2) % 8 == 0))); then
                string=$string$one
            else
                string=$string$us
            fi
        elif ((x > 4)) && ((x < 8)); then
            if ((y > 17)) && ((y < 81)) && (((y-5) % 8 == 0)); then
                string=$string$one
            else
                string=$string$us
            fi
        elif ((x > 7)) && ((x < 12)); then
            if ((y > 17)) && ((y < 81)) && ((((y-(x-8)-6) % 16 == 0)) || (((y+(x-8)-12) % 16 == 0))); then
                string=$string$one
            else
                string=$string$us
            fi
        elif ((x > 11)) && ((x < 16)); then
            if ((y > 17)) && ((y < 81)) && (((y+7) % 16 == 0)); then
                string=$string$one
            else
                string=$string$us
            fi
        elif ((x > 15)) && ((x < 24)); then
            if ((y > 17)) && ((y < 81)) && ((((y-(x-16)+6) % 32 == 0)) || (((y+(x-16)+24) % 32 == 0))); then
                string=$string$one
            else
                string=$string$us
            fi
        elif ((x > 23)) && ((x < 32)); then
            if ((y > 17)) && ((y < 81)) && (((y-1) % 32 == 0)); then
                string=$string$one
            else
                string=$string$us
            fi
        elif ((x > 31)) && ((x < 48)); then
            if ((y > 32)) && ((y < 66)) && ((((y-(x-32)-2) % 32 == 0)) || (((y+(x-32)-32) % 32 == 0))); then
                string=$string$one
            else
                string=$string$us
            fi
        elif ((x > 47)); then
            if ((y > 32)) && ((y < 66)) && (((y+1) % 50 == 0)); then
                string=$string$one
            else
                string=$string$us
            fi
        fi
    done
    echo $string
done