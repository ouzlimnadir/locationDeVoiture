#ifndef LOCATIONDEVOITURES2022_MYHEADER_H
#define LOCATIONDEVOITURES2022_MYHEADER_H

//Bibliothèques nécessaire au projet
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>

#define MAX 1000

//Structures des objets qu'on manipule
typedef struct {
    int jour;
    int mois;
    int annee;
}date;
typedef struct {
    int idVoiture;
    char marque[15];
    char nomVoiture[15];
    char couleur[7];
    int nbPlaces;
    int prixJour;
    char enLocation[4];
}voiture;
typedef struct {
    float numContrat;
    int idVoiture;
    int idClient;
    date debut;
    date fin;
    int cout;
}contrat;
typedef struct {
    int idClient;
    char nom[20];
    char prenom[20];
    int cin;
    char adresse[15];
    int telephone;
}client;

//Les fonctions
    //fonctions menus
        int menuPrincipal(void);
        int gestionDesVoitures(void);
        int locationVoiture(void);
        int gestionDesClients(void);

            //Menu gestion voitures
                int carSearch(int);
                void afficherVoitures();
                void ajouterVoiture();
                void modifierVoiture();
                void supprimerVoiture();
            //Menu gestion cients
                int checkClient(int idCl);
                void afficherClients();
                void ajouterClient();
                void modifierClient ();
                void supprimerClient();
            //Menu location
                int checkContrat(float id);
                int afficherContrat();
                int louerVoiture();
                int modifierContrat();
                int suppContrat(float id);
                int retournerVoiture();
                void supprimerContrat();

    //Sous fonctions
        void errorFile(int l);
        int retour (void);
        int quitter(void);
        void invalidOption(void);
        int validDate(date);
        int days(date debut,date fin);
        void cls(void);
        int exist(int*,int,int);
        void changeStatus(char*,int);








#endif //LOCATIONDEVOITURES2022_MYHEADER_H
