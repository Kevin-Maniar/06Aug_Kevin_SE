select user from mysql.user;

create user 'kevin'@'localhost';

grant  create on *.* to 'kevin'@localhost;
grant  insert,update,delete on *.* to 'kevin'@localhost;

grant  select on *.* to 'kevin'@localhost;

revoke select on *.* from 'kevin'@localhost;