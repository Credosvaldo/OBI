#include<bits/stdc++.h>
#include<vector>
#define MAX 50005

using namespace std;

int n;
int tab[MAX][20];
int nivel[MAX];
vector<int> aresta[MAX];
int pares[2][MAX/2];


void bfs(int x)
{
    for(int i=0;i<aresta[x].size();i++)
    {
        int y = aresta[x][i];

        if(nivel[y]!=-1)
            continue;

        tab[y][0] = x;
        nivel[y] = nivel[x]+1;
        bfs(y);
    }


}


int cal(int a,int b)
{

    if(nivel[a]<nivel[b])
        swap(a,b);

    for(int i=19;i>=0;i--)
        if(nivel[tab[a][i]]>=nivel[b])
            a=tab[a][i];

    if(a==b)
        return nivel[a];


    for(int i=19;i>=0;i--)
        if(tab[a][i] != -1 && tab[a][i]!=tab[b][i])
        {
            a=tab[a][i];
            b=tab[b][i];
        }



    return nivel[tab[a][0]];
}



int main()
{
    cin>>n;
    memset(pares,-1,sizeof(pares));
    memset(nivel,-1,sizeof(nivel));

    for(int i=1;i<=n;i++)
    {
        int aux;
        cin>>aux;
        pares[0][aux]==-1 ? pares[0][aux]=i : pares[1][aux]=i;
    }



    for(int i=1;i<n;i++)
    {
        int aux,aux2;
        cin>>aux>>aux2;

        aresta[aux].push_back(aux2);
        aresta[aux2].push_back(aux);

    }

    tab[1][0]=1;
    nivel[1]=1;


    bfs(1);

    //prencher a tabela
    for(int j=1;j<20;j++)
        for(int i=1;i<=n;i++)
            tab[i][j]=tab[tab[i][j-1]][j-1];


    int resp=0;


    for(int i=1;i<=n/2;i++) resp+= nivel[pares[0][i]] + nivel[pares[1][i]] - 2*cal(pares[0][i], pares[1][i]);


    cout<< resp;



    return 0;
}
