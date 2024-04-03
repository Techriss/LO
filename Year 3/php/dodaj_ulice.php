<?php

    $ulica = $_POST['ulica'];
    $polaczenie = new mysqli('localhost', 'root', '75750506#200420#', 'szkola');
    $polaczenie->query("insert into ulice(ulica) VALUES ('$ulica')");
    $polaczenie->close();

?>
