<?php

    $title = $_POST['title'];
    $details = $_POST['details'];

    $sql = new mysqli('localhost', 'root', '', 'szkola');
    $link = $sql->query("insert into todo(title, details) values ('$title', '$details')");

    header('Location: index.html');
    $link->close();

?>