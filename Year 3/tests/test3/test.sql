create table TypKonta (
    id int primary key,
    nazwa varchar(45)
)

create table Uzytkownik (
    id int primary key,
    login varchar(45),
    haslo varchar(45),
    imie varchar(45),
    nazwisko varchar(45),
    email varchar(45),
    telefon varchar(45),
    typKontaId int references TypKonta(id)
)

create table usluga (
    id int primary key,
    nazwa varchar(45),
    opis varchar(45),
    nadataWystawienia date,
    uzytkownikId int references uzytkownik(id)
)

create table harmonogram (
    id int primary key,
    data date,
    godzpoczatek double,
    godzkoniec double,
    czydostepne bit,
    uslugaid int references usluga(id)
)

create table uzytkownikharmonogram (
    uzytkownikid int references uzytkownik(id),
    harmonogramid int references harmonogram(id)
)

insert into TypKonta values (1, 'dobre');
insert into TypKonta values (2, 'zle');

insert into uzytkownik values (1, NULL, NULL, 'jan', 'kowalski', NULL, NULL, 1);
insert into uzytkownik values (2, NULL, NULL, 'anna', 'nowak', NULL, NULL, 2);

insert into usluga values (1, NULL, NULL, NULL, 1);
insert into usluga values (2, NULL, NULL, NULL, 2);

insert into harmonogram values (1, NULL, 0, 0, 0, 1);
insert into harmonogram values (2, NULL, 0, 0, 0, 2);








create table kategorie (
    kategorieId int primary key,
    nazwaKategorii varchar(45)
)

create table filmy (
    filmId int primary key,
    kategoriaid int references kategorie(kategorieId),
    tytul varchar(45),
    rezyser varchar(45),
    rokprodukcji int
)

create table aktorzy (
    aktorid int primary key,
    imie varchar(45),
    nazwisko varchar(45)
)

create table filmaktorzy (
    filmid int references filmy(filmid),
    aktorid int references aktorzy(aktorid)
)

insert into kategorie values (1, 'dobra');
insert into kategorie values (2, 'zle');

insert into filmy values (1, 1, NULL, NULL, 0);
insert into filmy values (2, 2, NULL, NULL, 0);

insert into aktorzy values (1, NULL, NULL);
insert into aktorzy values (2, NULL, NULL);

insert into filmaktorzy values (1, 1);
insert into filmaktorzy values (2, 2);








create table uczniowie (
    uczenid int primary key,
    nazwiskoimie varchar(200),
    dataur date,
    miejsceur varchar(45),
    kod varchar(45),
    miejscowosc varchar(45),
    ulicanr varchar(45)
)

create table przedmioty (
    przedmiotid int primary key,
    nazwapelna varchar(45),
    nazwaskrot varchar(45)
)

create table nauczyciele (
    nauczycielid int primary key,
    nazwiskoimie varchar(200),
    wyksztalcenie varchar(45),
    stazpracy varchar(45),
    telefon varchar(45),
    email varchar(45)
)

create table ocenydef (
    ocenadefid int primary key,
    nazwapelna varchar(45),
    nazwaskrot varchar(45)
)

create table oceny (
    ocenaid int primary key,
    uczenid int references uczniowie(uczenid),
    przedmiotid int references przedmioty(przedmiotid),
    nauczycielid int references nauczyciele(nauczycielid),
    ocenadefid int references ocenydef(ocenadefid),
    data date
)

insert into uczniowie values (1, NULL, NULL, NULL, NULL, NULL, NULL);
insert into uczniowie values (2, NULL, NULL, NULL, NULL, NULL, NULL);

insert into przedmioty values (1, NULL, NULL);
insert into przedmioty values (2, NULL, NULL);

insert into nauczyciele values (1, NULL, NULL, NULL, NULL, NULL);
insert into nauczyciele values (2, NULL, NULL, NULL, NULL, NULL);

insert into ocenydef values (1, NULL, NULL);
insert into ocenydef values (2, NULL, NULL);

insert into oceny values (1, 1, 1, 1, 1, NULL);
insert into oceny values (2, 2, 2, 2, 2, NULL);

