#include<bits/stdc++.h>
using namespace std;

int n,m,v[1000][1000];
bool dp[1000][1000];



int saci(int l,int c)
{
    //cout<< l << " "<<c<<"\n";
    if(v[l][c]==2)
        return 1;

    dp[l][c]=true;

    if(v[l-1][c]>0 && !dp[l-1][c])
    {
        if( l-1<n && l-1>-1 && c<m && c>-1)
        {
            //cout<<"\nValor de l: "<<l<<"\n";
            return 1 + saci(l-1,c);
        }

    }
    if(v[l][c+1]>0 && !dp[l][c+1])
    {
        if( l<n && l>-1 && c+1<m && c+1>-1)
            return 1 + saci(l,c+1);
    }
    if(v[l+1][c]>0 && !dp[l+1][c])
    {
        if( l+1<n && l+1>-1 && c<m && c>-1)
            return 1 + saci(l+1,c);
    }
    if(v[l][c-1]>0 && !dp[l][c-1])
    {
        if( l<n && l>-1 && c-1<m && c-1>-1)
            return 1 + saci(l,c-1);
    }


}



int main()
{
    int pi,pj;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>> v[i][j];

            if(v[i][j]==3)
            {
                pi=i;pj=j;
            }

        }

    }

    memset(dp,0,sizeof(dp));

    cout<< saci(pi,pj);

    return 0;
}
