SELECT distinct city 
from station
where substring(city,length(city),length(city)) in ('a','e','i','o','u')