SELECT distinct city 
from station
where substring(city,length(city),length(city)) not in ('a','e','i','o','u') and
substring(city,1,1) not in ('a','e','i','o','u')