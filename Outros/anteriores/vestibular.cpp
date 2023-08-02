#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    int aux =0;
    cin >>N;
    char GA[N];
    char G[N];
    for (int i=0;  i<N;  i++)
    {
        cin>> G[i];
    }
    for (int i=0;  i<N;  i++)
    {
        cin>> GA[i];
    }
    for (int i=0;  i<N;  i++)
    {
        if (G[i]==GA[i])
        {
            aux=aux+1;
        }
    }
    cout<< aux;







    return 0;
}





