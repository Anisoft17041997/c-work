#include <stdio.h>
#include <stdlib.h>

int main()
{

    void printTab(int *tab, int n);
    /*char **returnChar(int L, int C);
    char **tab = returnChar(10,10);
    int i;
    for(i=0; i<7; i++)
    {
        printf("%s\n",tab[i]);
    }\
    int tab[3];
    tab[0] = 2;
    tab[1] = 0;
    tab[2] = -1;
    printTab(tab,3);
    return 0;
}

void printTab(int *tab, int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d\t",tab[i]);
}
/*char **returnChar(int L, int C)
{
    int i,j;
    char **tab = malloc(L*sizeof(char *));
    for(i=0; i<L; i++)
    {
        tab[i] = malloc(C*sizeof(char));
        for(j=0; j<C; j++)
        {
            *(tab + i + j) = NULL;
        }
    }
    //tab[L][C] = {"Lundi","Mardi","Mercredi","Jeudi","Vendredi","Samedi","Dimanche"};
    return tab;
}
*/
