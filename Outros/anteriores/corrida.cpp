#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    int M;
    cin>> N>>M;
    int V[M];
    int C[N];
    int aux=0;
    int aux2=10000001;



    for (int i=0;i<M;i++)
    {
        cin>>V[i];
    }
    for (int i=0;i<N;i++)
        for (int a=0;a<M;a++)
        {
            cin>>aux;
            C[i]=aux+C[i];
        }
    for (int i=0;i<N;i++)
    {
        if (C[i]<aux2)
        {
            aux2=i;
        }

    }
    cout<< aux2;









    return 0;
}
