#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,aux=0;
    cin>>n;
    long long int v[n];

    for(long long int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(long long int i=1;i<n;i++)
    {
        if(v[aux]>v[i])
            aux=i;
    }

    long long int i=aux,maior=0,resp=0,a=0;
    do{
        if(i==n) i=0;
        maior = max(a,maior+v[i]);
        resp=max(maior,resp);
        i++;
        //cout<<maior << "\n";


    }while(i!=aux);

    cout<<resp;

    return 0;
}
