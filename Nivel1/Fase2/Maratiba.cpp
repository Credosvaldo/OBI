#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int v[n];
    for(int i=0;i<n;i++)
        cin>>v[i];

    int pos=0;

    for(int i=0;i<n;i++)
    {
        if(pos>=v[i])
            pos+=m;
    }
    if(pos>=42195) cout<<'S';else cout<<'N';



    return 0;
}
