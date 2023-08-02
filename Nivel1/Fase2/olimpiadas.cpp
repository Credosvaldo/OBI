#include<bits/stdc++.h>
#define MAX 105
using namespace std;

struct med{
int ind,valor;
};

int n,m;
med v[MAX];


bool comp(med a,med b)
{
    if( a.valor == b.valor)
    {
;        return a.ind<b.ind;
    }
    return a.valor>b.valor;
}

int main()
{
    cin>>n>>m;
    memset(v,0,sizeof(v));

    for(int i=1;i<=n;i++)
        v[i].ind=i;

    for(int i=1;i<=m;i++)
    {
        int o,p,b;

        cin>>o>>p>>b;

        v[o].valor+=1000000;
        v[p].valor+=1000;
        v[b].valor+=1;

    }

    sort(v+1,v+n+1,comp);

    for(int i=1;i<=n;i++)cout<< v[i].ind<< " ";

    return 0;
}
