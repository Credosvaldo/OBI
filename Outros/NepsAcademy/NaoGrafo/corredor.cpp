#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[n];

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int melhor =0,resp=0;

    for(int i=0;i<n;i++)
    {
        melhor=max(0,melhor+v[i]);
        resp=max(resp,melhor);

    }

    cout<<resp;


    return 0;
}
