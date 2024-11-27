//le but de l'exercice est d'afficher le compte a rebours de start à 1 compris, puis "GO!"
for (int i = start; i >= 1; i--) {
        printf("%d ", i);
    }
printf("GO!");

//Le but de cet exercice est de déclarer une variable power, dont la valeur sera xn. Autrement dit x à la puissance n.
int power ; 
power= 1 ;
    if (n == 0){
        power= 1;
    }
    if (n>0){
    for (int i = 0; i < n ; i++ ){
        power = power * x;
        }
    }

//Le but de cet exercice est de déclarer une variable entière facto, dont la valeur sera n!
int facto;
facto = 1; 

for (int i = 2; i <= n; i++) {
        facto = facto * i;
    }

//le but de l'exercice est d'afficher la table de multiplication de n.
for (int i=1; i <=10 ; i++ ){
    printf("%d x %d = %d\n", n, i, n * i);
}

//Un nombre est dit premier, si il est divisible par exactement deux entiers : 1 et lui même.
#include <stdbool.h>
bool premier = true;
 if (n <= 1) {
        premier = false;
}
 for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                premier = false;
                break; 
        }
 }

//Le but de cet exercice est de tracer une ligne bleue centrale horizontale, dans une grille. 
if (hauteur % 2 == 1 ){
    setFillColor("blue");
    int x = 0;
    int y = hauteur /2 ;
    for(x ; x < largeur; x++){
        fillCase(x,y);
    }
} else {
    setFillColor("blue");
    int x =0; 
    int y = hauteur /2 ;
    int y2 = hauteur/ 2 -1 ; 
    for (x; x < largeur ; x++){
        fillCase(x , y);
        fillCase(x , y2);
    }
}

//Le but de cet exercice est de tracer une ligne bleue centrale horizontale, puis une ligne verte centrale verticale dans une grille. 
if (hauteur % 2 == 1 ){
    setFillColor("blue");
    int x = 0;
    int y = hauteur /2 ;
    for(x ; x < largeur; x++){
        fillCase(x,y);
    }
} else {
    setFillColor("blue");
    int x =0;
    int y = hauteur /2 ;
    int y2 = hauteur/ 2 -1 ;
    for (x; x < largeur ; x++){
        fillCase(x , y);
        fillCase(x , y2);
    }
}
if (largeur  % 2 == 1 ){
    setFillColor("green");
    int y = 0;
    int x = largeur /2 ;
    for(y ; y < hauteur; y++){
        fillCase(x,y);
    }
} else {
    setFillColor("green");
    int y =0;
    int x = largeur /2 ;
    int x2 = largeur/ 2 -1 ;
    for (y ; y < hauteur; y++){
        fillCase(x , y);
        fillCase(x2 , y);
    }
}

//Le but de cet exercice est de tracer un cadre vert dans une grille, c'est a dire de colorer les bords de celle-ci. 
int x = 0;
setFillColor("green");
for ( x; x < largeur ; x++){
        fillCase(x , 0);
}       


setFillColor("green");
int b = 0;
for(b ; b< largeur; b++){
        fillCase(b, hauteur-1);
}


setFillColor("green");
int a = 1;
for(a ; a < hauteur-1; a++){
        fillCase(0,a);
}


setFillColor("green");
int c =1;
for(c ; c < hauteur-1; c++){
        fillCase(largeur-1,c);
}

//Drawing : Cases par cases, en 4
setFillColor("blue");
for ( int x = 0; x < largeur/2 ; x++){
    for (int y = 0; y < hauteur/2 ; y++){
        fillCase(x , y);
    }
}


setFillColor("red");
for ( int x = largeur/2; x < largeur ; x++){
    for (int y = 0; y < hauteur/2 ; y++){
        fillCase(x , y);
    }
}

setFillColor("green");
for ( int x = 0; x < largeur/2 ; x++){
    for (int y = hauteur/2; y < hauteur ; y++){
        fillCase(x , y);
    }
}


setFillColor("yellow");
for ( int x = largeur/2; x < largeur ; x++){
    for (int y = hauteur/2; y < hauteur ; y++){
        fillCase(x , y);
    }
}

//Le but de cet exercice est de tracer des barres noires verticales dans une grille
setFillColor("black");
    for (int x = 0; x < largeur; x++) {
        for (int y = 0; y < hauteur; y++) {
            if (x % 2 == 0) {
                fillCase(x,y);
            } else {
                continue;
            }
        }
    }

//Le but de cet exercice est de créer un damier noir et blanc dans une grille, c'est a dire de colorer les cases alternativement en noir et blanc.
for (int y= 0; y < hauteur; y++) {
        for (int x = 0; x < largeur; x++) {
            if ((x+y)% 2 != 0) {
                setFillColor("white");
            } if((x+y) % 2 == 0) {
                setFillColor("black");
            }
            fillCase(x,y);
        }
    }

//Le but de cet exercice est de tracer des barres noires verticales dans une grille
setFillColor("black");
    for (int x = 0; x < largeur; x++) {
        for (int y = 0; y < hauteur; y++) {
            if  (x % (barre + espace) < barre) { // pour remplir sois en noir ou blanc 
                fillCase(x,y);
        }
    }
}

//Le but de cet exercice est de tracer un cadre vert dans une grille
/*int x = 0;
setFillColor("green");
for ( x; x < largeur ; x++){
        fillCase(x , 0);
}


setFillColor("green");
int b = 0;
for(b ; b< largeur; b++){
        fillCase(b, hauteur-1);
}


setFillColor("green");
int a = 1;
for(a ; a < hauteur-1; a++){
        fillCase(0,a);
}


setFillColor("green");
int c =1;
for(c ; c < hauteur-1; c++){
        fillCase(largeur-1,c);
}
*/


setFillColor("green");
// boucle qui parcours le cadre gauche 
for (int a = 0; a < cadre; a++) {
    for (int b = cadre; b < hauteur - cadre; b++) {
        fillCase(a, b);
    }
}

// boucle qui parcours le cadre droit
for (int a = largeur - cadre; a < largeur; a++) {
    for (int b = cadre; b < hauteur - cadre; b++) {
        fillCase(a, b);
    }
}

// boucle qui parcours le cadre en bas 
for (int c = 0; c < largeur; c++) {
    for (int d = hauteur - cadre; d < hauteur; d++) {
        fillCase(c, d);
    }
}

// boucle qui parcours le cadre en haut 
for (int c = 0; c < largeur; c++) {
    for (int d = 0; d < cadre; d++) {
        fillCase(c, d);
    }
}

//Le but de cet exercice est de remplir la partie de la grille au dessus de la diagonale allant du coin inférieur gauche au coin supérieur droit en rouge.Le but de cet exercice est de remplir
//la partie de la grille au dessus de la diagonale allant du coin inférieur gauche au coin supérieur droit en rouge.
setFillColor("red");

//int largeur = taille ;
//int hauteur = taille;
int x ;
int y ;
for ( x=0 ; x < largeur; x++){
    for (y=0 ; y < hauteur-x; y++){
        fillCase(x,y);
    }
}

//Le but de cet exercice est de tracer un anneau rouge centré dans une grille, c'est a dire de colorer toutes les cases dont la distance au centre se trouvent dans un intervalle. 
int x = 0;
int y = 0;
double centre_x = (largeur - 1) / 2.0;
double centre_y = (hauteur - 1) / 2.0;


setFillColor("red");
for (x = 0; x < largeur; x++) {
        for ( y = 0; y < hauteur; y++) {
            int dx = x - centre_x; // difference par rapport a X
            int dy = y - centre_y; // difference par rapport a Y
            double distance_centre = sqrt((x - centre_x)*(x - centre_x) + (y - centre_y)*(y - centre_y ));
            if (distance_centre >= interieur && distance_centre <= exterieur) { // pour savoir si le point fait parti du cercle ou non 
                fillCase(x, y);
            } else {
                continue;
            }
    }
}

