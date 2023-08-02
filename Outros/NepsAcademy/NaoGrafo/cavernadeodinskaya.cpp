#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int v[n];
    for(int i=0;i<n;i++)
        cin>>v[i];

    if(v[0]>m-v[0])
        v[0]=m-v[0];

    for(int i=1;i<n;i++)
    {
        if(v[i]<m-v[i])
        {
            if(v[i]<v[i-1])
            {
                v[i]=m-v[i];
                if(v[i]<v[i-1])
                {
                    cout<<-1;
                    return 0;
                }
            }
        }
        else
        {
            v[i]=m-v[i];

            if(v[i]<v[i-1])
            {
                v[i]=m-v[i];
                if(v[i]<v[i-1])
                {
                    cout<<-1;
                    return 0;
                }
            }

        }

    }

    long long int resp=0;
    for(int i=0;i<n;i++)
        resp+=v[i];

    cout<<resp;

    return 0;
}
