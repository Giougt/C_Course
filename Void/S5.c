//Ecrire une procédure mois qui prend en paramètre un entier et affiche une chaîne de caractères
void mois(int pos) { // pos pour les positions des mois dans le tableau 
    const char *tableau_des_mois[] = { 
    "Janvier", "Février", "Mars", "Avril", "Mai", "Juin","Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre"
};



if (pos >= 1 && pos <= 12) {
    printf("%s", tableau_des_mois[pos - 1]); // -1 pour ne pas sortir du tableau 
} else {
    printf("null");
    }
}

//Ecrire une fonction aireAnneau qui prend en paramètres deux réels correspondant aux deux rayons d'un anneau.

double aireAnneau(double rayon_interne, double rayon_externe) {
        double aire_interne = M_PI * rayon_interne * rayon_interne; //  calcule aire du  disque  interne
        double aire_externe = M_PI * rayon_externe * rayon_externe; // calcule aire du disque  externe
    
    
    
double aire_anneau = aire_externe - aire_interne;

if (aire_anneau >= 0) {
        return aire_anneau;
    } else {
        return aire_anneau *(-1); // pour gerer les aires negative 
    }

}

//On souhaite estimer le meilleur prix pour regarder des films et séries en VOD.
int vodCout(int nb_films, int nb_episodes) {
    int tarifs[3] = {30, 20, 40};  // tarifs  abonnement films, abonnement series, abonnement tout
    int cout_unite[2] = {5, 2};  // tarif unite : film, episode de serie
    int meilleur_tarif = nb_films * cout_unite[0] + nb_episodes * cout_unite[1];  // initialise au cout total à l'unite
    int meilleur_tarif_film_full= tarifs[0] + nb_episodes * cout_unite[1]; // les films illimite plus les series prix unique 
    int prix_total= tarifs[2]; // tarif illimite 


        if (prix_total < meilleur_tarif) { // comparaison des prix 
            meilleur_tarif = prix_total;
        }
        
        if ( meilleur_tarif_film_full< meilleur_tarif) { // // comparaison des prix
            meilleur_tarif = meilleur_tarif_film_full;
        } 

    return meilleur_tarif;
}

//Ecrire une fonction lireTableauEntiers, qui prend en paramètre un tableau d'entiers.
int lireTableauEntiers(int tableau_entier[]) { // fonction + definition des parametres 
    int N; 
    scanf("%d", &N); // stocke la valeur saisie 
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &tableau_entier[i]); // lis entier saisi par l'utilisateur et  le stocke dans le tableau
    }

    return N;
}

//Ecrire une fonction moyenne qui prend en paramètre un tableau de réels (float) et sa taille et retourne la moyenne (float) des valeurs contenues
float moyenne(float tableau[], int taille) {
    float sum = 0.0;
    
    for (int i = 0; i < taille; i++) {
        sum = sum + tableau[i];
    }
    
    return sum / taille;
}

//Ecrire une fonction moyennePoids qui prend en paramètres deux tableaux de réels (float) de même taille, et leur taille, le premier tableau représentant des données et le second le poids de ces données.
float moyennePoids(float tableau_donnees[], float tableau_poid[], int taille) {
    float sum = 0.0;
    float sum_poid = 0.0;
    
    for (int i = 0; i < taille; i++) {
        sum = sum + tableau_donnees[i] * tableau_poid[i]; // calcule  somme ponderee  des donees
        sum_poid = sum_poid +  tableau_poid[i]; // calcule somme totale des poids
    }
       return sum / sum_poid; // renvoie la moyenne 
}

//Ecrire une fonction jour qui prend en paramètre un entier (compris entre 1 et 365) correspondant à un jour de l'année et affiche une chaîne de caractères représentant ce jour.
void jour(int position_jour) {
    int jours_mois[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // tableau des jours 
    const char *noms_mois[] = {"Janvier", "Février", "Mars", "Avril", "Mai", "Juin","Juillet", "Août","Septembre", "Octobre", "Novembre", "Décembre"}; // tableau des mois 

        
    if (position_jour < 1 || position_jour > 365) {
        printf("null");
        return;
    }

   
    int mois = 0; // variable de recherche 
    int jour_Mois = position_jour; // variable de recherche
        
        
    for (mois = 0; jour_Mois > jours_mois[mois]; mois++) { // parcoure les mois et les jours 
        jour_Mois = jour_Mois - jours_mois[mois];
    }


    printf("%d %s", jour_Mois, noms_mois[mois]);
    
    
    
    }

//Ecrire une fonction polynome
#include <math.h> // pour utiliser "pow"


double polynome(const double coeficient[], int taille_tableau, double point) {
    double evaluation = 0.0;
    for (int i = 0; i < taille_tableau; i++) {
        evaluation = evaluation +  coeficient[i] * pow(point, i);
    }
    
    return evaluation;
}  
  
