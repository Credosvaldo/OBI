#include<bits/stdc++.h>
using namespace std;


int n;
int v[1000];
int dp[1000][1000];


bool troco(int valor,int moedas)
{

    if(valor<0 || moedas>9)
        return 0;
    if(valor==0)
        return 1;

    if(dp[valor][moedas]>-1)
    {
        return dp[valor][moedas];
    }


    for(int i=0;i<n;i++)
    {
        if(troco(valor-v[i],moedas+1))
        {
            return dp[valor-v[i]][moedas+1]=1;
        }


    }
    return dp[valor][moedas]=0;


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

    if(troco(m,0))
    {
        cout<< 'S';
    }
    else
        cout<< 'N';

    return 0;
}
