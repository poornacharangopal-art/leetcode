# Write your MySQL query statement below
SELECT customer_id
FROM (
    SELECT c.customer_id,COUNT(DISTINCT c.product_key) AS number_of
    FROM Customer c
    GROUP BY c.customer_id
) s
WHERE s.number_of=(
    SELECT COUNT(*)
    FROM Product
);