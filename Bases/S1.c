//Aire d'un disque
double area;
area= M_PI * radius * radius; 

//Moyenne de 4 valeurs , On vous donne 4 entiers dans des variables v1, v2, v3 et v4.
float mean;
mean = (v1 + v2 + v3 + v4) / 4.0;

//déclarer une variable réelle decimals et de lui assigner la partie décimale de real.
double decimals;
decimals = modf(real, &decimals);

//créer un réel que vous nommerez result, et qui contiendra le résultat de votre polynôme en x.
double result;
result= a * x * x + b * x + c;

//Vous devez déclarer une variable entière time et lui assigner la valeur correspondant au nombre de secondes total représenté par les trois variables fournies.
int time;
time= (hours * 3600) + (minutes * 60) + seconds;

//déclarer trois variables seconds, minutes, hours et leur assigner les valeurs correspondant  respectivement au nombre de secondes, minutes et heures représentés par time.
int seconds, minutes, hours;
seconds = time % 60 ;
minutes = (time % 3600) / 60;
hours = time / 3600;

//avec la fonction pgcd fournie, faites en sorte que numerator et denominator contiennent les valeurs de la fraction une fois simplifiée.
int gcd= pgcd(numerator, denominator);
numerator /= gcd;
denominator /= gcd;

//tracer une maison. 
setFillColor('W');
rectangle(0, 100, 300, 200);


setFillColor('b');
rectangle(50, 150, 50, 50);


rectangle(100, 150, 50, 50);


setFillColor('B');
rectangle(200, 200, 50, 100);


setFillColor('r');
isoTriangle(0, 100, 150*2, -100);


//tracer une maison, mais cette fois-ci a diverses positions, selon les valeurs de deux entiers dx et dy, correspondant respectivement aux décalages en abscisse, et en ordonnée.
setFillColor('W');
rectangle(0 + dx, 100 + dy, 300, 200);


setFillColor('b');
rectangle(50 + dx, 150 + dy, 50, 50);


rectangle(100 + dx, 150 + dy, 50, 50);


setFillColor('B');
rectangle(200 + dx, 200 + dy, 50, 100);


setFillColor('r');
isoTriangle(0 + dx, 100 + dy, 300, -100);
