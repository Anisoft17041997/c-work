#include<stdio.h>
enum {FAUX,VRAI};
/*****************************************************************************/
/* */
/* main */
/* */
/*****************************************************************************/
int main()
{
    int i,j,r; /* les operandes */
    char c; /* l'operateur */
    char imp; /* booleen de demande d'impression du resultat */
    int ret; /* code de retour de scanf */
    char buf_err[80];
    while(1)
    {
        if((ret=scanf("%d%c%d",&i,&c,&j))!=3)
        {
            if(ret==EOF) exit(0);
            scanf("%[^\n]",buf_err); /* onmangelapartieerronee */
            printf("Erreurdesyntaxe:%s\n",buf_err);
            continue;
        }
        imp=VRAI;
        switch(c)
        {
        case'+':
            r=i+j;
            break;
        case'-':
            r=i-j;
            break;
        case'*':
            r=i*j;
            break;
        case'/':
            if(j==0)
            {
                printf("Division  par Zero\n");
                imp=FAUX;
            }
            else r=i/j;
            break;
        case'%':
            r=i%j;
            break;
        default :
            printf("l'operateur %c est incorrect\n",c);
            imp=FAUX;
        } /* finduswitch */
        if(imp)printf("%d\n",r);
    }
    return 0;
}
