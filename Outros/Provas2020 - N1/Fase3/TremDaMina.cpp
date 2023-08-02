#include<bits/stdc++.h>
#define INF 1000000000;
#define MAX 10005
using namespace std;
typedef pair<int,int>pii;

int e,r;
vector<pii>viz[MAX];
int k;
int c,t;
vector<int>aux;
bool deu;

bool barado()
{
    return false;
}

int bfs(int q,int ant)
{
    cout<< "q: " <<q<< "\n";
    if(q==c)
    {
        if(ant != -1)
        {
            deu=1;
            return 0;
        }

    }


    int resp=INF;
    for(int i=0;i<viz[q].size();i++)
    {
        cout<< "valor de viz[q][i]: "<< viz[q][i].second<< "\n";
        cout<< "valor de ant: "<< ant<< "\n";
        if(viz[q][i].second==ant)
        {
            cout<< "continuou\n";
            continue;
        }
        cout<< "Naocontinuaou\n";


        resp = min(resp,viz[q][i].first+bfs(viz[q][i].second,q));

    }
    return resp;

}


int main()
{
    cin>>e>>r;

    for(int i=1;i<=r;i++)
    {
        int a,b,g;
        cin>>a>>b>>g;

        viz[a].push_back(pii(g,b));
        viz[b].push_back(pii(g,a));

    }

    cin>>k;

    for(int i=1;i<=k;i++)
    {
        cin>>c>>t;
        int resp = bfs(c,-1);
        if(deu) cout<< resp;
        else cout<< "-1";
        cout<< "\n";

        deu=false;

    }


    return 0;
}
