#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int v[k],aux=10000;
    for(int i=0;i<k;i++)
    {
        cin>>v[i];
        aux=max(aux,v[i]);
    }
    int resp=0;

    for(int i=aux;i>0;i--)
    {
        for(int j=0;j<k;j++)
        {
            resp+= floor(v[j]/i);
        }
        if(resp>=n)
        {
            resp=i;
            break;
        }
        resp=0;
    }

    cout<< resp;


    return 0;
}
