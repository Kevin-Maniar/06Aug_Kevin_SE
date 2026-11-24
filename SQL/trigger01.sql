create database triggrtDB;
use triggrtDB;

create table stdinfo(
id int primary key auto_increment,
name varchar(20),
city varchar(20)
);

create table backup_stdinfo(
id int primary key auto_increment,
name varchar(20),
city varchar(20)
);

delimiter //
	create trigger fire_data 
	after insert 
    on stdinfo
    for each row 
    begin 
		insert into backup_stdinfo (name , city ) values (NEW.name,NEW.city);
    end;
delimiter //

insert into stdinfo(name,city) values ('Kevin','Rajkot'); 

select * from stdinfo;
select * from backup_stdinfo;