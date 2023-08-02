#include<bits/stdc++.h>
#define MAX 100
#define INF 1000000000
using namespace std;

int dp[MAX][MAX];

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<MAX;i++)
        for(int j=0;j<MAX;j++)
            dp[i][j]=INF;





    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        dp[a][b]=c;
        dp[b][a]=c;

    }




    for(int k=0;k<n;k++)
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        dp[i][j]=min(dp[i][j],dp[k][i]+dp[k][j]);


 /*   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) cout<< dp[i][j]<< " ";cout<< "\n";
    }

*/
    int resp=INF;

    for(int i=0;i<n;i++)
    {
        int maior=0;


        for(int j=0;j<n;j++)
            maior=max(maior,dp[i][j]);



        resp=min(resp,maior);


    }
    cout<< resp;


    return 0;
}
