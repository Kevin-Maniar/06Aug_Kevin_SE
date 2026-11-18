use testdb;

delimiter //

create procedure fetchcat()

begin
	select * from stdinfo;
end;
delimiter //
call fetchcat();

