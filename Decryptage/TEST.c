#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    //char * lettres = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char * code = "OJ SJ ATNX UFX QJ WFUUTWY !!!";
    int cle = 5;//indice de décalage
    int i = 0;

    /*for(cle = 1; cle<=26; cle++){
        //printf("cle:%d  :",cle);

        printf("\n");
    }*/
    /*decrypatage*/
        while(*(code+i)){
            if(*(code+i)>='A' && *(code+i)<='Z')
                printf("%c",((*(code+i)-'A')-cle)+65);
            else
                printf("%c",*(code+i));

            i++;
        }

    return 0;
}
