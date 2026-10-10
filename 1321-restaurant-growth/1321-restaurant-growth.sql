# Write your MySQL query statement below
SELECT s.visited_on,s.total AS amount,ROUND((s.total)/7,2) AS average_amount
FROM(
SELECT c.visited_on,SUM(c.amount)OVER(
ORDER BY c.visited_on
ROWS BETWEEN 6 PRECEDING AND CURRENT ROW
) AS total
FROM (
    SELECT visited_on,SUM(amount) AS amount
    FROM Customer
    GROUP BY visited_on
) c
) s
WHERE  DATEDIFF(s.visited_on, (SELECT MIN(visited_on) FROM Customer)) >= 6
