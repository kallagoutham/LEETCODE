# Write your MySQL query statement below
SELECT *,
    CASE 
        WHEN t.x+t.y>t.z AND t.y+t.z>t.x AND t.z+t.x>t.y THEN 'Yes'
        ELSE 'No'
        END AS triangle
    FROM Triangle t;
