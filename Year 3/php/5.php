<?php

    $polaczenie = new mysqli('localhost', 'root', '', 'szkola');
    // serwer, uzytkownik, haslo, baza danyh

    $wyswietl = $polaczenie->query('select imie, nazwisko from studenci_dane');

    while ($wiersz = $wyswietl->fetch_array()) {
        echo 'imie: '.$wiersz['imie'].' nazwisko: '.$wiersz['nazwisko'].'<br>';
    }



    $aktorzy = $polaczenie->query('select tytul, rezyser, rok_produkcji from filmy');

    while ($wiersz = $aktorzy->fetch_array()) {
        echo $wiersz['tytul'].' '.$wiersz['rezyser'].' '.$wiersz['rok_produkcji'];
    }


?>