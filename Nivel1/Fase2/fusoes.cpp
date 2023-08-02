#include<bits/stdc++.h>
using namespace std;

int n,k;
int pai[100005];

int findi(int x)
{
    return pai[x] == x ? x : pai[x] = findi(pai[x]);
//    if(pai[x]==x)return x;
//    return pai[x]=findi(pai[x]);
}

/*
void join(int x,int y)
{
    if(peso[x]>peso[y])
    {
        pai[y]=x;
    }
    else if(peso[x]<peso[y])
    {
        pai[x]=y;
    }
    else
    {
        pai[y]=x;
        peso[x]++;
    }

}
*/

int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        pai[i]=i;
    }


    for(int i=1;i<=k;i++)
    {
        char a;
        int b,c;

        cin>>a>>b>>c;

        b=findi(b);
        c=findi(c);

        if(a== 'F')
        {
            pai[b]=c;
        }
        else printf("%s\n", b==c?"S":"N");

    }




    return 0;
}
