#include<bits/stdc++.h>
using namespace std;

int n,m;
int resp =0;
bool v[1001][1001],dp[1001];

void gincana(int p)
{
    if(dp[p])
        return;

    dp[p]=1;

    for(int i=1;i<=n;i++)
    {
       if(v[p][i])
       {
           gincana(i);
       }
    }

    return;


}

int main()
{
    cin>>n>>m;

    memset(v,0,sizeof(v));
    memset(dp,0,sizeof(dp));

    for(int i=0;i<m;i++)
    {
        int aux1,aux2;
        cin>>aux1>>aux2;

        v[aux1][aux2]=1;
        v[aux2][aux1]=1;


    }


    for(int i=1;i<=n;i++)
    {
        if(!dp[i])
        {
            gincana(i);
            resp++;
        }

    }


    cout<<resp;

    return 0;
}
