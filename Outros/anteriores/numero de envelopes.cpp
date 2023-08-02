#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin >>N;
    int v[N];
    int aux;



    for(int i=0;i<N;i++)
        cin>> v[i];

        for (int i=0;i<N;i++)
            {
                if (aux>v[i])
                {
                    aux =v[i];
                }
            }



    cout<< aux;



    return 0;
}

