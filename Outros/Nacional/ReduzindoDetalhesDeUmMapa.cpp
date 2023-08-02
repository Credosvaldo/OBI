#include<bits/stdc++.h>
#include<vector>
#define MAX 124755
using namespace std;

struct are{
int u,v,c;
};

int n,m;
are v[MAX];
int pai[MAX];


bool comp(are a,are b)
{
    return a.c<b.c;
}

int findi(int x)
{
    if(pai[x]==x) return x;
    return pai[x]=findi(pai[x]);
}

int main()
{
    cin>>n>>m;

    for(int i=1;i<=n;i++) pai[i]=i;

    for(int i=1;i<=m;i++)
        cin>>v[i].u>>v[i].v>>v[i].c;


    sort(v+1,v+1+m,comp);

    int resp=0;

    for(int i=1;i<=m;i++)
    {
        int a,b;
        a=findi(v[i].u);
        b=findi(v[i].v);

        if(a != b)
        {
            resp+=v[i].c;
            pai[a]=b;
        }
    }

    cout<< resp;


    return 0;
}
