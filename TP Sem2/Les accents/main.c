#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <conio.h>

int main()
{
    wchar_t MesAccents[50]={L'S',L'a',L'l',L'u',L't',L' ',L'G',130,L'r',L'a',L'r',L'd',L'\0'};
    printf("%ls",MesAccents);
    wchar_t MesAccent[50]={L"\nSalut G\x82rard!\n"};
    printf("\n%ls",MesAccent);
    wchar_t c;
    wprintf(L"\nEntrer un caract%lcre: ",138);
    fgetws(&c,2,stdin);
    wprintf(L"\nLe caract%lcre %lc a pour valeur %d\n",138,c,c);
    getch();
    return 0;
}
