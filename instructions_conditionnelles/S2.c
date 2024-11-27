//Déclarez une variable entière xAbs à laquelle vous assignerez la valeur absolue de x.
int xAbs; 
xAbs = abs(x);

//Si x est pair, affichez "pair", sinon, affichez "impair".
    if (x % 2 == 0) {
        printf("pair\n");
    } else {
        printf("impair\n");
    }

//Déclarez une variable entière minimum à laquelle vous assignerez la plus petite des deux valeurs fournies.
int minimum;
if (v1 > v2){
    minimum = v2;
}
else {
    minimum = v1;
}

//Déclarez une variable entière maximum à laquelle vous assignerez la plus grande des valeurs fournies.
int maximum;
maximum = v1; 

if (v2 > maximum) {
    maximum = v2;
}

if (v3 > maximum) {
    maximum = v3;
}

if (v4 > maximum) {
    maximum = v4;
}

//Si c est une minuscule, affichez "minuscule", Si c est une majuscule, affichez "majuscule", ...
if (c >= 'a' && c <= 'z') {
    printf("minuscule\n");
}
if (c >= 'A' && c <= 'Z'){
    printf("majuscule\n");
}
if (c >= '0' && c <= '10000'){
    printf("chiffre\n");
}
else{
    printf("autre chose");
}

//Salutations
if (age < 3) {
    printf("Gouzi gouzi!\n");
} else if (age >= 3 && age <= 15) {
    if (femme) {
        printf("Salut gamine.\n");
    } else {
        printf("Salut gamin.\n");
    }
} else {
    if (femme) {
        printf("Bonjour Madame.\n");
    } else {
        printf("Bonjour Monsieur.\n");
    }
}

//Mentions Bac
if (moyenne >= 8.0 && moyenne < 10.0) {
    printf("rattrapage\n");
} 
if (moyenne >= 12.0 && moyenne < 14.0) {
    printf("mention assez bien\n");
}  
if (moyenne >= 14.0 && moyenne < 16.0) {
    printf("mention bien\n");
} 
if (moyenne >= 16.0) {
    printf("mention tres bien\n");
} 
else{
    printf("-\n");
}

//Dimensions d'un rectangle
int largeur;
int hauteur; 

largeur = abs(Ax - Bx);
hauteur = abs(Ay - By);

//Calculatrice
int resultat;
    if (operation == '+') {
        resultat = partieGauche + partieDroite;
        printf("%d",resultat);
    } else if (operation == '-') {
        resultat = partieGauche - partieDroite;
        printf("%d",resultat);
    } else if (operation == 'x') {
        resultat = partieGauche * partieDroite;
        printf("%d",resultat);
    } else if (operation == '/') {
        if (partieDroite == 0) {
            printf("division impossible\n");
        }
        if (partieDroite !=0){
            resultat = partieGauche / partieDroite;
            printf("%d",resultat);
        }
    } else {
        printf("operation inconnue\n");
    }

//Indice de Masse Corporelle
float imc; 
imc = poids / ((taille/100) * (taille/100));

if (imc >= 40) {
    printf("obésité morbide\n");
} 
else if (imc >= 35.0) {
    printf("obésité sévère\n");
} 
else if (imc >= 30.0) {
    printf("obésité modérée\n");
} 
else  if (imc >= 25.0) {
    printf("surpoids\n");
} 
else if (imc >= 18.5) {
    printf("corpulence normale\n");
} 
else if (imc >= 16.5) {
    printf("maigreur\n");
}  
else {
    printf("famine\n");
}

//Franchise assurance
int franchise;
if (dommages * 0.10 < 15) {
        franchise = 15; 
    } else if (dommages * 0.10 > 500) {
        franchise = 500; 
    } else {
        franchise = dommages * 0.10; 
    }

//
#include <stdbool.h> // Pour utiliser un booleen
bool dedans = true; // on part du principe que le point est dedans  
if (Px <= Ax && Px <= Bx){
    dedans = false;
}
else if (Py <= Ay && Py >= By){
    dedans = false;
}

//Point dans rectangle
#include <stdbool.h> // Pour utiliser un booleen
bool dedans = true; // on part du principe que le point est dedans  
if (Px <= Ax && Px <= Bx){
    dedans = false;
}
else if (Py <= Ay && Py >= By){
    dedans = false;
}

//Racines d'un polynôme de degré 2
float delta;    
float racine1;
float racine2;

delta = (b * b) - (4 * a * c);

if (delta < 0) {
    printf("pas de racine\n");
    } else if (delta == 0) { // une seule racine 
        racine1 = -b / (2 * a);
            if (racine1 == -0.000) {
                racine1 = 0.000;
}
        printf("%.3f\n", racine1);
    } else if (delta > 0){
        racine1 = (-b + sqrt(delta)) / (2 * a); // premiere racine 
        racine2 = (-b - sqrt(delta)) / (2 * a); // deuxieme racine
        printf("%.3f ", racine2); // "%.3f" pour les 3 décimales
        printf("%.3f", racine1);
    }
