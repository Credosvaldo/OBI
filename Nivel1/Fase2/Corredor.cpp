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

    int maior=0,resp=0;
    for(int i=0;i<n;i++)
    {
        maior=max(0,maior+v[i]);
        resp=max(resp,maior);
    }

    cout<< resp;

    return 0;
}
