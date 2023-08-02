#include<bits/stdc++.h>
#include<vector>
#define MAX 50500
using namespace std;

int n,duplas[MAX/2][2];
vector<int>vizinhos[MAX];
int aresta[MAX][20];// pode ser 20
int nivel[MAX];


void montar(int x)
{

    for(int i=0;i<vizinhos[x].size();i++)
    {
        if(aresta[vizinhos[x][i]][0]==-1)
        {
            aresta[vizinhos[x][i]][0]=x;
            nivel[vizinhos[x][i]]=nivel[x]+1;
            montar(vizinhos[x][i]);
        }

    }

}

int mac(int x,int y)
{
    if(nivel[y]>nivel[x])swap(x,y);


    for(int i=19;i>=0;i--)
    {
        if(nivel[aresta[x][i]]>=nivel[y])
        {
            x=aresta[x][i];
        }
    }



    if(x==y)return nivel[x];


    for(int i=19;i>=0;i--)
    {
        if(aresta[x][i]!=aresta[y][i] && aresta[x][i]!=-1)
        {
            x=aresta[x][i];
            y=aresta[y][i];
        }
    }

    return nivel[aresta[x][0]];

}


int main()
{
    cin>>n;

    memset(duplas,0,sizeof(duplas));

    for(int i=1;i<=n;i++)
    {
        int aux;
        cin>>aux;
        if(duplas[aux][0]==0)
        {
            duplas[aux][0]=i;
        }
        else
        {
            duplas[aux][1]=i;
        }

    }


    for(int i=1;i<n;i++)
    {
        int aux,aux2;
        cin>>aux>>aux2;

        vizinhos[aux].push_back(aux2);
        vizinhos[aux2].push_back(aux);
    }

    memset(aresta,-1,sizeof(aresta));
    aresta[1][0]=1;
    nivel[1]=1;
    montar(1);



    for(int j=1;j<20;j++)
        for(int i=1;i<=n;i++)
        {
            if(aresta[i][j-1]!=-1)
            aresta[i][j]= aresta[ aresta[i][j-1] ][j-1] ;
        }

    int resp=0;

    for(int i=1;i<=n/2;i++)
    {
        resp+=nivel[duplas[i][0]]+nivel[duplas[i][1]]- 2*mac(duplas[i][0],duplas[i][1]);
    }

    cout<< resp;




    return 0;
}
