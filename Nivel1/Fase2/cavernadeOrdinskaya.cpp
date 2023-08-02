#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int v[n+5];

    for(long long int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    v[0]=min(v[0],m-v[0]);


long long int resp=0;

    for(long long int i=1;i<n;i++)
    {
        v[i]=min(v[i],m-v[i]);
        if(v[i]<v[i-1])
        {
            v[i]=max(v[i],m-v[i]);
            if(v[i]<v[i-1])
            {
                cout<< -1;
                return 0;
            }
        }
        resp+=v[i];

    }
    cout<< resp+v[0];




    return 0;
}
