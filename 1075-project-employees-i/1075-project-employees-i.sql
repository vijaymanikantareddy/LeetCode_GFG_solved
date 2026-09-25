/* Write your PL/SQL query statement below */
select p.project_id, round(avg(e.experience_years), 2) as average_years
from project p
join employee e
on p.employee_id = e.employee_id
group by project_id