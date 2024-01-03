select uczestnicy.imie, uczestnicy.nazwisko, wyniki.punkty inner join wyniki on uczestnicy.id = wyniki.id_uczetnicy where wyniki.punkty between 10 and 20


select uczestnicy.imie, uczestnicy.nazwisko, avg(wyniki.punkty) as srednia inner join wyniki on uczestnicy.id = wyniki.id_uczetnicy group by uczestnicy.nazwisko
select uczestnicy.imie, uczestnicy.nazwisko, sum(wyniki.punkty) as suma inner join wyniki on uczestnicy.id = wyniki.id_uczetnicy group by uczestnicy.nazwisko
select uczestnicy.imie, uczestnicy.nazwisko, count(wyniki.punkty) as liczba inner join wyniki on uczestnicy.id = wyniki.id_uczetnicy group by uczestnicy.nazwisko
select uczestnicy.imie, uczestnicy.nazwisko, min(wyniki.punkty) as minimum inner join wyniki on uczestnicy.id = wyniki.id_uczetnicy group by uczestnicy.nazwisko
select uczestnicy.imie, uczestnicy.nazwisko, max(wyniki.punkty) as maximum inner join wyniki on uczestnicy.id = wyniki.id_uczetnicy group by uczestnicy.nazwisko

select autorzy.imie, autorzy.nazwisko, sum(artykuły.strony) 
as suma_stron, count(artykuly.tytuł) 
from autorzy 
inner join artykuły 
on autorzy.id = artykuly.autor
group by autorzy.nazwisko
