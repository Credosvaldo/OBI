#include<bits/stdc++.h>
using namespace std;


int n;
int v[1000];
int dp[1000];


bool troco(int valor)
{

    if(valor<0)
        return 0;
    if(valor==0)
        return 1;

    if(dp[valor]>-1)
    {
        return dp[valor];
    }


    for(int i=0;i<n;i++)
    {
        if(troco(valor-v[i]))
        {
            return dp[valor-v[i]]=1;
        }


    }
    return dp[valor]=0;


}




int main()
{
    int m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>> v[i];
    }

    memset(dp,-1,sizeof(dp));

    if(troco(m))
    {
        cout<< 'S';
    }
    else
        cout<< 'N';

    return 0;
}
