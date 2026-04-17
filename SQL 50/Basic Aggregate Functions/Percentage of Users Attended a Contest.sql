# Write your MySQL query statement below
select r.contest_id,round(
    (count(r.contest_id)/(select count(user_id) from Users))*100,2
) as percentage

-- select r.contest_id , count(r.contest_id)as sum
-- , (select count(user_id) from Users) as sumU

from Register as r
left join Users as u
on r.user_id = u.user_id
group by r.contest_id
order by percentage desc , r.contest_id asc

