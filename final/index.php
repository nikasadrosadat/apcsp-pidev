<!DOCTYPE html>
<html>
  <head>
    <title>GPA CALCULATOR</title>
  </head>


  <body>

    <h1>GPA CALCULATOR</h1>
    <p>THIS IS A UNWEIGHTED GPA CALCULATOR FOR YOUR CURRENT SCHOOL SEMESTER</p>

    <?php
       // define variables and set to empty values
       $p1 = $output = $retc = "";
       $p2 = $output = $retc = "";
       $p3 = $output = $retc = "";
       $p4 = $output = $retc = "";
       $r = $output = $retc = "";
       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $p1 = test_input($_POST["p1"]);
         $p2 = test_input($_POST["p2"]);
         $p3 = test_input($_POST["p3"]);
         $p4 = test_input($_POST["p4"]);
         $r = test_input($_POST["r"]);
         exec("/usr/lib/cgi-bin/sp1b/final/gpa " . $p1 . " " . $p2 . " " . $p3 . " " . $p4 . " " . $r, $output, $retc); 
       }
       function test_input($data) {
         if ($data == "") {
         $data = "n";
         }
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      P1: <input type="text" name="p1"><br>
      P2: <input type="text" name="p2"><br>
      P3: <input type="text" name="p3"><br>
      P4: <input type="text" name="p4"><br>
      DO YOU WANT YOUR GPA TO BE RATED?(y/n): <input type="text" name="r"><br>
      <input type="submit">
    </form>

    <?php
       echo "<h2>Your Input:</h2>";
       echo $p1;
       echo "<br>";
       echo $p2;
       echo "<br>";
       echo $p3;
       echo "<br>";
       echo $p4;
       echo "<br>";
       echo $r;
       echo "<br>";
       
       echo "<h2>C Program Output:</h2>";
       foreach ($output as $line) {
         echo $line;
         echo "<br>";
       }
       
       echo "<h2>C Program Return Code:</h2>";
       echo $retc;
      
     ?>
    
  </body>
</html>
