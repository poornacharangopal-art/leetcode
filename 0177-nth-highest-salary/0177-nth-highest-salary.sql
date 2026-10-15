CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
      SELECT E.salary AS getNthHighestSalary
      FROM (SELECT salary,DENSE_RANK()OVER(ORDER BY salary DESC) AS rn 
      FROM Employee) E
      WHERE E.rn=N
      LIMIT 1
 
  );
END