/* Write your PL/SQL query statement below */
SELECT name as Customers from Customers c
where id not in (select customerid from orders);
