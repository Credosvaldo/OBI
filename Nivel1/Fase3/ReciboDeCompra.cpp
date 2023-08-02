#include<bits/stdc++.h>
using namespace std;

int r,k;
int dp[105][105][105];

int recibo(int ind,int x,int n)
{
    if(n==0)
    {
        if(x==0) return 1;
        return 0;
    }
    if(x<0) return 0;
    if(dp[ind][x][n]>-1)
        return dp[ind][x][n];

    int resp=0;

    for(int i=ind;i<=r;i++)
    {
        resp+=recibo(i+1,x-i,n-1);
    }

    return dp[ind][x][n]=resp;

}

int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>r>>k;

    cout<< recibo(1,r,k);

    return 0;
}
