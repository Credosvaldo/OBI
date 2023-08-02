#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

int n,m;
int v[MAX];
int c[MAX];

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>v[i];

    memset(c,0,sizeof(c));


    int aux,ant=0;
    cin>>ant;
    c[ant]=1;

    for(int i=1;i<=m;i++)
    {
        cin>>aux;
        if(aux>ant)
        {
            c[ant]=1;
            c[ant+1]=-1;
        }
        else
        {

        }

        ant=aux;


    }


    return 0;
}
