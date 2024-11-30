# Write your MySQL query statement below
select u.name as name,sum(t.amount) as balance from Transactions t inner join Users u on u.account=t.account group by (t.account)
having sum(t.amount)>10000;
