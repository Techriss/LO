<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Todo</title>
    <link rel='stylesheet' href='./style.css' type='text/css'>
</head>
<body>
    <?php

        $id = $_POST['id'];
        $done = $_POST['done'] == 'on' ? 1 : 0;

        $sql = new mysqli('localhost', 'root', '', 'szkola');
        $link = $sql->query("update todo set done = '$done' where id = '$id'");

        
        header('Location: index.html');
        $link->close();

    ?>

    <script>
        window.location.href = "index.html";
    </script>
    
</body>
</html>





