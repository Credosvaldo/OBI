#include<bits/stdc++.h>
#define MAX 505
using namespace std;

struct are{
    int x,y,c;
};

bool comp(are a,are b){return a.c<b.c;}


int pai[MAX];
int peso[MAX];
int n,f,r;
are aresta[MAX];


int findi(int x)
{
    if(pai[x]==x) return x;
    return pai[x]=findi(pai[x]);
}
void join(int x, int y)
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
        cin>>n>>f>>r;
        for(int i=1;i<MAX;i++)
        {
            pai[i]=i;
            peso[i]=1;
        }

        for(int i=1;i<=f+r;i++)
        {
            cin>>aresta[i].x>>aresta[i].y>>aresta[i].c;
        }
        sort(aresta+1,aresta+1+f,comp);
        sort(aresta+1+f,aresta+1+f+r,comp);




        for(int i=1;i<=r+f;i++)
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


