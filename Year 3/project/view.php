<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Zadania</title>
        <link rel='stylesheet' href='./style.css' type='text/css'>
        <script src="https://ajax.googleapis.com/ajax/libs/jquery/2.1.1/jquery.min.js"></script>
    </head>
    <body>

        <div class='heading'>
            <h1>Lista Zadań</h1>
            <button onclick="window.location='add.html'">+</button>
        </div>  

        <div class='tasks'>

        <?php

            $sql = new mysqli('localhost', 'root', '', 'szkola');
            $link = $sql->query("select * from todo");

            while ($row = $link->fetch_array()) {
                $id = $row['ID'];
                $title = $row['title'];
                $details = $row['details'];
                $done = $row['done'] == 0 ? "" : "checked";

                echo "<div class='task'>";
                echo "<form method='post' action='update.php'><input type='text' name='id' style='display: none; visibility: hidden' value='$id'><input type='checkbox' name='done' ".$done." onchange='this.form.submit()'></form>";
                echo "<div>";
                echo "<h2>$title</h2>";
                echo "<p>$details</p>";
                echo "</div>";
                echo "<form method='post' action='delete.php'><input type='text' name='id' style='display: none; visibility: hidden' value='$id'><button type='submit'><img src='res/x.svg'></button></form>";
                echo "</div>";
            }


            $link->close();

        ?>

        <div>

        <script>
            alert = function(){};
        </script>
        
    </body>
</html>


