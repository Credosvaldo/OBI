#include<bits/stdc++.h>
#include<vector>
#define INF 1000000000
using namespace std;

int n;
vector<int>viz[100005];
int resp=INF;

int bfs(int x,int y)
{
    if(viz[x].size()==1) return 0;

    int mindist = INF;
    for(int i=0;i<viz[x].size();i++)
    {
        if(viz[x][i]==y) continue;

        int dis=bfs(viz[x][i],x)+1;
        //cout<< "valor de resp: "<<resp<< "\n";
        //cout<< "valor de mindist: "<<mindist<< "\n";
        //cout<< "valor do dis: "<<dis<< "\n";

        resp=min(resp, mindist+dis);

        mindist=min(mindist,dis);

    }
    return mindist;


}


int main()
{
    cin>>n;
    if(n==2)
    {
        cout<< 1;
        return 0;
    }

    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;

        viz[u].push_back(v);
        viz[v].push_back(u);

    }

    for(int i=1;i<=n;i++)
        if(viz[i].size()>1)
        {
            bfs(i,-1);
            break;

        }


    cout<< resp;


    return 0;
}
