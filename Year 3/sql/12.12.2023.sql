create table klient(
    kod_klienta int primary key,
    nazwa varchar(20),
    adres varchar(20)
)

create table wyrob(
    nr_wyrobu int primary key,
    symbol varchar(20),
    cena int
)

create table zamowienie(
    nr_wyrobu int references wyrob(nr_wyrobu),
    nr_klienta int references klient(nr_klienta),
    liczba int,
    termin date
)

create table magazyn(
    kod_materialu varchar(20) primary key,
    nazwa varchar(20),
    ilosc int,
    jednostki varchar(20)
)

create table czesc(
    nr_czesci int primary key,
    nazwa varchar(20)
)

create table struktura(
    nr_czesci int references czesc(nr_czesci),
    nr_wyrobu int references wyrob(nr_wyrobu),
    sztuk int
)









create table klient(
    imie varchar(20),
    nazwisko varchar(20),
    adres varchar(20),
    telefon varchar(20),
    id_klienta int primary key
)

create table towary(
    id_towaru int primary key,
    cena int,
    nazwa varchar(20)
)

create table pracownicy(
    id_pracownika int primary key,
    imie varchar(20),
    nazwisko varchar(20),
    stanowisko varchar(20)
)

create table faktury(
    id_faktury int primary key,
    id_klienta int references klient(id_klienta),
    id_pracownika int references pracownicy(id_pracownika)
)

create table pozycja(
    id_faktury int references faktury(id_faktury),
    pozycja int,
    ilosc int,
    id_towaru int references towary(id_towaru)
)

insert into klient values ('jan', 'kowalski', 'smolna 30', '18452345243', 1)