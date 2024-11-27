//Traduction d'algo : swap
//Déclarer un entier TMP
int TMP; 
//Initialiser TMP à la valeur de A
TMP =A;
//Mettre A à la valeur de B
A = B ; 
//Mettre B à la valeur de TMP
B = TMP;

//Traduction d'algo : test simple
//Déclarer un entier X
int X; 
//Initialiser X à 0
X=0;
//Si N est inférieur à 10, mettre X à 1
if (N < 10) {
    X = 1;  
}

//Traduction d'algo : test et alternative
//Déclarer un entier X
int X;
//Initialiser X à 0
X=0;
//Si N est inférieur à 10, mettre X à 1
if (N < 10) {
    X = 1;  
//Sinon si N est pair, mettre X à 2
} else if (N % 2 == 0) {
    X = 2;  
}

//Traduction d'algo : minimum de 4 valeurs
//Déclarer un entier M
int M;
//Initialiser M à la valeur de A
M=A;
//Si B est inférieur à M, mettre M à la valeur de B
if (B < M) {
    M = B; 
}

//Si C est inférieur à M, mettre M à la valeur de C
if (C < M) {
    M = C;
}

//Si D est inférieur à M, mettre M à la valeur de D
if (D < M) {
    M = D; 
}

//Traduction d'algo : lecture et écriture
int N,M;

//Lire un entier N
scanf("%d", &N);
//Lire un entier M
scanf("%d", &M);
//Afficher : "Entiers saisis : <N> et <M>" en remplaçant <N> et <M> par les valeurs de N et M
printf("Entiers saisis : %d et %d\n", N, M);

//Traduction d'algo : lire N entiers
int N;
//Lire un entier N sur l'entrée standard
scanf("%d", &N);
//Déclarer un entier S, initialisé à 0
int S = 0;
//N fois : 
 for (int i = 0; i < N; i++) {
//    Lire un entier X sur l'entrée standard
        int X;  
         scanf("%d", &X);
//    Afficher "Lu : <X>" et revenir à la ligne
        printf("Lu : %d\n", X);
//    Ajouter X à S
        S = S + X;
}
//Afficher "Somme : <S>"
printf("Somme : %d\n", S);

//Traduction d'algo : diviser tant que...
while (N > 0) {
//    Diviser N par 2

//    Afficher N et revenir à la ligne
    printf("%d\n", N);
//    Diviser N par 2
    N = N / 2;
}

//Traduction d'algo : lire tant que...
int N;
//Lire un entier N 
scanf("%d", &N);
//Tant que N > 0 : 
while (N > 0) {
//    Afficher N et revenir à la ligne
    printf("%d\n", N);
//    Lire une nouvelle valeur de N
    scanf("%d", &N);
}
//Afficher "STOP" et revenir à la ligne
printf("STOP\n");

//Traduction d'algo : diviseurs
    //Pour X allant de 2 à N :
    for (int X = 2; X <= N; X++) {
        // Déclarer une variable C, initialisée à 0
        int C = 0; 
        printf("%d est divisible par ", X); 
        // Afficher "<X> est divisible par "

        // Pour D allant de 2 à X-1:
        for (int D = 2; D < X; D++) {
            if (X % D == 0) { 
                printf("%d ", D); 
                //   Augmenter C de 1
                C++; 
            }
        }

        // Si C vaut 0:
        if (C == 0) { 
            printf("rien, c'est un nombre premier"); 
        }
        
        //     Afficher un saut de ligne
        printf("\n"); 
    }

//Traduction d'algo : parcours de tableau
//Déclarer une variable X, initialisée à 0
 int X = 0;
//Pour chaque case de Tab :
 for (int i = 0; i < N; i++){
//    Si le contenu de la case est positif : 
    if (Tab[i] > 0) {
//        Ajouter le contenu de la case à X
        X = X+  Tab[i];
//    Sinon :
    } else {
//        Ajouter l'opposé du contenu de la case à X
        X  = X - Tab[i];
         }
//    Si l'indice de la case est un multiple de 5 : 
         if (i % 5 == 0) {
//        Ajouter 100 à X
             X = X+  100;
//Afficher X
        }
} 

 printf("%d",X);

//Traduction d'algo : parcours de tableau 2
//Déclarer une variable X, initialisée à 0
int X = 0; 
//Pour chaque case de Tab, sauf la première :
for (int i = 1; i < N; i++) {
//    Si le contenu de la case est plus grand que le contenu de la précédente :
    if (Tab[i] > Tab[i - 1]) {
//        Augmenter X de 1
        X++;
    }
}
//Afficher X
printf("%d", X);

//Traduction d'algo : max d'un tableau
//Créer une variable M, initialisée à la valeur du premier élément de Tab
int M = Tab[0];
//Pour chaque élément de Tab:
for (int i = 1; i < N; i++) {
//    Si l'élément est plus grand que M :
         if (Tab[i] > M) {
//        Affecter la valeur de l'élément à M
            M = Tab[i];
        }
    }
//Afficher M

printf("%d", M);

//Traduction d'algo : Calcul élément par élément
//Créer un tableau R de taille N
 int  R[N];
//Pour chaque couple d'éléments de même indice de T1 et T2:
  for (int i = 0; i < N; i++) { 
//    Mettre le produit de éléments dans la case de même indice de R
        R[i] = T1[i] * T2[i];
  }
//Pour I allant de 0 a N:
 for (int i = 0; i < N; i++) {
//   Afficher "<R[I]> "  (en remplaçant <R[I]> par la valeur de l'élément I dans R)
    printf("%d ", R[i]);
 }

//Traduction d'algo : Parcours simultané de tableaux
//Créer une variable S, initialisée à 0
int S = 0;
//Pour chaque élément de T1:
 for (int i = 0; i < N; i++) {
//    Si l'élément est plus grand que celui de même indice dans T2 :
     if (T1[i] > T2[i]) {
        // Augmenter S de 1
        S++;
    }
}
//Afficher S
printf("%d ", S);

//Traduction d'algo : inverser tableau
//Pour I allant de 0 à N/2-1 :
for (int i = 0; i < N / 2; i++) {
//    Echanger le contenu de la case d'indice I avec celui de la case d'indice N-1-I (faire un swap) 
       int echanger = Tab[i];
        Tab[i] = Tab[N - 1 - i];
        Tab[N - 1 - i] = echanger;
}

//Traduction d'algo : tri a bulle
 int i, a, swap;
//Pour I allant de N à 2 :
    for (i = N; i >= 2; i--) {
//    Pour chaque case de Tab d'indice de 1 à I-1 :
        for (a = 1; a < i; a++) {
//        Si le contenu de la case est plus petit que le contenu de la précédente :
            if (Tab[a] < Tab[a - 1]) {
//            Echanger le contenu de la case avec celui de la précédente (faire un swap)
                swap = Tab[a];
                Tab[a] = Tab[a - 1];
                Tab[a - 1] = swap;
                
            }
        }
    }

//Traduction d'algo : fonction lecture d'entier
int readInt() {
    int N;
    // Lire un entier N sur l'entrée standard
    scanf("%d", &N); 
    // Retourner N
    return N; 
}

//Traduction d'algo : fonction PGCD
int PGCD(int A, int B) {
// Si A est plus petit que B:
    if (A < B) {
// Echanger A et B (swap)
        int swap = A;
            A = B;
            B = swap;
        }
// Tant que A n'est pas divisible par B:
    while (A % B != 0) {
// Créer une variable R qui contient le reste de la division de A par B
        int R = A % B;
// Mettre la valeur de B dans A
        A = B;
// Mettre la valeur de R dans B
        B = R;
}
// Retourner B
return B;
}

//Traduction d'algo : fonction cumul de tableau
// Ecrire une fonction somme
int somme(int Tab[], int N) {
    // Déclarer une variable S initialisée à 0
     int S = 0;
     // Pour tout élément de Tab :
     for (int i = 0; i < N; i++) {
    // Ajouter la valeur de l'élément à S
        S = S + Tab[i];
         }
    // Retourner S
    return S;
}
