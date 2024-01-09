SELECT au.imie, au.nazwisko, SUM(ar.strony) FROM autorzy as au inner join artykuly as ar on au.id = ar.autor
having count(ar.strony) < 5

select u.imie, u.nazwisko, avg(w.punkty) as srednia_punktow from uczestnicy as u inner join wyniki as w on u.id = w.id_uczestnicy 

select u.imie, u.nazwisko, count(w.id_dyscypliny) as ile_dyscyplin from uczestnicy as u inner join wyniki as w on u.id = w.id_uczestnicy group by u.id_uczestnicy
select u.imie, u.nazwisko, max(w.punkty) as max_punktow from uczestnicy as u inner join wyniki as w on u.id = w.id_uczestnicy group by u.id_uczestnicy

select au.imie, au.nazwisko from autorzy as au inner join artykuly as ar where ar.dział = 'sprzęt' or ar.dział = 'samouczki' or w.dział = 'apliakcje' group by au.nazwisko

select au.nazwisko 
from autorzy as au 
inner join artykuły as ar 
on au.id = ar.autor
where ar.dział = 'sprzęt' or ar.dział = 'samouczki' or ar.dział = 'apliakcje' 
group by au.nazwisko


select au.imię, au.nazwisko, ar.tytuł
from autorzy as au 
inner join artykuły as ar 
on au.id = ar.autor
where ar.termin between #20/10/2020# and #20/11/2020#