# Write your MySQL query statement below
SELECT s.player_id,s.event_date AS first_login
FROM(SELECT player_id,event_date,RANK()OVER(PARTITION BY player_id
ORDER BY event_date)AS rn
FROM Activity)s
WHERE s.rn=1;
