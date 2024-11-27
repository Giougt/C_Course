//Accès aux éléments d'un tableau
printf("%d\n", N);
printf("%d\n", tab[0]);
printf("%d\n", tab[N-1]);

if (N >4) {
    printf("%d\n", tab[4]);
} else {
    printf("out\n");
}

//Le but de cet exercice est d'afficher tous les éléments de tab, du plus petit indice au plus grand.
for (int i = 0; i < N; i++) {
        printf("%d\n", tab[i]);
    }

//Le but de cet exercice est d'afficher tous les éléments de tab, du plus grand indice au plus petit
    for (int i = N-1 ; i >= 0; i--) {
        printf("%d\n", tab[i]);
    }

//Le but de cet exercice est de trouver et afficher la valeur minimale contenue dans tab.
if (N <= 0) {
    printf("pas de minimum\n");
} else {
    int min = tab[0]; 

    for (int i = 0; i < N; i++) {
        if (tab[i] < min) {
            min = tab[i]; 
        }
    }
printf("%d\n",min);
 
}

//Le but de cet exercice est de vérifier si tab est trié ou non.
#include <stdbool.h> // pour utiliser bool et false et true 

bool trie= true;


for(int i=0; i <N-1 ; i++){
    if(tab[i]>tab[i+1]){
        trie = false;
        printf("non trié");
        break;
    }
}
if ((trie || N==0)){
    printf("trié");
}

//Le but de cet exercice est de trouver la position de la première occurrence de x dans tab et d'afficher son indice.
if (x <= 0 && x > N) {
        printf("0");
   }

int pos = -1;   
for (int i=0; i< N ; i++){
    if (tab[i] == x){
        pos = i;
    }
}

printf("%d", pos );

//Le but de cet exercice est de déclarer un tableau d'entiers tab qui contient le résultat de la concaténation de tab1 et tab2.
int tab[N + M];


for (int i = 0; i < N; i++) {
    tab[i] = tab1[i];
}

for (int i = 0; i < M; i++) {
    tab[N+i ] = tab2[i];
}

//Le but de cet exercice est déclarer un tableau d'entiers minTab de même taille, ou chaque élément est égal à l'élément de plus petite valeur parmi les cases de même indice dans tab1 et tab2.
int minTab[N] ; 

for (int a = 0; a < N; a++) {
    if (tab1[a] < tab2[a]) {
        minTab[a] = tab1[a];
    } else {
        minTab[a] = tab2[a];
    }
}

//Le but de cet exercice est de créer un tableau d'entiers integral, qui soit le tableau intégral de tab.
int integral[N]; // creation du tableau integral 


for (int i = 0; i < N; i++) {
    integral[i] = integral[i - 1] + tab[i]; // addition de la valeur de l'élément précédent
}

//Le but de cet exercice est de créer une variable entière nbSup qui a pour valeur le nombre de valeurs dans tab qui sont supérieures à la moyenne de toutes les valeurs de tab.
int nbSup; // creation de la variable qui stocke le nombre de valeurs dans tab qui sont supérieures à la moyenne de toutes les valeurs de tab
int sum = 0; // variable  pour la somme   
int x = 0;  // variable pour la moyenne 
  
  
// calcule la somme de tous les elements du tableau tab 
for (int i = 0; i < N; i++) {
    sum = sum + tab[i];
}

x = sum/ N ; 

// parcours les elements du tableau tab et verifie si les elements sont supérieurs à la moyenne + compteur(nbSup)
for (int i = 0; i < N; i++) {
    if (tab[i] > x) {
        nbSup= nbSup + 1;
    }
}

