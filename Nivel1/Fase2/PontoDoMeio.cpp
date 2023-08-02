#include<bits/stdc++.h>
using namespace std;

int main()
{
    long double n,resp=2;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        resp+=resp-1;
    }

    cout<< fixed<< setprecision(0)<< resp*resp;

    return 0;
}
