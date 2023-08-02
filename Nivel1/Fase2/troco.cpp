#include<bits/stdc++.h>
using namespace std;

int valor,moedas;
int v[1005];
int dp[1005][100005];

bool troco(int ind,int x)
{
    if(x==0) return 1;
    if(x<0) return 0;
    if(dp[ind][x]>-1) return dp[ind][x];

    for(int i=ind;i<moedas;i++)
    {
        if(troco(i+1,x-v[i]))
        {
            return dp[i+1][x-v[i]] = 1;
        }
    }
    return dp[ind][x] = 0;


}


int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>valor>>moedas;
    for(int i=0;i<moedas;i++)
        cin>>v[i];

    if( troco(0,valor))cout<< "S";else cout<< "N";

    return 0;
}
