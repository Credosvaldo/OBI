#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,P,a,b,resp=0;
    cin>>N>>P;

    for(int i=0;i<N;i++)
    {
        cin>>a>>b;
        if(a+b>=P)
            resp++;
    }

    cout<< resp;
    return 0;
}
