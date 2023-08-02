#include<bits/stdc++.h>
#define MAX 501
using namespace std;

char c[MAX][MAX];
bool pos[MAX][MAX];
int n,m;


void molhado(int i,int j)
{
    if(i==n-1 || j>=m || j<0)
        return;

    if(pos[i][j])
        return;

    pos[i][j]=1;

    c[i][j]='o';

    if(c[i+1][j] == '.')
    {
        molhado(i+1,j);
    }
    else if(c[i+1][j] == '#')
    {
        molhado(i,j+1);
        molhado(i,j-1);
    }


    return;
}


int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>> c[i][j];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(c[i][j]=='o')
            {
                molhado(i,j);
                break;
            }

        }

    }

    for(int i=0;i<n;i++)
    {
        cout<<"\n";
        for(int j=0;j<m;j++)
        {
            cout<< c[i][j];
        }

    }


    return 0;
}
