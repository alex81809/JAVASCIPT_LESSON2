<!DOCTYPE html>
<html>

<head>
    <title>Document</title>
</head>

<!--Body-->

<body>
    <button onclick="addition(10,20)">Add Me</button>

    <p id="result"></p>


<!--Script-->
<script>
    function addition(num1, num2) {
        var result = num1 + num2

        document.getElementById("result").innerHTML = "The calculated result is: " + result
    }
</script>
</body>
</html>
