create table uczniowie (
    id int,
    imie varchar(20),
    nazwisko varchar(20),
    telefon varchar(20),
    email varchar(20)
)


insert into uczniowie  values (1, 'jan', 'kowalski', NULL, NULL)
insert into uczniowie  values (2, 'albert', 'kowalski', NULL, NULL)
insert into uczniowie  values (3, 'bogusław', 'kowalski', NULL, NULL)
insert into uczniowie  values (4, 'zbigniew', 'kowalski', NULL, NULL)
insert into uczniowie  values (5, 'artur', 'kowalski', NULL, NULL)


delete from uczniowie where id=1