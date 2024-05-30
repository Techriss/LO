<?php

    $id = $_POST['id'];

    $sql = new mysqli('localhost', 'root', '', 'szkola');
    $link = $sql->query("delete from todo where id = '$id'");

    header('Location: index.html');
    $link->close();

?>