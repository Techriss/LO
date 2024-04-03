<?php

    $lista = $_POST['lista'];
    $polaczenie = new mysqli('localhost', 'root', '75750506#200420#', 'szkola');
    // $wyswietl = $polaczenie->query("select * from '$lista';");

    // while ($wiersz = $wyswietl->fetch_array()) {
    //     echo $wiersz.'<br>';
    // }


    if ($lista == "drzewa") {
        $wyswietl = $polaczenie->query("select * from drzewa");
        while ($wiersz = $wyswietl->fetch_array()) {
            echo "Gatunek: ".$wiersz['Gatunek']." rodzaj: ".$wiersz['Rodzaj']."<br>";
        }
    }


    $polaczenie->close();

?>
