#include "myHeader.h"

int main() {

    int principal,gstCar,gstCl,gstLoc;
    int n,q;
    debut :
        cls();
        principal=menuPrincipal();
        switch (principal) {
            case 1 :
            loc :
                cls();
                gstLoc=locationVoiture();
                switch(gstLoc){
                    case 1:
                        cls();
                        afficherContrat();
                        n=retour();
                        if(n) goto loc;
                        goto debut;
                    case 2:
                        cls();
                        louerVoiture();
                        n=retour();
                        if(n) goto loc;
                        goto debut;
                    case 3:
                        cls();
                        retournerVoiture();
                        n=retour();
                        if(n) goto loc;
                        goto debut;
                    case 4:
                        cls();
                        modifierContrat();
                        n=retour();
                        if(n) goto loc;
                        goto debut;
                    case 5:
                        cls();
                        supprimerContrat();
                        n=retour();
                        if(n) goto loc;
                        goto debut;
                    case 6 :
                        cls();
                        goto debut;
                    default :
                        invalidOption();
                        goto loc;
                }
            case 2 :
            gv :
                cls();
                gstCar=gestionDesVoitures();
                switch(gstCar){
                    case 1:
                        cls();
                        afficherVoitures();
                        n=retour();
                        if(n) goto gv;
                        goto debut;
                    case 2:
                        cls();
                        ajouterVoiture();
                        n=retour();
                        if(n) goto gv;
                        goto debut;
                    case 3:
                        cls();
                        modifierVoiture();
                        n=retour();
                        if(n) goto gv;
                        goto debut;
                    case 4:
                        cls();
                        supprimerVoiture();
                        n=retour();
                        if(n) goto gv;
                        goto debut;
                    case 5:
                        cls();
                        goto debut;
                    default :
                        invalidOption();
                        goto gv;
                }
            case 3 :
            gc :
                cls();
                gstCl=gestionDesClients();
                switch(gstCl){
                    case 1:
                        cls();
                        afficherClients();
                        n=retour();
                        if(n) goto gc;
                        goto debut;
                    case 2:
                        cls();
                        ajouterClient();
                        n=retour();
                        if(n) goto gc;
                        goto debut;
                    case 3:
                        cls();
                        modifierClient();
                        n=retour();
                        if(n) goto gc;
                        goto debut;
                    case 4:
                        cls();
                        supprimerClient();
                        n=retour();
                        if(n) goto gc;
                        goto debut;
                    case 5:
                        cls();
                        goto debut;
                    default :
                        invalidOption();
                        goto gc;
                }
            case 4 :
                q=quitter();
                if(q) return 0;
                else {
                    cls();
                    goto debut;
                }
            default :
                invalidOption();
                goto debut;
        }
}
