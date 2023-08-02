#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    int M;
    int aux=0;
    cin>> N>>M;
    int V[M+1];
    int v[N+1];
    for (int i=1;i=M;i++)
    {
        cin >> V[i];
    }
    for (int i=1;i=N;i++)
        v[i]=0;
    for (int i=1;i=M;i++)
        for (int j=1;j=N;j++)
                if (V[i]==j)
                    v[j]=1;
    for (int i=1;i=N;i++)
        if (v[i]==1)
            aux=aux+1;
        cout<< aux;
    return 0;
}
