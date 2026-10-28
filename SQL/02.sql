CREATE TABLE stdinfo(
	id INTEGER PRIMARY KEY AUTOINCREMENT,
	name TEXT,
	city TEXT);
	
INSERT into stdinfo (name,city) VALUES

('Kevin','Rajkot'),
('Jay','Morbi'),
('Tara','Pune'),
('Achuu','Mumbai'),
('Dev','Surat');

ALTER TABLE stdinfo add COLUMN subject TEXT;

alter table stdinfo DROP column subject;