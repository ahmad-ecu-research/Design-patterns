<!DOCTYPE html>
<html>
<head>
    <title>Enemy Factory Example</title>
    <style>
        #gameCanvas {
            border: 1px solid black;
        }
    </style>
    <script src="enemyFactory.js"></script>
</head>
<body>
    <h1>Enemy Factory Example</h1>
    <canvas id="gameCanvas" width="400" height="300"></canvas>
    <button onclick="createEnemies()">Create Enemies</button>
    <div id="output"></div>
    <input type="text" id="textBox" placeholder="Enter your name" />
    <p id="greeting"></p>

    <script>
        const canvas = document.getElementById('gameCanvas');
        const ctx = canvas.getContext('2d');
        const outputElement = document.getElementById('output');
        const textBox = document.getElementById('textBox');
        const greeting = document.getElementById('greeting');

        function drawEnemy(x, y) {
            ctx.fillStyle = 'red';
            ctx.fillRect(x, y, 50, 50);
        }

        function clearCanvas() {
            ctx.clearRect(0, 0, canvas.width, canvas.height);
        }

        function createEnemies() {
            clearCanvas();
            outputElement.innerHTML = '';

            const goblin = EnemyFactory.createEnemy('Goblin');
            const troll = EnemyFactory.createEnemy('Troll');
            const dragon = EnemyFactory.createEnemy('Dragon');

            if (goblin) {
                const goblinOutput = document.createElement('p');
                goblinOutput.textContent = 'Goblin: ' + goblin.name + ', Attack Power: ' + goblin.attackPower;
                outputElement.appendChild(goblinOutput);
            }

            if (troll) {
                const trollOutput = document.createElement('p');
                trollOutput.textContent = 'Troll: ' + troll.name + ', Attack Power: ' + troll.attackPower;
                outputElement.appendChild(trollOutput);
            }

            if (dragon) {
                const dragonOutput = document.createElement('p');
                dragonOutput.textContent = 'Dragon: ' + dragon.name + ', Attack Power: ' + dragon.attackPower;
                outputElement.appendChild(dragonOutput);
            }

            // Show greeting with the entered name
            const name = textBox.value;
            greeting.textContent = 'Hello, ' + name + '!';

            // Add animation or effects here
            animateEnemies();
        }

        function animateEnemies() {
            let x = 0;

            function moveEnemies() {
                clearCanvas();
                drawEnemy(x, 125); // You can customize the y-coordinate and appearance of the enemy

                x += 2; // Adjust the movement speed

                if (x > canvas.width) {
                    x = 0;
                }

                requestAnimationFrame(moveEnemies);
            }

            moveEnemies();
        }
    </script>
</body>
</html>
