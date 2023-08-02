#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int v[k], aux;

    memset(v,0,sizeof(v));



    for(int i=0;i<n;i++)
    {
        cin>>aux;
        v[aux-1]++;

    }

    int resp=1001;

    for(int i=0;i<k;i++)
    {
        resp = min(resp,v[i]);
    }

    cout<< resp;


    return 0;
}



