-- complex select query
SELECT DISTINCT(score), (SELECT COUNT(DISTINCT score)) AS number FROM second_table ORDER BY number DESC;
