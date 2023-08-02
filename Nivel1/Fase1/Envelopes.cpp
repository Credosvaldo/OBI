#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,K,aux;
    cin>>N>>K;
    int v[K];
    for(int i=1;i<K;i++)
        v[i]=0;

    for(int i=0;i<N;i++)
    {
        cin>>aux;
        v[aux-1]++;
    }
    aux=0;
    for(int i=0;i<K;i++)
    {
        if(v[i]==0)
        {
            cout<<0;
            return 0;
        }
        if(v[i]<v[aux])
        {
            aux=i;
        }
    }

    cout<< v[aux];


    return 0;
}
