# Write your MySQL query statement below
# confirmation rate= 'CONFIRMED' messages/total number of requested confirmation messages
SELECT 
s.user_id,
ROUND(
    IFNULL(SUM(C.ACTION='confirmed')/COUNT(c.action),0),2
) AS confirmation_rate
FROM Signups s
LEFT JOIN Confirmations c
ON s.user_id=c.user_id
GROUP BY s.user_id;