SELECT * FROM Autorzy WHERE Nazwisko LIKE 'W*'
SELECT * FROM Autorzy WHERE Nazwisko LIKE '*a'

SELECT * FROM Autorzy, Artykuły

SELECT * FROM Autorzy INNER JOIN Artykuły ON Autorzy.ID = Artykuly.Autor
SELECT Autorzy.Imie, Autorzy.Nazwisko, Artykuły.Tytuł FROM Autorzy INNER JOIN Artykuły ON Autorzy.ID = Artykuly.Autor

SELECT Autorzy.Nazwisko, Artykuły.Termin, Artykuły.Dział FROM Autorzy INNER JOIN Artykuły ON Autorzy.ID = Artykuly.Autor

SELECT au.nazwisko, ar.dział from autorzy as au INNER JOIN artykuły as ar on au.id = ar.autor where au.nazwisko = "bobrzak"
SELECT au.imię, au.nazwisko from autorzy as au INNER JOIN artykuły as ar on au.id = ar.autor where ar.strony > 5 AND ar.strony <= 10

SELECT au.imię, au.nazwisko from autorzy as au LEFT JOIN artykuły as ar on au.id = ar.autor where ar.strony > 5 AND ar.strony <= 10
SELECT au.imię, au.nazwisko from autorzy as au RIGHT JOIN artykuły as ar on au.id = ar.autor where ar.strony > 5 AND ar.strony <= 10

SELECT au.imię, au.nazwisko from autorzy as au INNER JOIN artykuły as ar on au.id = ar.autor where ar.strony > 6 AND au.imię LIKE '*a' ORDER BY au.nazwisko ASC

