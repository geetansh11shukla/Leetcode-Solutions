# Write your MySQL query statement below
select d.name as Department,e.name as Employee,e.salary as Salary
from Department d join Employee e
ON e.departmentId = d.id
-- group by d.name;
WHERE (e.departmentId, e.salary) IN (
SELECT departmentId, MAX(salary)
FROM Employee
GROUP BY departmentId
);