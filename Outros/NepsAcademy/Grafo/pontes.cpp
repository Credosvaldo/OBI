#include<bits/stdc++.h>
#include<vector>
#include<queue>
#define INF 999999999
using namespace std;

typedef pair<int,int> pii;

int n,m,dp[1005];
bool p[1005];
vector<pii>vizinhos[1005];

void DJ()
{
    priority_queue<pii,vector<pii>,greater<pii> >fila;
    fila.push(make_pair(0,0));
    while(1)
    {
        int davez=-1;
        while(!fila.empty())
        {
            int atual;
            atual = fila.top().second;
            fila.pop();
            if(!p[atual])
            {
                davez=atual;
                break;
            }
        }
      //  cout<< davez<< " pelomenos\n";
        if(davez==-1) break;

        for(int i=0;i<vizinhos[davez].size();i++)
        {//cout<< "chequei";
            if(dp[davez]+vizinhos[davez][i].first<dp[vizinhos[davez][i].second])
            {

                dp[vizinhos[davez][i].second]=dp[davez]+vizinhos[davez][i].first;
                fila.push(make_pair(dp[vizinhos[davez][i].second],vizinhos[davez][i].second));
            }
        }

    }
}

int main()
{
    cin>>n>>m;
    n+=2;
    for(int i=0;i<m;i++)
    {
        int s,t,b;
        cin>>s>>t>>b;
        vizinhos[s].push_back(make_pair(b,t));
        vizinhos[t].push_back(make_pair(b,s));

    }
    for(int i=0;i<1005;i++)
    {
        dp[i]=INF;
    }
    dp[0]=0;

    DJ();

    cout<< dp[n-1];
/*
cout<< "\n\n\n";
for(int i=0;i<500;i++)
    cout<<dp[i]<< "\n";

*/

    return 0;
}
