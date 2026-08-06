# Write your MySQL query statement below
SELECT d1.name As Department,e1.name AS Employee,e1.salary AS Salary
FROM Employee e1
INNER JOIN Department d1 ON e1.departmentId=d1.id
WHERE (e1.DepartmentId,e1.salary) IN(SELECT departmentId,MAX(salary)
FROM Employee
GROUP BY departmentId
);
