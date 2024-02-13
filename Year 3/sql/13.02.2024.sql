create table studenci_dane(
    Id int primary key,
    Nazwisko varchar(20),
    Imie varchar(20),
    Kod_pocztowy varchar(6),
    Miasto varchar(20),
    Ulica varchar(20),
    Ubezpieczenie varchar(3),
    Komentarz varchar(255)

);

INSERT INTO studenci_dane VALUES (1, "Kowalski", "Jan", "05-805", "Warszawa", "Polna", "Tak", "nie");
INSERT INTO studenci_dane VALUES (2, "Onek", "Karol", "21-370", "Podlasie", "Smolna", "Tak", "Tak");
INSERT INTO studenci_dane VALUES (3, "Niedbala", "Szymon", "32-432", "Wroclaw", "lesna", "NIE", "tak");
INSERT INTO studenci_dane VALUES (4, "Filip", "Piotr", "12-234", "Warszawa", "nieiwiem", "TAK", "tak");
INSERT INTO studenci_dane VALUES (5, "Strup", "Piotr", "65-432", "Warszawa", "górczewska", "TAK", "nie");
INSERT INTO studenci_dane VALUES (6, "Chojnacka", "Ania", "00-588", "Warszawa", "Chmielna", "NIE", "nie");
INSERT INTO studenci_dane VALUES (7, "pasiecznik", "julia", "12-345", "warszawa", "wesola", "NIE", "NIE");
INSERT INTO studenci_dane VALUES (8, "Jerzy"," Busko", "05-840", "Brwinów", "Zgoda", "Tak", "bez komentarza");
INSERT INTO studenci_dane VALUES (9, "Glowacki", "Rys", "02-973", "Warszawa", "oś królweska", "nie", "tak");
INSERT INTO studenci_dane VALUES (10, "Strzabala", "Klara", "01-934", "Warszawa", "Perseusza", "nie", "tak");
INSERT INTO studenci_dane VALUES (11, "Woźniakowski", "Filip", "05-500", "Piaseczno", "Pomorska", "nie", "nie");
INSERT INTO studenci_dane VALUES (12, "Wokulski", "Stanislaw", "00-432", "Warszawa", "Nowy Świat", "nie", "nie");
INSERT INTO studenci_dane VALUES (13, "Wokuki", "Stas", "00-431", "Warszawa", "Usynów", "nie", "nie");
INSERT INTO studenci_dane VALUES (14, "Soplica", "MAurycy", "00-123", "Słupsk", "Usynów", "nie", "nie");
INSERT INTO studenci_dane VALUES (15, "Maria", "Magdalena", "00-007", "Radom", "Usynów", "nie", "nie");


delete from studenci_dane where nazwisko="kowalski";
delete from studenci_dane where ulica="usynów";
delete from studenci_dane where miasto="warszawa";

update studenci_dane set nazwisko="domański" where imie="piotr";
update studenci_date set miasto="halinów" where miasto="warszawa";


