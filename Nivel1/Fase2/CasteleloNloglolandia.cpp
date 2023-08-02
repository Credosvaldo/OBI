#include<bits/stdc++.h>
#include<vector>
#define MAX 105
using namespace std;

int n,m;
int pai[MAX];
int nivel[MAX];
int cor[MAX];
vector<int>ares[MAX];

void dfs(int x)
{

    for(int i=0;i<ares[x].size();i++)
    {
        if(pai[ares[x][i]]==-1)
        {
            nivel[ares[x][i]]=nivel[x]+1;
            pai[ares[x][i]]=x;
            dfs(ares[x][i]);
        }

    }

}

void colorir(int p,int q,int c)
{
    while(p!=q)
    {
        if(nivel[p]==nivel[q])
        {
            cor[p]=c;
            cor[q]=c;
            p=pai[p];
            q=pai[q];
        }
        else if(nivel[p]>nivel[q])
        {
            cor[p]=c;
            p=pai[p];
        }
        else
        {
            cor[q]=c;
            q=pai[q];
        }

    }
    cor[p]=c;


}


int main()
{
    cin>>n>>m;
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;

        ares[u].push_back(v);
        ares[v].push_back(u);

    }

    memset(pai,-1,sizeof(pai));
    memset(cor,0,sizeof(cor));
    nivel[1]=1;
    pai[1]=1;
    dfs(1);


    for(int i=0;i<m;i++)
    {
        int p,q,c;
        cin>>p>>q>>c;
        colorir(p,q,c);
    }

    for(int i=1;i<=n;i++)
        cout<< cor[i]<< " ";


/*
    for(int i=1;i<=n;i++)
        cout<< "pai de "<<i<< " e: " <<pai[i]<< "\n";
*/



    return 0;
}
