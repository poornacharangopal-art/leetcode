# Write your MySQL query statement below
    SELECT s.name
    FROM (
        SELECT managerId AS id,COUNT(*) AS number_of_students
        FROM Employee
        WHERE id IS NOT NULL
        GROUP BY managerId
        HAVING COUNT(*) >= 5
      )e
      INNER JOIN Employee s ON e.id=s.id;
