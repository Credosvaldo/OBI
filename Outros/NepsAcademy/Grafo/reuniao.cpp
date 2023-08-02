#include<bits/stdc++.h>
#define INF 100000
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int dp[105][105];
    for(int i=0;i<105;i++)
    {
        for(int j=0;j<105;j++)
        dp[i][j]=INF;
        dp[i][i]=0;
    }
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        dp[a][b]=c;
        dp[b][a]=c;
    }


    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                dp[i][j]=min(dp[i][j], dp[k][i] + dp[j][k]);
            }
        }
    }

    int resp=INF,aux=0;

    for(int i=0;i<n;i++)
    {

        aux=0;
        for(int j=0;j<n;j++)
        {
            if(aux<dp[i][j] && dp[i][j]!=INF)
            aux=dp[i][j];
        }
        resp = min(aux,resp);


    }

    cout<< resp;




    return 0;
}
