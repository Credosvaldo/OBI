#include<bits/stdc++.h>
using namespace std;

int n,resp=0;
int dp[1000][1000];
char m[1000][1000];


int setas(int l,int c)
{
    if(l>n-1 || c>n-1 || l<0 || c<0)
        return 0;
    if(dp[l][c]==0 || dp[l][c]==1)
    {
        //resp += dp[l][c];
        return dp[l][c];
    }

    if(dp[l][c]==2)
    {
        //resp++;
        return dp[l][c]=1;
    }



    dp[l][c]=2;



    switch(m[l][c])
    {
        case 'A' :
            dp[l][c]=setas(l-1,c);
            break;
        case '>' :
             dp[l][c]=setas(l,c+1);
            break;
        case '<' :
            dp[l][c]=setas(l,c-1);
            break;
        case 'V' :
             dp[l][c]=setas(l+1,c);
            break;

    }

    resp+=dp[l][c];
    //cout<< "nas posicoes "<< l << " e " << c<< " \no valor de resp é: "<< resp<< "\n";
    return dp[l][c];



}



int main()
{
    cin>>n;

    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>> m[i][j];



    memset(dp, -1, sizeof(dp) );

    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    if(dp[i][j]==-1) setas(i,j);


    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<< dp[i][j]<< " ";
        cout<< "\n";
    }
*/




    cout<< resp;



    return 0;
}
