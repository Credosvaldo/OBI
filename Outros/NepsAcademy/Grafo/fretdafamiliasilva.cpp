#include<bits/stdc++.h>
#define MAX 10005
using namespace std;

struct are{
int x,y,c;
};

bool comp(are a,are b){return a.c<b.c;}

int n,m;
are aresta[MAX];
int pai[1005];
int peso[1005];

int findi(int x)
{
    if(pai[x]==x) return x;
    return pai[x]= findi(pai[x]);
}
void join(int x,int y)
{
    x=findi(x);
    y=findi(y);
    if(peso[x]<peso[y])
    {
        pai[x]=y;
    }
    else if(peso[x]>peso[y])
    {
        pai[y]=x;
    }
    else
    {
        pai[x]=y;
        peso[y]++;
    }
}



int main()
{
    int resp=0;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
    {
        peso[i]=1;
        pai[i]=i;
    }
    for(int i=1;i<=m;i++)
    {
        cin>> aresta[i].x>>aresta[i].y>>aresta[i].c;
    }

    sort(aresta+1,aresta+1+m,comp);

    for(int i=1;i<=m;i++)
    {
        if(findi(aresta[i].x)!=findi(aresta[i].y))
        {
            resp+=aresta[i].c;
            join(aresta[i].x,aresta[i].y);
        }
    }


    cout<<resp;

    return 0;
}
