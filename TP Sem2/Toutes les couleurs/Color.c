    /*
        Name:       All_Colors.c
        Purpose:    To show all 256 console colors
        Authors:    Gauthier EHOLOUM
        Date:       2016/04/14
    */


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int i;
    HANDLE hconsole=GetStdHandle(STD_OUTPUT_HANDLE);
    for(i=0;i<256;++i)
    {
        SetConsoleTextAttribute(hconsole,i);
        printf("%1.4d\n",i);
    }
    SetConsoleTextAttribute(hconsole,15);
    system("pause");
    return 0;
}