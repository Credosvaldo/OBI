#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m[n][n],l[n],c[n];

    memset(l,0,sizeof(l));
    memset(c,0,sizeof(c));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>> m[i][j];
            l[i]+=m[i][j];
            c[j]+=m[i][j];
        }

    }

    int resp=0;

    int aux;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            aux=l[i]+c[j]- 2*m[i][j];
            resp = max(resp,aux);
        }

    }

    cout<< resp;



    return 0;
}
