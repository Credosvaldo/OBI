#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    int cima[100005];
    int baixo[100005];
    int operacoes[100005];

    cin>>n>>t;

    for(int i=1;i<=n;i++)
        cin>>cima[i];
    for(int i=1;i<=n;i++)
        cin>>baixo[i];

    memset(operacoes,0,sizeof(operacoes));


    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        operacoes[a]++;
        operacoes[b+1]--;

    }
operacoes[1]%2==0 ? cout<< cima[1] : cout<< baixo[1];
cout<< " ";

    for(int i=2;i<=n;i++)
    {
        operacoes[i]+=operacoes[i-1];
        operacoes[i]%2==0 ? cout<< cima[i] : cout<< baixo[i];
        cout<< " ";
    }


    return 0;
}
