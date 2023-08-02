#include<bits/stdc++.h>
#include<vector>
#define MAX 50500
using namespace std;

int n;
int ancestral[MAX][20];
vector<int>vizinhos[MAX];
int par[MAX/2][2];
int nivel[MAX];



void dfs(int x)
{
    for(int i=0;i<vizinhos[x].size();i++)
    {
        if(ancestral[vizinhos[x][i]][0]==-1)
        {
            nivel[vizinhos[x][i]]=nivel[x]+1;
            ancestral[vizinhos[x][i]][0]=x;
            dfs(vizinhos[x][i]);
        }

    }
}

int LCA(int x,int y)
{
    if(nivel[x]<nivel[y]) swap(x,y);

    for(int i=19;i>=0;i--)
    {
        if(nivel[ancestral[x][i]]>=nivel[y])
            x=ancestral[x][i];
    }
    if(x==y) return x;

    for(int i=19;i>=0;i--)
    {
        if(ancestral[x][i]!=-1 && ancestral[x][i]!=ancestral[y][i])
        {
            x=ancestral[x][i];
            y=ancestral[y][i];
        }
    }

    return ancestral[x][0];

}


int main()
{
    cin>>n;
    memset(par,-1,sizeof(par));
    memset(ancestral,-1,sizeof(ancestral));

    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(par[x][0]==-1)
            par[x][0]=i; else par[x][1]=i;
    }
    for(int i=1;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vizinhos[x].push_back(y);
        vizinhos[y].push_back(x);
    }
    nivel[1]=0;
    ancestral[1][0]=1;
    dfs(1);

    for(int j=1;j<20;j++)
    for(int i=1;i<=n;i++)
    if(ancestral[i][j-1]!=-1)
    ancestral[i][j]= ancestral[ancestral[i][j-1]][j-1];

    long long int resp=0;
    for(int i=1;i<=n/2;i++)
    {
        int x=par[i][0];
        int y=par[i][1];
        resp += (long long int)nivel[x]+nivel[y]-2*nivel[LCA(x,y)];
    }
    cout<< resp;


    return 0;
}
