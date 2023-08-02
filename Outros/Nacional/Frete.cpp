#include<bits/stdc++.h>
#include<vector>
#include<queue>
#define INF 1000000000
#define MAX 105

using namespace std;
typedef pair<int ,int>pii;

int n,m;
vector<pii>v[MAX];
bool pro[MAX];
int dp[MAX];


void dj()
{
    priority_queue<pii,vector<pii>,greater<pii> >fila;

    fila.push(pii(0,1));

    while(true)
    {
        int davez=-1;
        int dis;

        while(!fila.empty())
        {
            int atual;
            atual = fila.top().second;
            dis=fila.top().first;

            fila.pop();

            if(!pro[atual])
            {
                davez=atual;
                pro[davez]=1;
                break;

            }


        }

        if(davez==-1)break;

        for(int i=0;i<v[davez].size();i++)
        {
            dis=v[davez][i].first;
            if(dis+dp[davez]<dp[v[davez][i].second])
            {
                dp[v[davez][i].second]=dis+dp[davez];
                fila.push(pii(dp[v[davez][i].second],v[davez][i].second));
            }
        }


    }


}


int main()
{
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        v[a].push_back(pii(c,b));
        v[b].push_back(pii(c,a));

    }


    for(int i=1;i<MAX;i++)
        dp[i]=INF;

    dp[1]=0;
    dj();

    cout<<dp[n];



    return 0;
}
