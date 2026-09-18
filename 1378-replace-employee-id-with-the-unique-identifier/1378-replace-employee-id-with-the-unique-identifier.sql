# Write your MySQL query statement below
select u.unique_id, e.name from employees e
left outer join employeeUni u
on e.id=u.id
order by u.unique_id;