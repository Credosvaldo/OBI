#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M,aux,resposta=0;
    cin>>N>>M;
    int v[N]={0};

    for(int i=0;i<M;i++)
    {
        cin>> aux;
        for(int j=0;j<N;j++)
        {
            if(v[j]==0 || v[j]==aux)
            {
                v[j]=aux;
                break;
            }
        }
    }
for(int i=0;i<N;i++)
{
    if(v[i]==0)
        resposta++;
}
cout<< resposta;



    return 0;
}
