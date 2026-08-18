# Write your MySQL query statement below
SELECT c1.name as Customers
FROM Customers c1
WHERE NOT EXISTS (SELECT o1.id
FROM Orders o1
WHERE o1.customerId=c1.id);
