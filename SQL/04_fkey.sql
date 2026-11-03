create database newdb1;

use newdb1;

create table product(id integer primary key auto_increment,pname text);

create table category(c_id integer primary key auto_increment,
model text,
price integer,
id integer , 
foreign key (id) references product(id));

insert into product (pname) values ('ac'),('tv'),('mobile'),('Laptop');
select * from product;

insert into category (model,price,id) values ('Amazon basics','23693',1),
('Amazon basics','23693',1),
('iphone','2423693',3),
('dell','32598',4),
('lenovo','236443',4);
select * from category;
insert into category (model,price,id) values ('poco','13693',3);
insert into category (model,price,id) values ('oppo','33693',3);

create table Persons1(id integer primary key,Name text, age int check (age>=18));


create table student(
id integer primary key auto_increment,
name text,
sub text,
city varchar(20) default 'rajkot');

SELECT @@sql_mode;


