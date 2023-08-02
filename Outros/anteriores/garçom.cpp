#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    int aux=0;
    cin >>N;
    int L [N];
    int C [N];
    for (int i=0;  i<N;  i++)
    {
        cin>> L[i];
        cin>> C[i];
    }
    for (int i=0;  i<N;  i++)
    {
        if (L[i]>C[i])
            aux=aux+ C[i];
    }
    cout<< aux;




    return 0;
}
