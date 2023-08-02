#include<bits/stdc++.h>
#include<vector>
#define MAX 505
using namespace std;

int n;
char m[MAX][MAX];
int dp[MAX][MAX];

bool dp2[MAX][MAX];

int setas(int l,int c)
{
    if(l<0||l>=n||c<0||c>=n)
        return -100;
    if(dp[l][c] != 0)
        return dp[l][c];


    dp[l][c]=1;


    if(m[l][c]=='>')
        return dp[l][c]=setas(l,c+1);
    if(m[l][c]=='<')
        return dp[l][c]=setas(l,c-1);
    if(m[l][c]=='V')
        return dp[l][c]=setas(l+1,c);
    return dp[l][c]=setas(l-1,c);

}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>m[i][j];


    memset(dp,0,sizeof(dp));


    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(dp[i][j]==0)
                setas(i,j);

    int resp=0;


    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    if(dp[i][j]==1) resp++;

    cout<<resp;


    return 0;
}
