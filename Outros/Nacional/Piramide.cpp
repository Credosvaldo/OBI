#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int n;
int m[MAX][MAX];
int dp[MAX][MAX];

int piramide(int l,int c)
{
    if(dp[l][c]>0)
        return dp[l][c];
    if(l==0)
        return dp[l][c]=m[l][c];


    int soma=0;

    for(int i=c;i<=c+l;i++)
        soma+=m[l][i];


    return dp[l][c] = soma + min(piramide(l-1,c),piramide(l-1,c+1));



}


int main()
{
    cin>>n;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>m[i][j];

    memset(dp,0,sizeof(dp));

    cout<< piramide(n-1,0);


    return 0;
}
