# Write your MySQL query statement below
SELECT today.id
FROM Weather today
JOIN Weather yes ON DATEDIFF(today.recordDate,yes.recordDate)=1 AND today.temperature>yes.temperature;