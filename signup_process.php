<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "test5";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}
if (isset($_POST['signup-btn'])) {
    $username = $_POST['name'];
    $phone = $_POST['phone'];
    $dob = $_POST['dob'];
    $password = password_hash($_POST['password'], PASSWORD_BCRYPT); // Hash the password
    $email = $_POST['email'];

    $insert = mysqli_query($conn, "INSERT INTO user(name, email, phone_no, dob, password) VALUES ('$username','$email','$phone','$dob','$password')");

    if (!$insert) {
        echo "Data Not Inserted!";
    } else {
        echo "Data Inserted!";
        header("Location:./profile.php");
    }
}
?>
