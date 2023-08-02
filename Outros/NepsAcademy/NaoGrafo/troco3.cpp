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

    int resp=0;

    for(int i=0;i<1000;i++)
    {
        if(dp[i]>-1) resp++;
    }

    cout<< resp;




    return 0;
}

























/*#include<bits/stdc++.h>
using namespace std;

int n,m;
int v[1000],dp[1000][1000];

int troco(int i,int j)
{
    if(i+j>=m)
    {
        return 0;
    }
    if(dp[i][j]>-1)
    {
        return dp[i][j];
    }


    for(int i=0;i<n;i++)
    {

    }



}

int main()
{
    cin>>n>>m;

    for (int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    memset(dp,-1,sizeof(dp));

    cout<<troco(0,v[0]);

    return 0;
}*/
