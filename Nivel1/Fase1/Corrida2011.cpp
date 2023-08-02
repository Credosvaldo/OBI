#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,M;
    cin>> N>> M;
    int v[N], aux, resp[3] = {0,1,2};


    for(int i=0; i<N; i++)
    {
        v[i]=0;
        for(int j=0;j<M;j++)
        {
            cin>> aux;
            v[i] += aux;
        }
    }
    for(int j =0;j<3;j++)
    {
        aux=0;
        while(v[aux]==-1) aux++;
        for(int i=1; i<N; i++)
        {
            if(v[aux]>v[i] && v[i] != -1)
            {
                aux=i;

            }

        }
        v[aux]=-1;
        cout<< aux+1 << "\n";

    }
    return 0;
}
