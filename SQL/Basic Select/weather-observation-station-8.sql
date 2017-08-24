SELECT distinct city 
from station
where substring(city,length(city),length(city)) in ('a','e','i','o','u') and
substring(city,1,1) in ('a','e','i','o','u')