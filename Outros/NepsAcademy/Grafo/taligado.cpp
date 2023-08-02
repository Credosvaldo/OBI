#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;
    bool v[n][n];

    memset(v,0,sizeof(v));

    for(int i=0;i<m;i++)
    {
        int a,b,t;
        cin>> t>>a>>b;
        a--;b--;

        if(t==1)
        {
            v[a][b]=v[b][a]=1;
        }
        else
        {
            if(v[a][b])
            {
                cout<<1<<"\n";
            }
            else
            cout<<0<< "\n";

        }

    }





    return 0;
}
