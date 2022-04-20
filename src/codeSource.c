#include "myHeader.h"

/*
    //cadre trait simple
        printf("\n \xda\xc4\xbf");
        printf("\n \xb3 \xb3");
        printf("\n \xc0\xc4\xd9");
    cadre trait double
        printf("\n \xc9\xcd\xbb");
        printf("\n \xba \xba");
        printf("\n \xc8\xcd\xbc");
*/

        //Declaration des menus essentielles du projet
int menuPrincipal(void){
    int choix;

    printf("\n\t\t\t             \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
    printf("\n\t\t\t             \xb3   Menu Principal  \xb3");
    printf("\n\t\t\t             \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n");

    printf("\n\t\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Location..............................1   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Gestion VOITURES......................2   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Gestion CLIENTS.......................3   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Quitter...............................4   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n\t\t\t\t Votre choix  :  ");

    scanf("%d",&choix);

    return choix;
}
int gestionDesVoitures(void){
    int choix;

    printf("\n\t\t\t          \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
    printf("\n\t\t\t          \xb3   Gestion des Voitures  \xb3");
    printf("\n\t\t\t          \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n");

    printf("\n\t\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Liste des VOITURES....................1   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Ajouter VOITURE.......................2   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Modifier VOITURE......................3   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Supprimer VOITURE.....................4   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Retour................................5   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n\t\t\t\t Votre choix  :  ");

    scanf("%d",&choix);

    return choix;
}
int locationVoiture(void){
    int choix;

    printf("\n\t\t\t          \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
    printf("\n\t\t\t          \xb3   Location d'une voiture   \xb3");
    printf("\n\t\t\t          \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n");

    printf("\n\t\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Visualiser CONTRAT....................1   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Louer VOITURE.........................2   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Retourner VOITURE.....................3   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Modifier CONTRAT......................4   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Supprimer CONTRAT.....................5   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Retour................................6   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n\t\t\t\t Votre choix  :  ");

    scanf("%d",&choix);

    return choix;
}
int gestionDesClients(void){
    int choix;

    printf("\n\t\t\t          \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
    printf("\n\t\t\t          \xb3    Gestion des Clients   \xb3");
    printf("\n\t\t\t          \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n");

    printf("\n\t\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Liste des CLIENTS.....................1   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Ajouter CLIENT........................2   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Modifier CLIENT.......................3   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Supprimer CLIENT......................4   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba    Retour................................5   \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xba                                              \xba");
    printf("\n\t\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n\t\t\t\t Votre choix  :  ");

    scanf("%d",&choix);

    return choix;
}
        //fonction annexes
int retour (void){
    int n;
    printf("\n\n\t\t\t\t\xaf Voulez-vous retourner  au menu principal ou au menu precedent ? ");
    printf("\n\n\t\t\t\t     0:Menu principal                       1: Menu precedent");
    printf("\n\n\t\t\t\t Votre choix  :  ");
    scanf("%d",&n);
    return n;
}
int quitter(){
    int q;
    printf("\n\n\n\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
    printf("\n\t\t\t        \xb3                              \xb3");
    printf("\n\t\t\t        \xb3    Quitter le programme ?    \xb3");
    printf("\n\t\t\t        \xb3                              \xb3");
    printf("\n\t\t\t        \xb3     0:NON          1:OUI     \xb3");
    printf("\n\t\t\t        \xb3                              \xb3");
    printf("\n\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
    printf("\n\n\t\t\t\t Votre choix :  ");
    scanf("%d",&q);
    return q;
}
void invalidOption(){
    cls();
    printf("\n\n\n\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
    printf("\n\t\t\t        \xb3                              \xb3");
    printf("\n\t\t\t        \xb3       Option non valide      \xb3");
    printf("\n\t\t\t        \xb3                              \xb3");
    printf("\n\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
    Sleep(1000);
}
int validDate(date d){
    //check year
    if(d.annee>=2022 && d.annee<=9999){
        //check month
        if(d.mois>=1 && d.mois<=12){
            //check days
            if((d.jour>=1 && d.jour<=31) && (d.mois==1 || d.mois==3 || d.mois==5 || d.mois==7 || d.mois==8 || d.mois==10 || d.mois==12)) return 1;
            else if((d.jour>=1 && d.jour<=30) && (d.mois==4 || d.mois==6 || d.mois==9 || d.mois==11)) return 1;
            else if((d.jour>=1 && d.jour<=28) && (d.mois==2)) return 1;
            else if(d.jour==29 && d.mois==2 && (d.annee%400==0 ||(d.annee%4==0 && d.annee%100!=0))) return 1;
            else
                printf("\n                      ERREUR SYNTAXE DATE :: JOUR\n\n");
            return 0;
        }
        else{
            printf("\n                       ERREUR SYNTAXE DATE :: MOIS\n\n");
            return 0;
        }
    }
    else{
        printf("\n                      ERREUR SYNTAXE DATE :: ANNEE\n\n");
        return 0;
    }
}
int days(date debut,date fin){
    // debut : dateArrive
    // fin   : dateFin
    int dD,dF,d;
    int daysYear[12] = {0,31,59,90,120,151,181,212,243,273,304,334};
    dD = debut.jour + daysYear[debut.mois-1];
    dF = fin.jour + daysYear[fin.mois-1];
    d=(fin.annee*365.25-debut.annee*365.25) + dF - dD;
    return d;
}
        //fonctions voitures
int carSearch(int id){
    FILE* car=NULL;
    voiture v;
    car=fopen("listeVoitures.txt","r");
    if(car!=NULL){
        do{
            fscanf(car,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation);
			if(id == v.idVoiture){
			    fclose(car);
				return 1 ;
		    }
        }while(!feof(car));
    }
    else
        errorFile(215);
    fclose(car);
    return 0 ;
}
void afficherVoitures(void){
    FILE *fc=fopen("listeVoitures.txt","r");
    voiture v;
    if(fc){
        printf("\n\n\t\t\t\t\xaf La liste des voitures !\n\n ");
//	setlocale(LC_ALL,"");
        printf("\n\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
        printf("\n\t\t\xba   ID VOITURE   \xba\xba     MARQUE     \xba\xba NOM DE VOITURE \xba\xba COULEUR \xba\xba Nbr PLACES \xba\xba  PRIX/Jrs (DH) \xba\xba EN LOCATION \xba");
        printf("\n\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
        do {
            fscanf(fc,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation);
            printf("\n\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
            printf("\n\t\t\xba%12d    \xba\xba%12s    \xba\xba%12s    \xba\xba%7s  \xba\xba%8d    \xba\xba%12d    \xba\xba%9s    \xba",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation);
            printf("\n\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
        } while (!feof(fc));
    } else
        printf("\n\n\t\t\xaf\xaf 235 Pas de voitures a afficher !\n");
    fclose(fc);
}
void ajouterVoiture(){
    FILE* car=NULL;
    car=fopen("listeVoitures.txt","a");
    voiture v;
    printf("\n\n\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n");
    printf("\t\xba\tEntrez Identifiant de Voiture : ");
    scanf("%d",&v.idVoiture);
    if(carSearch(v.idVoiture)){
        printf("\n\n\t\xba\tCet ID existe deja\n");
        printf("\n\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
    } else {
        if(car!=NULL){
            printf("\n\t\xba Saisir la marque : ");
            scanf("%s",v.marque);
            printf("\n\t\xba Donnez le nom de Voiture : ");
            scanf("%s",v.nomVoiture);
            printf("\n\t\xba Quelle est la couleur de Voiture ? : ");
            scanf("%s",v.couleur);
            printf("\n\t\xba Combien de sieges il a? : ");
            scanf("%d",&v.nbPlaces);
            printf("\n\t\xba Combien cela coute-t-il par jour? [En DH] : ");
            scanf("%d",&v.prixJour);
            printf("\n\t\xba Est-ce que en location? [O/N] : ");
            scanf("%s",v.enLocation);
            printf("\n\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
            fprintf(car,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation);
        } else
            errorFile(265);
        fclose(car);
    }
}
void modifierVoiture(){
    FILE *fc=NULL,*tmp=NULL;
    voiture v,newCar;
    int id,choix;
    fc=fopen("listeVoitures.txt","r");
    tmp=fopen("tmpVoitures.txt","w");
start:
    printf("\n\n\t\t\t\xaf Tapez l'identifiant de la voiture a modifier : ");
    scanf("%d",&id);
    if((fc)&&(tmp)&&(carSearch(id))){
        printf("\n\n\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n");
        printf("\t\xba\tEntrez les nouvelles informations de la voiture\n");
        printf("\n\t\xba Sasir l'id de la voiture :");
        scanf("%d",&newCar.idVoiture);
        printf("\n\t\xba Saisir la marque : ");
        scanf("%s",newCar.marque);
        printf("\n\t\xba Donnez le nom de Voiture : ");
        scanf("%s",newCar.nomVoiture);
        printf("\n\t\xba Couleur de Voiture ? : ");
        scanf("%s",newCar.couleur);
        printf("\n\t\xba Nombre de sieges : ");
        scanf("%d",&newCar.nbPlaces);
        printf("\n\t\xba Prix de location par jour [En DH] : ");
        scanf("%d",&newCar.prixJour);
        printf("\n\t\xba En location? [O/N] : ");
        scanf("%s",newCar.enLocation);
        printf("\n\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
        do {
            fscanf(fc,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation);
            if(id==v.idVoiture){
                fprintf(tmp,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",newCar.idVoiture,newCar.marque,newCar.nomVoiture,newCar.couleur,newCar.nbPlaces,newCar.prixJour,newCar.enLocation);
                printf("\n\n\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
                printf("\n\t\t\t        \xb3                              \xb3");
                printf("\n\t\t\t        \xb3      Mise a jour reussie     \xb3");
                printf("\n\t\t\t        \xb3                              \xb3");
                printf("\n\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
            } else
                fprintf(tmp,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation);
        } while (!feof(fc));

        fclose(fc);
        fclose(tmp);
        remove("listeVoitures.txt");
        rename("tmpVoitures.txt","listeVoitures.txt");
    } else if (!carSearch(id)) {
        printf("\n\n\t\t\t\t****************************\n");
        printf("\n\t\t\t\t******* Invalid ID ! *******\n");
        printf("\n\t\t\t\t****************************\n\n");
        printf("\n\n\t\t\t\xaf Voulez-vous Retapez l'identifiant ? ");
        printf("\n\n\t\t\t      0: NON             1: OUI      ");
        printf("\n\n\t\t\t\t Votre choix  :  ");
        scanf("%d",&choix);
        if(choix) goto start;
    } else {
        errorFile(323);
    }
}
void supprimerVoiture(){
    int confirmation,bool=0,id,choix;
    FILE *liste=NULL, *temp=NULL;
    voiture v;
    start:
    printf("\n\n\t\t\t\xaf Tapez l'identifiant de la voiture a supprimer : ");
    scanf("%d",&id);
    liste=fopen("listeVoitures.txt","r");
    temp=fopen("tempListeVoitures.txt","w");
    if(liste&&temp){
        do{
            fscanf(liste,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation);
            if(id==(v.idVoiture)){
                bool=1;
                printf("\n\n\n\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
                printf("\n\t\t\t        \xb3                              \xb3");
                printf("\n\t\t\t        \xb3  Confirmer la Suppression ?  \xb3");
                printf("\n\t\t\t        \xb3                              \xb3");
                printf("\n\t\t\t        \xb3     0:NON          1:OUI     \xb3");
                printf("\n\t\t\t        \xb3                              \xb3");
                printf("\n\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
                printf("\n\n\t\t\t\t Supprimer ? :  ");
                scanf("%d",&confirmation);
                if(!confirmation) goto out;

                printf("\n\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
                printf("\n\t\t\xba   ID VOITURE   \xba\xba     MARQUE     \xba\xba NOM DE VOITURE \xba\xba COULEUR \xba\xba Nbr PLACES \xba\xba  PRIX/Jrs (DH) \xba\xba EN LOCATION \xba");
                printf("\n\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
                printf("\n\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
                printf("\n\t\t\xba%12d    \xba\xba%12s    \xba\xba%12s    \xba\xba%7s  \xba\xba%8d    \xba\xba%12d    \xba\xba%9s    \xba",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation);
                printf("\n\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");


                printf("\n\n\n\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
                printf("\n\t\t\t        \xb3                              \xb3");
                printf("\n\t\t\t        \xb3      Mise a jour reussie     \xb3");
                printf("\n\t\t\t        \xb3                              \xb3");
                printf("\n\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
            } else {
                out:
                fprintf(temp,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation);
            }
        }while(!feof(liste));

        fclose(temp);
        fclose(liste);
        remove("listeVoitures.txt");
        rename("tempListeVoitures.txt","listeVoitures.txt");
        if(!bool)
        {
            printf("\n\n\t\t\t\t****************************\n");
            printf("\n\t\t\t\t******* Invalid ID ! *******\n");
            printf("\n\t\t\t\t****************************\n\n");
            printf("\n\n\t\t\t\xaf Voulez-vous Retapez l'identifiant ? ");
            printf("\n\n\t\t\t      0: NON             1: OUI      ");
            printf("\n\n\t\t\t\t Votre choix  :  ");
            scanf("%d",&choix);
            if(choix) goto start;
        }
    }
    else errorFile(386);
}
        //fonctions clients
int checkClient(int idCl){
    FILE* fic=NULL;
    client cli;
    fic=fopen("listeClients.txt","r");
    if(fic){
        do{
            fscanf(fic,"%d ; %s ; %s ; %d ; %s ; %d\n",&cli.idClient,&cli.nom,&cli.prenom,&cli.cin,&cli.adresse,&cli.telephone);
            if (idCl == cli.idClient) {
                fclose(fic);
                return 1;
            }
        } while(!feof(fic));
    } else
        errorFile(402);
    return 0;
}
void afficherClients(){
    FILE* liste=NULL;
    client  c;
    liste=fopen("listeClients.txt","r");
    printf("\n\n\t\t\t\xaf Liste des Clients !\n\n ");
    printf("\n\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n\t\t\xba  CLIENT ID  \xba\xba         NOM         \xba\xba        PRENOM       \xba\xba   CIN   \xba\xba     ADRESSE     \xba\xba  NUMERO DE TELEPHONE  \xba");
    printf("\n\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

    if (liste)
    {

        do{
            fscanf(liste,"%d ; %s ; %s ; %d ; %s ; %d\n",&c.idClient,&c.nom,&c.prenom,&c.cin,&c.adresse,&c.telephone);
            printf("\n\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
            printf("\n\t\t\xba%12d \xba\xba%20s \xba\xba%20s \xba\xba %6d  \xba\xba %15s \xba\xba         %010d    \xba",c.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone);
            printf("\n\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
        }while(!feof(liste));
        fclose(liste);
    }
    else printf("\n\n\t\t\xaf\xaf 425 Pas de clients a afficher !\n");
}
void ajouterClient(){
    FILE* fic=NULL;
    client cl;
    fic=fopen("listeClients.txt","a");
    printf("\n\n\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n");
    printf("\t\xba\tEntrez Identifiant du Client : ");
    scanf("%d",&cl.idClient);
    if(checkClient(cl.idClient)) {
        printf("\n\n\t\xba\tCet ID existe deja\n");
        printf("\n\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
    } else {
        if (fic!=NULL) {
            printf("\n\t\xba Nom du client : ");
            scanf("%s", cl.nom);
            printf("\n\t\xba Prenom du client : ");
            scanf("%s", cl.prenom);
            printf("\n\t\xba CIN : ");
            scanf("%d", &cl.cin);
            printf("\n\t\xba Adresse : ");
            scanf("%s", cl.adresse);
            printf("\n\t\xba Numero de telephone : ");
            scanf("%d", &cl.telephone);
            printf("\n\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
            fprintf(fic, "%d ; %s ; %s ; %d ; %s ; %d\n", cl.idClient, cl.nom, cl.prenom, cl.cin, cl.adresse, cl.telephone);
            fclose(fic);
        } else
            errorFile(453);
    }
}
void modifierClient (){
    FILE *fc=NULL,*tmp=NULL;
    client cl,newCL;
    int id,choix;
    start :
        printf("\n\n\t\t\t\xaf Tapez l'identifiant du client a modifier : ");
        scanf("%d",&id);
        if(checkClient(id)){
            fc= fopen("listeClients.txt","r");
            tmp=fopen("tmpClients.txt","w");
            if(fc&&tmp){
                do {
                    fscanf(fc, "%d ; %s ; %s ; %d ; %s ; %d\n", &cl.idClient, &cl.nom, &cl.prenom, &cl.cin, &cl.adresse, &cl.telephone);
                    if(id==cl.idClient){
                        printf("\n\n\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n");
                        printf("\t\xba\tEntrez les nouvelles informations du client\n");
                        printf("\n\t\xba Sasir l'id du Client :");
                        scanf("%d",&newCL.idClient);
                        printf("\n\t\xba Nom du client : ");
                        scanf("%s",newCL.nom);
                        printf("\n\t\xba Prenom du client : ");
                        scanf("%s",newCL.prenom);
                        printf("\n\t\xba CIN : ");
                        scanf("%d",&newCL.cin);
                        printf("\n\t\xba Adresse : ");
                        scanf("%s",newCL.adresse);
                        printf("\n\t\xba Telephone : ");
                        scanf("%d",&newCL.telephone);
                        printf("\n\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
                        fprintf(tmp,"%d ; %s ; %s ; %d ; %s ; %d\n",newCL.idClient,newCL.nom,newCL.prenom,newCL.cin,newCL.adresse,newCL.telephone);
                        printf("\n\n\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
                        printf("\n\t\t\t        \xb3                              \xb3");
                        printf("\n\t\t\t        \xb3      Mise a jour reussie     \xb3");
                        printf("\n\t\t\t        \xb3                              \xb3");
                        printf("\n\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
                    } else
                        fprintf(tmp,"%d ; %s ; %s ; %d ; %s ; %d\n",cl.idClient,cl.nom,cl.prenom,cl.cin,cl.adresse,cl.telephone);
                } while(!feof(fc));
                fclose(fc);
                fclose(tmp);
                remove("listeClients.txt");
                rename("tmpClients.txt","listeClients.txt");
            } else
                errorFile(499);
        } else {
            printf("\n\n\t\t\t\t****************************\n");
            printf("\n\t\t\t\t******* Invalid ID ! *******\n");
            printf("\n\t\t\t\t****************************\n\n");
            printf("\n\n\t\t\t\xaf Voulez-vous Retapez l'identifiant ? ");
            printf("\n\n\t\t\t      0: NON             1: OUI      ");
            printf("\n\n\t\t\t\t Votre choix  :  ");
            scanf("%d",&choix);
            if(choix) goto start;
        }

}
void supprimerClient(){
    int confirmation,id,choix,bool=0;
    FILE *fc=NULL,*tmp=NULL;
    client cl;
    start :
        printf("\n\n\t\t\t\xaf Tapez l'identifiant de la voiture a supprimer : ");
        scanf("%d",&id);
        fc=fopen("listeClients.txt","r");
        tmp=fopen("tmpClients.txt","w");
        if(fc&&tmp){
            do {
                fscanf(fc, "%d ; %s ; %s ; %d ; %s ; %d\n", &cl.idClient, &cl.nom, &cl.prenom, &cl.cin, &cl.adresse,
                       &cl.telephone);
                if (id == cl.idClient) {
                    bool=1;
                    printf("\n\n\n\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
                    printf("\n\t\t\t        \xb3                              \xb3");
                    printf("\n\t\t\t        \xb3  Confirmer la Suppression ?  \xb3");
                    printf("\n\t\t\t        \xb3                              \xb3");
                    printf("\n\t\t\t        \xb3     0:NON          1:OUI     \xb3");
                    printf("\n\t\t\t        \xb3                              \xb3");
                    printf("\n\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
                    printf("\n\n\t\t\t\t Supprimer ? :  ");
                    scanf("%d", &confirmation);
                    if (!confirmation) goto out;

                    printf("\n\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
                    printf("\n\t\t\xba  CLIENT ID  \xba\xba         NOM         \xba\xba        PRENOM       \xba\xba   CIN   \xba\xba     ADRESSE     \xba\xba  NUMERO DE TELEPHONE  \xba");
                    printf("\n\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
                    printf("\n\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
                    printf("\n\t\t\xba%12d \xba\xba%20s \xba\xba%20s \xba\xba %6d  \xba\xba %15s \xba\xba         %010d    \xba",
                           cl.idClient, cl.nom, cl.prenom, cl.cin, cl.adresse, cl.telephone);
                    printf("\n\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

                    printf("\n\n\n\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
                    printf("\n\t\t\t        \xb3                              \xb3");
                    printf("\n\t\t\t        \xb3      Mise a jour reussie     \xb3");
                    printf("\n\t\t\t        \xb3                              \xb3");
                    printf("\n\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
                } else {
                    out :
                    fprintf(tmp, "%d ; %s ; %s ; %d ; %s ; %d\n", cl.idClient, cl.nom, cl.prenom, cl.cin, cl.adresse, cl.telephone);
                }
            } while (!feof(fc));
            fclose(fc);
            fclose(tmp);
            remove("listeClients.txt");
            rename("tmpClients.txt","listeClients.txt");
            if(!bool) {
                printf("\n\n\t\t\t\t****************************\n");
                printf("\n\t\t\t\t******* Invalid ID ! *******\n");
                printf("\n\t\t\t\t****************************\n\n");
                printf("\n\n\t\t\t\xaf Voulez-vous Retapez l'identifiant ? ");
                printf("\n\n\t\t\t      0: NON             1: OUI      ");
                printf("\n\n\t\t\t\t Votre choix  :  ");
                scanf("%d",&choix);
                if(choix) goto start;
            }
        }
        else
            errorFile(572);
}
        //fonctions contrats
int exist(int v[],int id,int n){
    int j;
    for(j=0; j<n; j++)
    {
        if (id==v[j])
            return 1;
    }
    return 0;
}
void changeStatus(char c[],int id){
    FILE* liste=NULL,*temp=NULL;
    voiture t;
    liste=fopen("listeVoitures.txt","r");
    temp=fopen("voitureTemp.txt","a");
    if(liste){
        do{
            fscanf(liste,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&t.idVoiture,&t.marque,&t.nomVoiture,&t.couleur,&t.nbPlaces,&t.prixJour,&t.enLocation);
            if(t.idVoiture == id){
                strcpy(t.enLocation,c);
                fprintf(temp,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",t.idVoiture,t.marque,t.nomVoiture,t.couleur,t.nbPlaces,t.prixJour,t.enLocation);
            }
            else fprintf(temp,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",t.idVoiture,t.marque,t.nomVoiture,t.couleur,t.nbPlaces,t.prixJour,t.enLocation);
        }while(!feof(liste));
        fclose(liste);
        fclose(temp);
        remove("listeVoitures.txt");
        rename("voitureTemp.txt","listeVoitures.txt");
    }
    else errorFile(603);
}
int checkContrat(float id){
    FILE *liste=fopen("listeContrats.txt","r");
    contrat ct;
    if(liste){
        do {
            fscanf(liste,"%f ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d\n",&ct.numContrat,&ct.idVoiture,&ct.idClient,&ct.debut.jour,&ct.debut.mois,&ct.debut.annee,&ct.fin.jour,&ct.fin.mois,&ct.fin.annee,&ct.cout);
            if(id==ct.numContrat) {
                fclose(liste);
                return 1;
            }
        }while(!feof(liste));
    } else {
        errorFile(617);
        return -1;
    }
    fclose(liste);
    return 0;
}
int louerVoiture(){
    // retourn 0 en cas de succes
    int idc,idv,i=0,C;
    int voitureIds[MAX];
    int duree,prix,choix;
    voiture v;
    client c;
    contrat ct;
    FILE* liste=NULL,*contrat=NULL,*listeC=NULL,*listeV=NULL;

    start:
    printf("\n\n\t\t\t\xaf Entrez l'Id du client qui veut louer : ");
    scanf("%d",&idc);
    if(checkClient(idc)){
        liste=fopen("listeVoitures.txt","r");
        if(!liste) {
            errorFile(639);
            return 1;
        }
        printf("\n\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
        printf("\n\t\t\xba   ID VOITURE   \xba\xba     MARQUE     \xba\xba NOM DE VOITURE \xba\xba COULEUR \xba\xba Nbr PLACES \xba\xba  PRIX/Jrs (DH) \xba\xba EN LOCATION \xba");
        printf("\n\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
        do{
            fscanf(liste,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation);
            if( strcmp(v.enLocation,"n") == 0 || strcmp(v.enLocation,"N") == 0 ){
                voitureIds[i]=v.idVoiture;
                i++;
                printf("\n\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
                printf("\n\t\t\xba%12d    \xba\xba%12s    \xba\xba%12s    \xba\xba%7s  \xba\xba%8d    \xba\xba%12d    \xba\xba%9s    \xba",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation);
                printf("\n\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
            }
        }while(!feof(liste));
        if(!i) printf("\n\n\t\t\xaf\xaf 651 Pas de voiture a louer !\n");
        fclose(liste);

        if(i>0){
            contrat=fopen("listeContrats.txt","a");
            if(!contrat){
                errorFile(657);
                return 2;
            }
            vID:
            printf("\n\n\t\t\t\xaf Entrez l'Id de Voiture que vous souhaitez louer : ");
            scanf("%d",&idv);
            if(exist(voitureIds,idv,i)){
                listeV=fopen("listeVoitures.txt","r");
                listeC=fopen("listeClients.txt","r");
                if(!listeV || !listeC){
                    errorFile(671);
                    return 3;
                }
                do{
                    fscanf(listeC,"%d ; %s ; %s ; %d ; %s ; %d\n",&c.idClient,&c.nom,&c.prenom,&c.cin,&c.adresse,&c.telephone);
                }while(idc != c.idClient);
                fclose(listeC);
                do{
                    fscanf(listeV,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation);
                }while((idv!=v.idVoiture));
                fclose(listeV);
                ct.idClient=c.idClient;
                ct.idVoiture=v.idVoiture;
                prix=v.prixJour;
                taperID :
                cls();
                printf("\n\n\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd REMPLISSAGE DU CONTRAT \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n");
                printf("\t\xba Entrez Numero de Contrat : ");
                scanf("%f",&ct.numContrat);
                if(checkContrat(ct.numContrat)) goto invID;
                printf("\n");
                printf("\t\xba Identifiant de Voiture : %d ",ct.idVoiture);
                printf("\n\n");
                printf("\t\xba Identifiant du Client  : %d ",ct.idClient);
                printf("\n\n");
                do{
                    printf("\t\xba Entrez la date de debut de Contrat (jj mm aaaa): ");
                    scanf("%d %d %d",&ct.debut.jour,&ct.debut.mois,&ct.debut.annee);
                    printf("\n");
                }while(!validDate(ct.debut));
                do {
                    printf("\t\xba Entrez la date de fin de Contrat (jj mm aaaa): ");
                    scanf("%d %d %d",&ct.fin.jour,&ct.fin.mois,&ct.fin.annee);
                    printf("\n");
                    duree = days(ct.debut,ct.fin);
                } while(!validDate(ct.fin) || (duree<=0));
                ct.cout=duree * prix;
                printf("\t\xba Duree de contrat  : %d jours",duree);
                printf("\n\n");
                printf("\t\xba Cout TOTAL : %d DH",ct.cout);
                printf("\n\n\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
                fprintf(contrat,"%.2f ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d\n",ct.numContrat,ct.idVoiture,ct.idClient,ct.debut.jour,ct.debut.mois,ct.debut.annee,ct.fin.jour,ct.fin.mois,ct.fin.annee,ct.cout);
                changeStatus("O",ct.idVoiture);
            }
            else{
                printf("\n\n\t\t\t\xaf Voulez vous retaper un autre ID ? ");
                printf("\n\n\t\t\t      0: NON            1: OUI      ");
                printf("\n\n\t\t\t\t Votre choix  :  ");
                scanf("%d",&C);
                if(C)
                    goto vID;
            }
            fclose(contrat);
        }
    }
    else{
        printf("\n\n\t\t\t\xaf Voulez-vous ajouter un nouveau client ?");
        printf("\n\n\t\t\t      0: NON                 1: OUI");
        printf("\n\n\t\t\t\t Votre choix  :  ");
        scanf("%d",&C);
        if(C){
            ajouterClient();
            goto start;
        }

    }
    if(0) {
        invID :
        printf("\n\n\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t******* ID indisponible ! *******\n");
        printf("\n\t\t\t\t*********************************\n\n");
        printf("\n\n\t\t\t\xaf Voulez-vous Retapez l'identifiant ? ");
        printf("\n\n\t\t\t      0: NON             1: OUI      ");
        printf("\n\n\t\t\t\t Votre choix  :  ");
        scanf("%d", &choix);
        if (choix) goto taperID;
    }
    return 0;
}
int afficherContrat(){
    FILE *liste=NULL;
    voiture v;
    client cl;
    contrat ct;
    float id;
    int choix;

    start :
    printf("\n\n\t\t\t\xaf Saisissez le numero de contrat a visualiser : ");
    scanf("%f",&id);

    //extraire le contrat
    liste=fopen("listeContrats.txt","r");
    if(!liste) {
        errorFile(765);
        return 1;
    }
    do{
        fscanf(liste,"%f ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d\n",&ct.numContrat,&ct.idVoiture,&ct.idClient,&ct.debut.jour,&ct.debut.mois,&ct.debut.annee,&ct.fin.jour,&ct.fin.mois,&ct.fin.annee,&ct.cout);
    } while((id!=ct.numContrat)&&(!feof(liste)));
    fclose(liste);
    if(id!=ct.numContrat) goto invID;

    //extraire le client
    liste=fopen("listeClients.txt","r");
    if(!liste) {
        errorFile(773);
        return 1;
    }
    do {
        fscanf(liste, "%d ; %s ; %s ; %d ; %s ; %d\n", &cl.idClient, &cl.nom, &cl.prenom, &cl.cin, &cl.adresse, &cl.telephone);
    } while(ct.idClient!=cl.idClient);
    fclose(liste);

    //extraire la voiture
    liste=fopen("listeVoitures.txt","r");
    if(!liste) {
        errorFile(788);
        return 1;
    }
    do {
        fscanf(liste,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation);
    } while (ct.idVoiture!=v.idVoiture);
    fclose(liste);

    //le contrat
    printf("\n\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd    CONTRAT    \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n\t\xba                                             \xba");
    printf("\n\t\xba Numero de contrat : %10.2f              \xba",ct.numContrat);
    printf("\n\t\xba                                             \xba");
    printf("\n\t\xcc\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb9");
    printf("\n\t\xba                                             \xba");
    printf("\n\t \t  Client : %s %s",cl.nom,cl.prenom);
    printf("\n\t \t      ID : %d",cl.idClient);
    printf("\n\t\xba\t     Cin : %6d                     \xba",cl.cin);
    printf("\n\t \t Adresse : %s",cl.adresse);
    printf("\n\t \t     Tel : %010d",cl.telephone);
    printf("\n\t\xba                                             \xba");
    printf("\n\t\xcc\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb9");
    printf("\n\t\xba                                             \xba");
    printf("\n\t \t   Voiture : %s %s",v.marque,v.nomVoiture);
    printf("\n\t\xba\t   Couleur : %10s               \xba",v.couleur);
    printf("\n\t\xba\t Nb sieges : %3d                      \xba",v.nbPlaces);
    printf("\n\t \t    Prix/J : %d",v.prixJour);
    printf("\n\t\xba                                             \xba");
    printf("\n\t\xcc\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb9");
    printf("\n\t\xba                                             \xba");
    printf("\n\t\xba\t Debut de contrat : %02d/%02d/%4d        \xba",ct.debut.jour,ct.debut.mois,ct.debut.annee);
    printf("\n\t\xba\t   Fin de contrat : %02d/%02d/%4d        \xba",ct.fin.jour,ct.fin.mois,ct.fin.annee);
    printf("\n\t\xba                                             \xba");
    printf("\n\t\xba\xaf Prix Total : %6d Dhs                    \xba",ct.cout);
    printf("\n\t\xba                                             \xba");
    printf("\n\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    if(0) {
        invID :
        printf("\n\n\t\t\t\t****************************\n");
        printf("\n\t\t\t\t******* Invalid ID ! *******\n");
        printf("\n\t\t\t\t****************************\n\n");
        printf("\n\n\t\t\t\xaf Voulez-vous Retapez l'identifiant ? ");
        printf("\n\n\t\t\t      0: NON             1: OUI      ");
        printf("\n\n\t\t\t\t Votre choix  :  ");
        scanf("%d", &choix);
        if (choix) goto start;
    }

    return 0;
}
int suppContrat(float id){
    //retourne 0 si succes
    FILE *liste=NULL,*tmp=NULL;
    contrat ct;
    int bool=0;
    liste=fopen("listeContrats.txt","r");
    tmp=fopen("tmpContrats.txt","w");
    if(!liste||!tmp){
        errorFile(846);
        return 1;
    }
    do {
        fscanf(liste,"%f ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d\n",&ct.numContrat,&ct.idVoiture,&ct.idClient,&ct.debut.jour,&ct.debut.mois,&ct.debut.annee,&ct.fin.jour,&ct.fin.mois,&ct.fin.annee,&ct.cout);
        if(id==ct.numContrat) {
            bool = 1;
            changeStatus("N",ct.idVoiture);
        }
        else
            fprintf(tmp,"%.2f ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d\n",ct.numContrat,ct.idVoiture,ct.idClient,ct.debut.jour,ct.debut.mois,ct.debut.annee,ct.fin.jour,ct.fin.mois,ct.fin.annee,ct.cout);
    }while(!feof(liste));

    fclose(liste);
    fclose(tmp);
    remove("listeContrats.txt");
    rename("tmpContrats.txt","listeContrats.txt");
    if (bool) return 0;
    return 1;
}
int retournerVoiture(){
    FILE *liste=NULL;
    contrat ct;
    int id,n,choix;
    start :
    liste=fopen("listeContrats.txt","r");
    if(!liste) {
        errorFile(873);
        return 1;
    }
    printf("\n\n\t\t\t\xaf Saisissez l'ID de la voiture retournee :");
    scanf("%d",&id);
    do {
        fscanf(liste,"%f ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d\n",&ct.numContrat,&ct.idVoiture,&ct.idClient,&ct.debut.jour,&ct.debut.mois,&ct.debut.annee,&ct.fin.jour,&ct.fin.mois,&ct.fin.annee,&ct.cout);
    }while((!feof(liste))&&(id!=ct.idVoiture));
    fclose(liste);
    n=suppContrat(ct.numContrat);
    if(n) {
        printf("\n\n\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t******* ID indisponible ! *******\n");
        printf("\n\t\t\t\t*********************************\n\n");
        printf("\n\n\t\t\t\xaf Voulez-vous Retapez l'identifiant ? ");
        printf("\n\n\t\t\t      0: NON             1: OUI      ");
        printf("\n\n\t\t\t\t Votre choix  :  ");
        scanf("%d", &choix);
        if (choix) goto start;
    } else {
        printf("\n\n\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
        printf("\n\t\t\t        \xb3                              \xb3");
        printf("\n\t\t\t        \xb3      Mise a jour reussie     \xb3");
        printf("\n\t\t\t        \xb3                              \xb3");
        printf("\n\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
    }
    return 0;
}
int modifierContrat(){
    FILE *liste=NULL,*tmp=NULL,*listeV=NULL;
    int choix,_modif,i=0,idv,C,duree;
    int voitureIds[MAX];
    float id;
    voiture v;
    contrat ct;

    start :
    printf("\n\n\t\t\t\xaf Saisissez le numero de contrat a modifier :");
    scanf("%f",&id);
    if(checkContrat(id)!=1) goto invID;
    prMod :
    printf("\n\n\t\t\t\xaf Voulez-vous Modifier : ");
    printf("\n\n\t\t\t             1: La voiture");
    printf("\n\t\t\t             2: La date de contrat");
    printf("\n\t\t\t             3: retour");
    printf("\n\n\t\t\t Votre choix  :  ");
    scanf("%d",&_modif);
    switch (_modif){
        case 1 :
            //affichage des voitures non loué
            listeV=fopen("listeVoitures.txt","r");
            if(!listeV) {
                errorFile(925);
                return 1;
            }
            printf("\n\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
            printf("\n\t\t\xba   ID VOITURE   \xba\xba     MARQUE     \xba\xba NOM DE VOITURE \xba\xba COULEUR \xba\xba Nbr PLACES \xba\xba  PRIX/Jrs (DH) \xba\xba EN LOCATION \xba");
            printf("\n\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
            do{
                fscanf(listeV,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation);
                if( strcmp(v.enLocation,"n") == 0 || strcmp(v.enLocation,"N") == 0 ){
                    voitureIds[i]=v.idVoiture;
                    i++;
                    printf("\n\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
                    printf("\n\t\t\xba%12d    \xba\xba%12s    \xba\xba%12s    \xba\xba%7s  \xba\xba%8d    \xba\xba%12d    \xba\xba%9s    \xba",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation);
                    printf("\n\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
                }
            }while(!feof(listeV));
            if(!i) printf("\n\n\t\t\xaf\xaf 941 Pas de voiture a louer !\n");
            fclose(listeV);

            //choisir la voiture
            vID:
            printf("\n\n\t\t\t\xaf Entrez l'Id de Voiture que vous souhaitez louer : ");
            scanf("%d",&idv);
            if(exist(voitureIds,idv,i)) {
                listeV=fopen("listeVoitures.txt","r");
                if(!listeV){
                    errorFile(951);
                    return 1;
                }
                do{
                    fscanf(listeV,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation);
                }while((idv!=v.idVoiture));
                fclose(listeV);

                //modification voiture
                liste=fopen("listeContrats.txt","r");
                tmp=fopen("tmpContrats.txt","w");
                if(!liste||!tmp){
                    errorFile(963);
                    return 1;
                }
                do {
                    fscanf(liste,"%f ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d\n",&ct.numContrat,&ct.idVoiture,&ct.idClient,&ct.debut.jour,&ct.debut.mois,&ct.debut.annee,&ct.fin.jour,&ct.fin.mois,&ct.fin.annee,&ct.cout);
                    if(id==ct.numContrat) {
                        changeStatus("N",ct.idVoiture);
                        ct.idVoiture=v.idVoiture;
                        duree=days(ct.debut,ct.fin);
                        ct.cout=duree*v.prixJour;
                        changeStatus("O",ct.idVoiture);
                    }
                    fprintf(tmp, "%.2f ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d\n", ct.numContrat, ct.idVoiture,ct.idClient, ct.debut.jour, ct.debut.mois, ct.debut.annee, ct.fin.jour, ct.fin.mois,ct.fin.annee, ct.cout);

                } while (!feof(liste));

                fclose(liste);
                fclose(tmp);
                remove("listeContrats.txt");
                rename("tmpContrats.txt","listeContrats.txt");
                goto goodOut;
            } else {
                printf("\n\n\t\t\t\xaf Voulez vous retaper un autre ID ? ");
                printf("\n\n\t\t\t      0: NON            1: OUI      ");
                printf("\n\n\t\t\t\t Votre choix  :  ");
                scanf("%d",&C);
                if(C) goto vID;
                return 1;
            }
        case 2 :
            liste=fopen("listeContrats.txt","r");
            tmp=fopen("tmpContrats.txt","w");
            if(!liste||!tmp){
                errorFile(996);
                return 1;
            }
            do {
                fscanf(liste,"%f ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d\n",&ct.numContrat,&ct.idVoiture,&ct.idClient,&ct.debut.jour,&ct.debut.mois,&ct.debut.annee,&ct.fin.jour,&ct.fin.mois,&ct.fin.annee,&ct.cout);
                if(id==ct.numContrat) {
                    duree = days(ct.debut,ct.fin);
                    ct.cout/=duree;
                    do {
                        printf("\n\t Entrez la date de fin de Contrat (jj mm aaaa): ");
                        scanf("%d %d %d",&ct.fin.jour,&ct.fin.mois,&ct.fin.annee);
                        duree = days(ct.debut,ct.fin);
                    } while(!validDate(ct.fin) || (duree<=0));
                    ct.cout*=duree;
                }
                fprintf(tmp, "%.2f ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d ; %d\n", ct.numContrat, ct.idVoiture,ct.idClient, ct.debut.jour, ct.debut.mois, ct.debut.annee, ct.fin.jour, ct.fin.mois,ct.fin.annee, ct.cout);
            } while (!feof(liste));
            fclose(liste);
            fclose(tmp);
            remove("listeContrats.txt");
            rename("tmpContrats.txt","listeContrats.txt");
            goto goodOut;
        case 3 :
            return 1;
        default:
            cls();
            printf("\n\n\t\t****** Choix invalid ! *******\n");
            goto prMod;
    }
    if(0){
        goodOut :
        printf("\n\n\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
        printf("\n\t\t\t        \xb3                              \xb3");
        printf("\n\t\t\t        \xb3      Mise a jour reussie     \xb3");
        printf("\n\t\t\t        \xb3                              \xb3");
        printf("\n\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
    }
    if(0) {
        invID :
        printf("\n\n\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t******* ID indisponible ! *******\n");
        printf("\n\t\t\t\t*********************************\n\n");
        printf("\n\n\t\t\t\xaf Voulez-vous Retapez l'identifiant ? ");
        printf("\n\n\t\t\t      0: NON             1: OUI      ");
        printf("\n\n\t\t\t\t Votre choix  :  ");
        scanf("%d", &choix);
        if (choix) goto start;
    }
    return 0;
}
void supprimerContrat(){
    int n,choix;
    float id;
    start :
    printf("\n\n\t\t\t\xaf Saisissez le numero de contrat a supprimer :");
    scanf("%f",&id);
    n=suppContrat(id);
    if(n) {
        printf("\n\n\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t******* ID indisponible ! *******\n");
        printf("\n\t\t\t\t*********************************\n\n");
        printf("\n\n\t\t\t\xaf Voulez-vous Retapez l'identifiant ? ");
        printf("\n\n\t\t\t      0: NON             1: OUI      ");
        printf("\n\n\t\t\t\t Votre choix  :  ");
        scanf("%d", &choix);
        if (choix) goto start;
    } else {
        printf("\n\n\t\t\t        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
        printf("\n\t\t\t        \xb3                              \xb3");
        printf("\n\t\t\t        \xb3     Supprimee avec succes    \xb3");
        printf("\n\t\t\t        \xb3                              \xb3");
        printf("\n\t\t\t        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
    }
}

void errorFile(int l){
    printf("\n\n\t\t\xaf\xaf %d Erreur d'ouverture de fichier !\n",l);
}
void cls(){
    system("cls");
}

//MADE BY OUZLIM NADIR