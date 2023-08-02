#include<bits/stdc++.h>
using namespace std;


int n;
char m[500][500],f;
bool dp[500][500];


void erupcao(int l,int c)
{
    if(l>n-1 || l<0 || c>n-1 ||c<0 || dp[l][c])
        return;
    dp[l][c]=true;

    if(m[l][c]<=f)
    {
        m[l][c] = '*';
        erupcao(l+1,c);
        erupcao(l-1,c);
        erupcao(l,c+1);
        erupcao(l,c-1);
    }


    return;
}


int main()
{
    cin>>n>>f;

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
            cin>>m[i][j];
    }

    erupcao(0,0);
    cout<< "\n";

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
            cout<<m[i][j];
        cout<< "\n";
    }


    return 0;
}
