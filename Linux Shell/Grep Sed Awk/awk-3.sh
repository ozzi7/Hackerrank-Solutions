awk '{ if (($2+$3+$4)/3 >= 80) {print $0, ": A"} else if (($2+$3+$4)/3 >= 60) {print $0, ": B"} else {print $0, ": FAIL"}}' 