select * from aktorzy 
inner join (filmy_aktorzy inner join filmy on filmy_aktorzy.film_id = filmy.film_id) 
on aktorzy.aktor_id = filmy_aktorzy.aktor_id 
where aktorzy.nazwisko = 'kowalski';


select * from aktorzy 
inner join (filmy_aktorzy inner join filmy on filmy_aktorzy.film_id = filmy.film_id where filmy.tytul = 'bekarty wojny') 
on aktorzy.aktor_id = filmy_aktorzy.aktor_id;


select towary.cena, pozycja.ilosc, pozycja.pozycja from towary inner join pozycja on towary.id = pozycja.id_towaru;


select pracownicy.nazwisko, klienci.nazwisko from pracownicy inner join (faktury inner join klienci on faktury.id_klient = klienci.id_klienta) on faktury.id_pracownik = pracownicy.id_pracwownika;


select faktury.id_pracownik from faktury inner join (pozycja inner join towary on towary.id_towaru = pozycja.id_towaru where towary.nazwa = 'cukier') on pozycja.id_faktury = faktury.id_faktury;
select faktury.id_pracownik from faktury inner join (pozycja inner join towary on towary.id_towaru = pozycja.id_towaru) on pozycja.id_faktury = faktury.id_faktury where towary.nazwa = 'cukier';