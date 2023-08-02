#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,M,p,aux,d;
    cin>> N>>M;
    bool v[N+1] = {false};

    for(int i=0;i<M;i++)
    {
        aux=1;
        cin>>p;
        cin>>d;
        v[p]=1;
        while(p+d*aux <= N)
        {
            v[p+d*aux]=1;
            aux++;
        }
        aux=1;
        while(p-d*aux > 0)
        {
            v[p-d*aux]=1;
            aux++;
        }

    }

    for(int i=1;i<=N;i++)
        cout<< v[i] << "\n";


    return 0;
}
