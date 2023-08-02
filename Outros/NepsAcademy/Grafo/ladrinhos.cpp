#include<bits/stdc++.h>
using namespace std;

int h,lar,m[200][200],aux;
bool dp[200][200];


int la(int l,int c)
{
    if(dp[l][c] || l>h-1 || l<0 || c>lar-1 || c<0 || m[l][c]!=aux)
        return 0;
    dp[l][c]=1;
    return 1+ la(l+1,c) + la(l-1,c) + la(l,c+1) + la(l,c-1);




}

int main()
{
    cin>>h>>lar;

    for(int i=0;i<h;i++)
    {
        for(int j=0;j<lar;j++)
        {
            cin>>m[i][j];
        }

    }

    memset(dp,0,sizeof(dp));

    int resp=40001;

    for(int i=0;i<h;i++)
    {
        for(int j=0;j<lar;j++)
        {
            if(!dp[i][j])
            {
                aux=m[i][j];
                resp= min(resp,la(i,j));
            }
        }

    }

    cout << resp;

    return 0;
}
