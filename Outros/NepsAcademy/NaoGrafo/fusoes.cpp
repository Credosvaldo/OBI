#include<bits/stdc++.h>
using namespace std;

int n,k;
int pai[100005];
int peso[100005];

int findi(int x)
{
    if(pai[x]==x) return x;
    return pai[x]=findi(pai[x]);
}

void join(int x, int y)
{
    x=findi(x);
    y=findi(y);
    if(x==y) return;
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
    cin>>n>>k;

    for(int i=1;i<=n;i++)
    {
        pai[i]=i;
        peso[i]=1;
    }
    char aux;
    int ban1,ban2;

    for(int i=1;i<=k;i++)
    {

        cin>>aux>> ban1>>ban2;
        if(aux == 'C')
        {
            if(findi(ban1)==findi(ban2))
                cout<< "S\n"; else cout<< "N\n";
        }
        else
        {
            //pai[ban1]=ban2;
            join(ban1,ban2);
        }
    }


    return 0;
}
