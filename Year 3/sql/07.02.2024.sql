create database zawodnicy;
use zawodnicy;

create table szkoly (
    ids int primary key,
    szkola varchar(20) 
)

create table zawodnicy (
    idz int primary key,
    imie varchar(20),
    nazwisko varchar(20),
    id_szkoly int,
    foreign key (id_szkoly) references szkoly(ids)
)





create table klasy (
    idk int primary key,
    klasa varchar(20)
)

create table nauczyciele (
    idn int primary key,
    imie varchar(20),
    nazwisko varchar(20)
)

create table uczy (
    idk int,
    idn int,
    foreign key (idk) references klasy(idk),
    foreign key (idn) references nauczyciele(idn),
)






create table przedmioty (
    idp int primary key,
    przedmiot varchar(20)
)

create table nauczyciele (
    imie varchar(20),
    nazwisko varchar(20),
    id_przedmiotu int,
    foreign key id_przedmiotu references przedmioty(idp)
)

create table cele (
    idc int primary key,
    cel varchar(20),
    id_przedmiotu int,
    foreign key id_przedmiotu references przedmioty(idp)
)

create table plan_wycieczek (
    idw int primary key,
    id_celu int,
    foreign key id_celu references cele(idc),
    temat varchar(20),
    miesiac varchar(20),
    liczba_dni int
)


drop table plan_wycieczek;
drop table cele;
drop table nauczyciele;
drop table przedmioty;