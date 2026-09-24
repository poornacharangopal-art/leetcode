# Write your MySQL query statement below
SELECT name, CASE 
WHEN travelled_distance IS NOT NULL THEN travelled_distance
ELSE 0
END AS travelled_distance
FROM (SELECT u.name AS name ,R.travelled_distance
FROM (
SELECT user_id AS id,SUM(distance) AS travelled_distance
FROM Rides
GROUP BY user_id) R
RIGHT JOIN Users u ON u.id=R.id
ORDER BY travelled_distance DESC,name ASC) S;