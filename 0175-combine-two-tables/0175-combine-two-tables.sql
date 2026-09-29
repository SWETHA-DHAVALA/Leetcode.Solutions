/* Write your PL/SQL query statement below */
select firstname, lastname, city, state from
Person p
left join
Address a
on p.personid = a.personid;