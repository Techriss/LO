
<?php

    $a = $_GET['liczba'];


    if ($a % 2 == 0) {
        echo '<h1>parzysta</h1>';
    }
    else {
        echo '<h1>nieparzysta</h1>';
    }
    



    $e = $_GET['e'];
    $f = $_GET['f'];
    
    echo '<h1>Pole deltoidu wynosi '.($e*$f/2);
    
    
    
    
    $a = $_GET['a'];
    $b = $_GET['b'];
    $c = $_GET['c'];

    $delta = $b * $b - 4 * $a * $c;

    echo '<h1>';
    if ($delta < 0) echo 'brak miejsc zerowych';
    else if ($delta == 0) echo '1 miejsce zerowe';
    else echo '2 miejsca zerowe';
    echo '</h1>';






    for ($x = 1; $x <= 100; $x++) {
        if ($x % 2 == 1) echo $x.' ';
    }

    
    $x = $_GET['x'];
    $y = $_GET['y'];
    $sum = 0;


    for ($i = $x+1; $i < $y; $i++) {
        $sum += $i;
    }

    echo 'suma: '.$sum;


    


?>



<form action='2.php' method='GET'>
    <input type='number' name='liczba'>
    <input type='submit' value='wyslij'>
</form>


<form action='2.php' method='GET'>
    <h1>Deltoid</h1>
    <input type='number' name='e'>
    <input type='number' name='f'>
    <input type='submit' value='oblicz'>
</form>



<form action='2.php' method='GET'>
    <h1>Funkcja kwadratowa</h1>
    <input type='number' name='a'>
    <input type='number' name='b'>
    <input type='number' name='c'>
    <input type='submit' value='oblicz'>
</form>



<form action='2.php' method='GET'>
    <h1>przedzial</h1>
    <input type='number' name='x'>
    <input type='number' name='y'>
    <input type='submit' value='oblicz'>
</form>
