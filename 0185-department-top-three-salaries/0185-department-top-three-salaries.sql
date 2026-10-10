# Write your MySQL query statement below
SELECT d.name AS Department,s.name AS Employee,s.salary AS Salary
FROM(SELECT departmentId,name, salary,DENSE_RANK()OVER(PARTITION BY departmentId
ORDER BY salary DESC) AS rn
FROM Employee) s
JOIN Department d ON d.id=s.departmentId
WHERE s.rn=1 OR s.rn=2 OR s.rn=3;