# Write your MySQL query statement below
select activity_date as day, 
count(distinct user_id ) as active_users 
from Activity
group by day
having activity_date>='2019-06-28' and 2019-06-28<='2019-07-27'
order by active_users  asc