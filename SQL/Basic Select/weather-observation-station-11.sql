SELECT distinct city 
from station
where substring(city,length(city),length(city)) not in ('a','e','i','o','u') or
substring(city,1,1) not in ('a','e','i','o','u')