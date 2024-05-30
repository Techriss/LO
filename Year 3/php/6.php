<?php 

    $polaczenie = new mysqli('localhost', 'root', '', 'szkola');
    $wyswietl = $polaczenie->query('select id, imie, nazwisko from aktorzy');

    while ($wiersz = $wyswietl->fetch_array()) {
        echo $wiersz['id'].' '.$wiersz['imie'].' '.$wiersz['nazwisko'].'<br>'; 
    }






    $polaczenie = new mysqli('localhost', 'root', '', 'szkola');
    $wyswietl = $polaczenie->query('select id, imie, nazwisko from aktorzy');

    echo '<table>';
    echo '<tr> <td>id</td> <td>imie</td> <td>nazwisko</td> </tr>';

    while ($wiersz = $wyswietl->fetch_array()) {
        echo '<tr><td>'.$wiersz['id'].'</td><td>'.$wiersz['imie'].'</td><td>'.$wiersz['nazwisko'].'</td></tr>'; 
    }





?>