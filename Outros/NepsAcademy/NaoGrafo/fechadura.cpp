#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,resp=0;
    cin>>n>>m;
    int v[n];
    for(int i=0;i<n;i++)
        cin>>v[i];

    for(int i=0;i<n-1;i++)
    {
        while(v[i] < m)
        {
            v[i]++;
            v[i+1]++;
            resp++;
        }
        while(v[i]>m)
        {
            v[i]--;
            v[i+1]--;
            resp++;
        }

    }

    cout<<resp;

    return 0;
}
