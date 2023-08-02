#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,aux=0,aux1=0,resp=0;
    cin>>N;
    int m[N][N];

    for(int i=0;i<N;i++)
       for(int j=0;j<N;j++)
            cin>> m[i][j];


    for(int i=0;i<N;i++)
    {
        aux+=m[N-i-1][N-i-1];
        aux1+=m[N-i-1][0+i];
    }


    if(aux!=aux1)
    {
        cout<< -1;
        return 0;
    }

    resp=aux;


    for(int i=0;i<N;i++)
    {
        aux = 0;
        aux1= 0;
        for(int j=0;j<N;j++)
        {
            aux+= m[i][j];
            aux1 += m[j][i];
        }


        if(aux!=aux1 || aux!=resp)
        {
            cout<<-1;
            return 0;
        }
    }

    cout<< resp;

    return 0;
}


/*
3
2 7 6
9 5 1
4 3 8



*/
