<?php



    if (isset($_GET['waga']) && isset($_GET['wzrost'])) {
        $waga = $_GET['waga'];
        $wzrost = $_GET['wzrost'];
        $bmi = $waga / ($wzrost*$wzrost);
    }
    else {
        echo 'nie podales wzrostu albo wagi';
    }

    echo 'twoje bmi to '.$bmi;





    $a = 5;
    $b = 6;
    $x = 1;

    for ($i = 1; $i < $b; $i++) {
        $x *= $a;
    }

    echo 'a do potegi b to '.$x;

    echo '<br><br>';







    $tablica = array(1, 2, 3, 4, 5);
    echo $tablica[3];

    foreach($tablica as $x) {
        echo $x.'<br>';
    }





    $kolor = array('zielony', 'niebieski', 'czerwony');

    foreach($kolor as $x) {
        if ($x == 'czarny') {
            echo 'tak, czarny jest w tablicy <br>';
        }
    }



?>



<form action='3.php' method='get'>
    <input type='text' name='waga'>
    <input type='text' name='wzrost'>
    <input type='submit' value='wyslij'>
</form>

