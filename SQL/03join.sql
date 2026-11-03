use mydb;

insert into product (pname , price, qty) values 
('mouse', 245,9),
('charger', 2345,10),
('cpu', 4345,12),
('cctv', 1000,3);

insert into seller (sname,city) values 
('flipkart','Mumbai'),
('zepto','delhi'),
('blinkit','rajkot');

select*from product;
select*from seller;

select * from product join seller on product.id=seller.id; 

select product.pname,product.price,seller.sname,seller,city
from product join seller on product .id=seller.id;

select p.pname ,p.price, ss.snme, s.city
from product


