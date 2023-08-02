#include<bits/stdc++.h>
using namespace std;

int v[1000],s[1000];
int dp[1000][1000];


int ics(int i,int j)
{
    if(dp[i][j]>-1)
    {
        return dp[i][j];
    }
    if(i==0 || j==0)
    {
        return dp[i][j]=0;
    }


    if(v[i]==s[j])
    {
        return dp[i][j]=1+ics(i-1,j-1);
    }
    return dp[i][j]= max(ics(i-1,j),ics(i,j-1));


}


int main()
{
    int n,m;
    cin>>n>>m;

    for (int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for (int i=0;i<m;i++)
    {
        cin>>s[i];
    }


    memset(dp,-1,sizeof(dp));

    cout<< n-ics(n-1,m-1) << " " <<m-ics(n-1,m-1);

    return 0;
}
