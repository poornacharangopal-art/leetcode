# Write your MySQL query statement below
WITH meetinghours AS(
    SELECT e.*,SUM(m.duration_hours)AS total_hours
    FROM employees e
    JOIN meetings m ON m.employee_id=e.employee_id
    GROUP BY m.employee_id,week(m.meeting_date,1),year(meeting_date)
    HAVING total_hours>20
)
SELECT employee_id,employee_name,department,COUNT(*) AS  meeting_heavy_weeks
FROM meetinghours
GROUP BY employee_id
HAVING  meeting_heavy_weeks>=2
ORDER BY  meeting_heavy_weeks DESC,employee_name ASC;