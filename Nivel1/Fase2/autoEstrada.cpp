#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,resp=0;
    cin>>n;
    char v[n];
    for(int i=0;i<n;i++)
        cin>>v[i];

    for(int i=0;i<n;i++)
    {
        if(v[i]=='P'||v[i]=='C')
        {
            resp+=2;
        }
        else if(v[i]=='A')
        {   resp++;

        }
    }

    cout<< resp;


    return 0;
}
