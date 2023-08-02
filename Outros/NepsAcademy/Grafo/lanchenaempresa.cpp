#include<bits/stdc++.h>
#define INF 1000000000
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int dp[255][255];

    for(int i=1;i<255;i++)
    {
        for(int j=1;j<255;j++)
        {
            dp[i][j]=INF;
        }
        dp[i][i]=0;
    }
    for(int i=1;i<=m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        dp[a][b]=c;
        dp[b][a]=c;
    }
    for(int k=1;k<=n;k++)
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
        dp[i][j]= min(dp[i][j],dp[i][k]+dp[k][j]);

    int resp=INF;
    for(int i=1;i<=n;i++)
    {
        int aux=0;
        for(int j=1;j<=n;j++)
        {
            if(dp[i][j]>aux && dp[i][j]!=INF)
                aux=dp[i][j];
        }
        resp = min(resp,aux);
    }


    cout<<resp;


    return 0;
}
