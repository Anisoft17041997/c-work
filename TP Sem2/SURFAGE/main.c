
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int n=4;
    int i, ig, elu, controle;
    float Tsc[n], Tsuf[n], somme, echange;

    //SAISIE DES SCORES
        somme=0;
        saisiescore(Tsc);
        //CALCUL DU TOTAL DES SCORES
        calculsuff(Tsuff);

    //RECHERCHE DU CANDIDAT ELU
    elu=0;
    for(i=0; i<n; i++)
    {
        if(Tsuf[i]>50)
        {
            elu=1;
            ig=i;
            break;
        }
    }

    //AFFICHAGE
    if(elu==1){

        i=ig;
        printf("Le candidat %d est elu au premier tour avec %f\n", (i+1), Tsuf[i]);
        for(i=0;i<4;i++){
            if(i!=ig){
                printf("Le candidat %d est battu au pemier tour avec %f\n", (i+1), Tsuf[i]);
            }
        }
    }
    else if(elu==0){
        for(i=0; i<n; i++){
            if(Tsuf[i]>12.5){
                printf("Le candidat %d passe au second tour avec %f\n", i+1, Tsuf[i]);
            }
            else{
                printf("Le candidat %d ne passe pas au second tour et donc est battu avec %f\n", i+1, Tsuf[i]);
            }
        }
    }
    return 0;
}
void saisiescore(float Tsc[]){
     const int n=4;
     int i;
     float Tsc[4];
     float *T;
	T=Tsc;			
	for(i=0; i<n; i++){
            printf("");
            do{
                printf("SAISIR LE SCORE DU CANDIDAT %d : ",i+1);
                controle=scanf("%f",&Tsc[i]);
                fflush(stdin);
                printf("\n");
                if(!controle){
                    printf("La saisie des scores d'un candidat doivent etre en chiffre\n\n"
                            "VEUILLEZ REESSAYER\n\n");
                }
            }while(!controle);
        }
	
calculsuff(float Tsuff[]){
	int i;
	float som; 
	for(i=0; i<n; i++)
        {
            somme+=Tsc[i];
        }

        //CALCUL DES SURFAGES
        for(i=0; i<n; i++)
        {
            Tsuf[i]= ((Tsc[i]*100)/somme);
        }
