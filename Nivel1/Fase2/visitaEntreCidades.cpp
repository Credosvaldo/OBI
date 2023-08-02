#include<bits/stdc++.h>
#include<vector>
#include<queue>
#define INF 1000000000
#define MAX 10005
using namespace std;
typedef pair<int,int> pii;


int n,a,b;
vector<pii>vizinhos[MAX];
int dp[MAX];
bool pros[MAX];


void dj(int x)
{
    priority_queue<pii,vector<pii>,greater<pii> >fila;

    fila.push(make_pair(0,x));

    while(true)
    {
        int davez=-1;

        while(!fila.empty())
        {
            int atual=fila.top().second;
            fila.pop();
            if(!pros[atual])
            {
                davez=atual;
                break;
            }
        }

        if(davez==-1)break;

        pros[davez]=1;

        for(int i=0;i<vizinhos[davez].size();i++)
        {
            //vizinhos[davez][i]

            if(dp[vizinhos[davez][i].second] > dp[davez] + vizinhos[davez][i].first )
            {
                dp[vizinhos[davez][i].second]=dp[davez] + vizinhos[davez][i].first;

                fila.push(vizinhos[davez][i]);
                //fila.push( make_pair( dp[vizinhos[davez][i].second],  vizinhos[davez][i].second)  );
            }

        }




    }


}


int main()
{
    cin>>n>>a>>b;
    for(int i=1;i<n;i++)
    {
        int p,q,d;
        cin>>p>>q>>d;
        vizinhos[p].push_back(make_pair(d,q));
        vizinhos[q].push_back(make_pair(d,p));
    }
    for(int i=0;i<MAX;i++) dp[i]=INF;
    dp[a]=0;

    dj(a);

    cout<< dp[b];


    return 0;
}
