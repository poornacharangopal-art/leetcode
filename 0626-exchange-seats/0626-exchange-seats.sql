# Write your MySQL query statement below
SELECT s.id,
(CASE WHEN id%2=0 THEN s.prev ELSE COALESCE(s.next, s.current_student) END) AS student
FROM (SELECT id,student AS current_student,LAG(student)OVER(ORDER BY id) AS prev,LEAD(student)OVER(ORDER BY id) AS next
FROM Seat
) s;