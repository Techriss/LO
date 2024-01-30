select au.imię, au.nazwisko, ar.tytuł from artykuły as ar inner join autorzy as au
where ar.termin between #11/1/2020# and #31/12/2020#


select au.imię, au.nazwisko, ar.tytuł from artykuły as ar inner join autorzy as au
where (ar.termin between #11/1/2020# and #31/12/2020#)
and ar.dostarczono = no


select u.imię, u.nazwisko, SUM(w.punkty) as suma from uczestnicy as u inenr join wyniki on u.id = w.id_uczestnicy group by u.nazwisko
where u.imię LIKE 'K*'
having sums < 300


select produkt, cena, (cena*0.9) as 'z rabatem'


IS NULL

IS NOT NULL