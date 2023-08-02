#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

int n,k;
int pai[MAX];

int findi(int x)
{
    if(pai[x]==x) return x;
    return pai[x] = findi(pai[x]);
}

int main()
{
    cin>>n>>k;

    for(int i=1;i<=n;i++)
        pai[i]=i;

    for(int i=1;i<=k;i++)
    {
        char c;
        cin>>c;

        int a,b;
        cin>>a>>b;

        if(c=='F')
            pai[findi(a)]=findi(b);
        else
            findi(a) == findi(b) ? cout<< "S\n" : cout<< "N\n";


    }


    return 0;
}
