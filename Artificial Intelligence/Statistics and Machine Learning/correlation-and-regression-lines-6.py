import math

phys = [15.0,12.0,8.0,8.0,7.0,7.0,7.0,6.0,5.0,3.0]
hist = [10.0,25.0,17.0,11.0,13.0,17.0,20.0,13.0,9.0,15.0]
n = len(phys)

up = n*sum([x*y for (xi,x) in enumerate(phys) for (yi,y) in enumerate(hist) if xi == yi]) - sum(phys)*sum(hist)
down = math.sqrt((n*sum([x*x for x in phys]) - sum(phys)*sum(phys))*
                (n*sum([x*x for x in hist]) - sum(hist)*sum(hist)))
print(up/down)