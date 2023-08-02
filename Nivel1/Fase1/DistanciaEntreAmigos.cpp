#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
        cin>>v[i];

    int resp=0,melhor=0;

    for(int i=0;i<n;i++)
    {
        resp= max(resp,v[i]-i);
        melhor=max(melhor,v[i]+i);


    }

    cout<<resp+melhor;

    return 0;
}
