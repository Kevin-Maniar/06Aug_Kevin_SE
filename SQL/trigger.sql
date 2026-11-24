use triggrtDB;

truncate table stdinfo;
truncate table backup_stdinfo;

insert into stdinfo (name , city) value ('Tara','Mumbai');
update stdinfo set name = 'Jay' where name = 'Tara';
delete from stdinfo where id = 1;

select * from stdinfo;
select * from backup_stdinfo;
select * from log_data;


create table log_data (id int primary key auto_increment,
action_at datetime,
action_type varchar(50));

delimiter //

create trigger tig_insert
after insert 
on stdinfo 
for each row 

begin
	insert into log_data(action_at,action_type) value (now(),"Record Inserted");
end; delimiter //

create trigger tig_update
after update 
on stdinfo 
for each row 

begin
	insert into log_data(action_at,action_type) value (now(),"Record updated!");
end; delimiter //

create trigger tig_delete
after delete 
on stdinfo 
for each row 

begin
	insert into log_data(action_at,action_type) value (now(),"Record Deleted");
end;






