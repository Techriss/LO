create table ksiazki (
    IDK int primary key,
    tytul varchar(20),
    autor varchar(20)
)

create table wypozyczajacy (
    IDW int,
    imie varchar(20),
    nazwisko varchar(20),
    id.ksiazki int references ksiazki(id)
)





create table drzewa (
    idd int primary key,
    gatunek varchar(20),
    rodzaj varchar(20)
)

create table ulica (
    idu int primary key,
    ulica varchar(20)
)

create table drzewostan (
    idd int references drzewa(idd),
    idu int references ulica(idu)
    liczba int
)



create table rodzaje (
    idr int primary key,
    rodzaj varchar(20)
)

create table dzieci (
    idw int primary key,
    imie varchar(20),
    nazwisko varchar(20),
    wiek int
)

create table prezenty ( 
    idp int primary key,
    prezent varchar(20),
    idr int references rodzaje(idr),
    idw int references dzieci(idw)
)






create table przedmioty (
    idp int primary key,
    przedmiot varchar(20)
)

create table nauczyciele (
    idn int primary key,
    imie varchar(20),
    nazwisko varchar(20),
    idp int references przedmioty(idp)
)

create pla