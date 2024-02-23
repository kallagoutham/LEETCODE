select project_id,round(avg(experience_years),2) as average_years from (select p.project_id,e.experience_years from Project p inner join Employee e on p.employee_id=e.employee_id) as f group by project_id;
