    /*
        Name:       Hello_main.c
        Purpose:    First C program
        Authors:    Course of C
        Date:       2016/04/14
    */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a=5,b,y;
    printf("\nFirst\tprogram\tof\n "
           "C's\tcourse\n");
           x=(++a)-(a--);
           y=(++a)-(a++);
    printf("Hello worLd %d \n",x,(--a));
    printf("Welcome to C's course \n",y);
    printf("Hello, ");
    printf("World");
    getchar();
    return 0;
}
