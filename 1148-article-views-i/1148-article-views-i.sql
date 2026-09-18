# Write your MySQL query statement below
-- select distinct author_id as id from views where viewer_id in (select viewer_id from views where viewer_id=author_id) order by author_id;

select distinct viewer_id as id from views where viewer_id=author_id order by viewer_id;