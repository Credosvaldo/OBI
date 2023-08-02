#include<bits/stdc++.h>
using namespace std;

unsigned long long int n;

unsigned long long int busca(unsigned long long int *v, unsigned long long int x)
{
    unsigned long long int ini=0,fim=n,meio,aux;

    while(ini<=fim)
    {
        meio=floor((ini+fim)/2);
        if(v[meio]==x)
        {
            return meio;
        }
        if(x>v[meio])

        {
            aux=meio;
            ini=meio+1;
        }
        else
        {
            fim=meio-1;
        }

    }


    return aux;

}

int main()
{
    unsigned long long int m; // numero de faixas // numero de ogros
    cin>>n>>m;
    unsigned long long int vf[n],vp[n],vo[m];//vetor faixa //vetor premiaçao //vetor ogros

    vf[0]=0;

    for(unsigned long long int i=1;i<n;i++)
        cin>>vf[i];
    for(unsigned long long int i=0;i<n;i++)
        cin>>vp[i];
    for(unsigned long long int i=0;i<m;i++)
        cin>>vo[i];

    for(unsigned long long int i=0;i<m;i++)
    {
        cout<<fixed<<setprecision(0)<<vp[busca(vf,vo[i])]<<" ";

    }


    return 0;
}
