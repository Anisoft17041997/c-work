#include <iostream>
#include <stdlib.h>
using namespace std;
float fact(int n)
{
    if (n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    system("cls");
    int i,j,n;
    cout<<"Entrer un entier: ";
    cin>>n;
    for (i=0; i<=n; i++)
    {
        for (j=0; j<=i; j++)
        {
            cout<<(fact(i)/(fact(i-j)*fact(j)));
            cout<<"\t";
        }
        cout<<endl;
    }
    char rep;
    cout<<"\nRecommencer?(O/N): ";
    cin>>rep;
    if (rep=='O' || rep=='o')
        main();
    return 0;
}
