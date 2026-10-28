CREATE table stdinfo(
	id INTEGER PRIMARY KEY AUTOINCREMENT,
	name TEXT , 
	sub TEXT , 
	mobile INTEGER UNIQUE);
	
INSERT INTO stdinfo (name,sub,mobile) VALUES

	('Keivin','SQL',8050450504),
	('Rahul','JAVA',8050440504),
	('Hitesh','HTML',8050380504),
	('Ashok','CSS',8050420504),
	('Ashok','CSS',8050470504);

UPDATE stdinfo SET sub='React' WHERE id=4;
UPDATE stdinfo SET name='Jigar' WHERE id=4;

DELETE FROM stdinfo WHERE id=5;

SELECT * FROM stdinfo;
SELECT name from stdinfo;

SELECT name from stdinfo where id =1;
SELECT * from stdinfo where id =1;

SELECT * from stdinfo where name like 'a%';
SELECT * from stdinfo where name like '%r';

SELECT * from stdinfo where name like '%h%';


CREATE TABLE product_master(
	id INTEGER PRIMARY KEY AUTOINCREMENT,
	p_name text,
	quntity INTEGER ,
	price INTEGER);
	
INSERT INTO product_master(p_name,quntity,price) VALUES
	('mouse',10,200),
	('Keyboard',5,450),
	('Printer',20,8000),
	('webcam',15,2000),
	('charger',30,500);
	
-- 	AGR function min, max , avg,sum,count

SELECT min(price) from product_master;
SELECT max(price) from product_master;

SELECT avg(price) from product_master;   
SELECT sum(price) from product_master; 
SELECT sum(price*quntity) from product_master; 

SELECT count(p_name) from product_master;



