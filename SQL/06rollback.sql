use testdb;
insert into stdinfo(name,city) values ('jay','surat');
insert into stdinfo(name,city) values ('tara','surat');
insert into stdinfo(name,city) values ('rahul','surat');
insert into stdinfo(name,city) values ('kevin','surat');
commit;

select * from stdinfo;

delete from stdinfo where id=1;

delete from stdinfo where id=3;

delete from stdinfo where id=1;

rollback;