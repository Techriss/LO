create table książki (
    IDK int primary key,
    tytuł varchar(30),
    autor varchar(20)
)

create table wypozyczajacy (
    IDW int primary key,
    imie varchar(20),
    nazwisko varchar(20),
    ID_ksiazki int,
    Foreign key (ID_ksiazki) references ksiazki(IDK)
)





create table zawodnicy (
    idz int primary key,
    imie varchar(20),
    nazwisko varchar(20),
    id_szkoly int,
    foreign key (id_szkoly) references szkoly(ids)
)

create table szkoly (
    ids int primary key,
    szkola varchar(20)
)