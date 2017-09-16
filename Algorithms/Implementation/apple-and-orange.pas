program program1;
var       
    s,t,a,b,m,n,i,temp : longint;
    sumA : longint = 0;
    sumO : longint = 0;

begin 
	read(s);
    read(t);
    read(a);
    read(b);
    read(m);
    read(n);
    for i := 1 to m do
    begin
        read(temp);
        if ((temp + a >= s) and (temp + a <= t)) then
            sumA := sumA + 1;
    end;
    for i := 1 to n do
    begin
        read(temp);
        if ((temp + b >= s) and (temp + b <= t)) then
            sumO := sumO + 1;
    end;
    writeln(sumA);
    writeln(sumO);
end. 