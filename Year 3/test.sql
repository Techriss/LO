select pensja_brutto from wynagrodzenia where id_pracownika = 8 and rok = 2018;

select pracownicy.dzial, wynagrodzenia.pensja_brutto from pracownicy inner join wynagrodzenia on pracownicy.id = wynagrodzenia.id_pracownika where pracownicy.pracownik LIKE "*4";

select SUM(wynagrodzenia.pensja_brutto) as "suma wynagrodzen", wynagrodzenia.rok from wynagrodzenia where wynagrodzenia.rok = 2018 or wynagrodzenia.rok = 2019 group by wynagrodzenia.rok;

select AVG(premie.premia) as "srednia premia" from premie where premie.rok = 2019;




select uczniowie.nazwisko from uczniowie inner join oceny on uczniowie.identyfikator = oceny.uczeń group by uczniowie.nazwisko having count(oceny.identyfikator) > 3;

select uczniowie.imię, uczniowie.nazwisko from uczniowie where uczniowie.klasa = "1a" and uczniowie.adres like "*Mikołajki*";

select przedmioty.nauczyciel from przedmioty inner join oceny on przedmioty.identyfikator = oceny.przedmiot where oceny.ocena = 6;

select uczniowie.nazwisko from uczniowie inner join oceny on uczniowie.identyfikator = oceny.uczeń where oceny.ocena = 5 group by uczniowie.nazwisko;
