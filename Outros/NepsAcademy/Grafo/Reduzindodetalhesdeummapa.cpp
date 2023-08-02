#include<bits/stdc++.h>
#define MAX 124750
using namespace std;

struct are
{
    int x,y,d;
};

bool comp(are a, are b){return a.d<b.d;}

int peso[505];
int pai[505];
are aresta[MAX];
int n,m;

int findi(int x)
{
    if(pai[x]==x)return x;
    return pai[x]=findi(pai[x]);
}
void join(int x,int y)
{
    x=findi(x);
    y=findi(y);
    if(peso[x]<peso[y])
        pai[x]=y;
    else if(peso[x]>peso[y])
        pai[y]=x;
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
        pai[i]=i;

    for(int i=1;i<=m;i++)
    {
        cin>> aresta[i].x>> aresta[i].y>> aresta[i].d;
    }

    sort(aresta+1,aresta+m+1,comp);




    for(int i=1;i<=m;i++)
    {
        if(findi(aresta[i].x) != findi(aresta[i].y))
        {
            resp+=aresta[i].d;
            join(aresta[i].x,aresta[i].y);
        }
    }

    cout<< resp;

    return 0;
}




