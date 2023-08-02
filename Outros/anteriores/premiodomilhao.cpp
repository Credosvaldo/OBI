#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long int N;
    long int aux=0;
    cin>> N;
    long int A[N];
    for (int i=0;i<N;i++)
    {
        cin>> A[i];
    }






    for (int i=-1;i<N;i++)
    {




        if (aux>=1000000)
        {
            cout<< i+1;
        }
        else
        {
            aux=aux+A[i];
        }






    }


    return 0;
}
