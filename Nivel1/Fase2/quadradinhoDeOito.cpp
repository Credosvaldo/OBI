#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,resp=0;
    cin>>n;
    int v[n],aux[n];
    for(int i=0;i<n;i++)
        cin>>v[i];

    aux[0]=v[0];
    if(v[0]%8==0)resp++;
    for(int i=1;i<n;i++)
    {
        aux[i]=aux[i-1]+v[i];
        if(aux[i]%8==0)resp++;
    }

    for(int i=1;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            aux[j]-=aux[i-1];
            if(aux[j]%8==0) resp++;
        }
    }


    cout<< resp;

    return 0;
}
