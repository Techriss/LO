<?php

    $gatunek = $_POST['gatunek'];
    $rodzaj = $_POST['rodzaj'];
    $polaczenie = new mysqli('localhost', 'root', '', 'szkola');
    $polaczenie->query("insert into drzewa(Gatunek, Rodzaj) VALUES ('$gatunek', '$rodzaj')");
    $polaczenie->close();

?>
