#include "prototypes.h" /*Fichier des prototypes de fonction*/

/******************FONCTION AIDE****************/
void FonctionAide()
{
    /*declaration des variables locsales*/
    char *Aide = "\nVoici pour vous des informations qui vous aideront a faire votre choix dans le menu ci-dessus\n"
                    "\n\n1 INIALISER LES FICHIERS: Vous permet de remettre les fichiers de ce traitement a zero **"
                    "\n\t\t\t  pour une futur utilisation.                                   "
                    "\n\n2 MISE A JOUR          : Vous permet de faire des operations telles un ajout d'un nouveau"
                    "\n\t\t\t candidat, la modification des donnees concernant un candidat,la"
                    "\n\t\t\t suppression d'un candidat(toutes ces donnes existantes).       "
                    "\n\n3 SAISIE DES NOTES     : Cette option vous permet de saisir les notes des  les  candidats"
                    "\n\t\t\t apres le concours.                                             "
                    "\n\n4 CANDIDATS INSCRITS   : Cette option vous affiche la liste definifive de tous les ******"
                    "\n\t\t\t candidats ayant ete inscrits.                                  "
                    "\n\n5 CANDIDATS COMPOSES   : Cette option vous affiche la liste des candidats ainsi que leur "
                    "\n\t\t\t notes au concours.                                             "
                    "\n\n6 CANDIDATS A RETENIR  : Cette option vous affiche la liste definitive de tous les ******"
                    "\n\t\t\t aspirants(tous les candidats ayant reussi le test).            "
                    "\n\n7 STATISTIQUES         : Cette option vous affiche, apres statistique, des histigrammes *"
                    "\n\t\t\t respectivement en fonction des mentions, des etablissements de "
                    "\n\t\t\t provenance et du sexe.                                         "
                    "\n\n8 AIDE                 : Cette option, comme vous le remarquez vous aide a savoir quelle "
                    "\n\t\t\t choix faire en fonction de l'operation souhaitee.              "
                    "\n\n0 SORTIR               : Comme sa denomination l'indique, vous permet de sortir du ******"
                    "\n\t\t\t programme.                                                     "
                    "\nVersion 1.0.0.0                                                       ";
    puts(Aide);
}

