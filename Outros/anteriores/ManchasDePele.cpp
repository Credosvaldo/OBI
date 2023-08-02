#include<bits/stdc++.h>
using namespace std;

int n,m,v[1000][1000],resp=2;

void Manchas(int l,int c)
{
    if(l<0 || l>n-1 || c<0 || c>m-1)
        return;
    if(v[l][c]!=1)
        return;

    v[l][c]=resp;

    if(v[l+1][c]==1)
        Manchas(l+1,c);
    if(v[l-1][c]==1)
        Manchas(l-1,c);
    if(v[l][c+1]==1)
        Manchas(l,c+1);
    if(v[l][c-1]==1)
        Manchas(l,c-1);

    return;

}


int main()
{
    cin>>n>>m;

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>> v[i][j];



    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    if(v[i][j]==1)
    {
        Manchas(i,j);
        resp++;
    }


    cout<< resp-2;

    return 0;
}
