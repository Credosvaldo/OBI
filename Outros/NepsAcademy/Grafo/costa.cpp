#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,resp=0;
    cin>>m>>n;
    char v[m][n];

    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
        cin>>v[i][j];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i][j]== '#' )
            {
                if(v[i+1][j]== '.' || v[i-1][j] == '.' || v[i][j+1] == '.' || v[i][j-1] == '.' || i+1>=m || i-1<0 || j+1>=n || j-1<0)
                {
                    resp++;
                }

            }


        }
    }

cout<<resp;

    return 0;
}
