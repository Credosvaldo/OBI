#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin>>N;
    int V[N][N];


    for(int i=0;i<N;i++)
        for (int j=0;j<N;j++)
           V[j][i]=0;


    for(int i=0;i<N;i++)
        cin>> V[1][i];








        for (int i=0;i<N;i++)
    for (int j=0;j<N;j++)
        cout<<V[j][i]<<"  ";












    for(int i=-1;i< N;i++)
        for (int j=0;j<N;j++)
        {
            if(V[j][i]==V[j+1][i])
                V[j][i+1]=1;
                else
                 V[j][i+1]=-1;
        }

        if (V[N][1]==0)
        {
            if(V[N-1][N]==1)
                cout<< "preta";
            else
                cout<< "branca";
        }
        else
        {
            if(V[N-1][1]==1)
                cout<< "preta";
            else
                cout<< "branca";
        }







    return 0;
}










