#include <iostream>

using namespace std;

int main()
{
    bool v;
    bool b[2]= {true,false};
    cout<<"La valeur de vrai est "<<b[0]<<endl;
    cout<<"La valeur de faux est "<<b[1]<<endl<<endl;
    /*ET logique*/
    cout<<"ET logique\n"<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            v = b[i] && b[j];
            cout<<b[i]<<" ET "<<b[j]<<" = "<<v<<endl;
        }
    }
    cout<<"\n";
    cout<<"OU logique\n"<<endl<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            v = b[i] || b[j];
            cout<<b[i]<<" OU "<<b[j]<<" = "<<v<<endl;
        }
    }
    cout<<"\n";
    cout<<"NON logique\n"<<endl<<endl;
    for(int j=0; j<2; j++)
    {
        v = !b[j];
        cout<<"NON "<<b[j]<<" = "<<v<<endl;
    }
    return 0;
}
