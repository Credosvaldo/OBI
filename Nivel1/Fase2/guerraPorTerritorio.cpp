#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v[n];

    int aux1,aux2=0;


    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }


    aux1=v[0];
    for(int i=1;i<n;i++)
    {
        aux2+=v[i];
    }

    int aux=v[1];
    int i=1;

    while(aux1!=aux2)
    {
        aux1+=aux;
        aux2-=aux;
        i++;
        aux=v[i];

    }

    cout<<i;



    return 0;
}
