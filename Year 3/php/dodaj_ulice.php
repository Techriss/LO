<?php

    $ulica = $_POST['ulica'];
    $polaczenie = new mysqli('localhost', 'root', '', 'szkola');
    $polaczenie->query("insert into ulice(ulica) VALUES ('$ulica')");
    $polaczenie->close();

?>
