#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,a,b,c,d,resp=0;
    cin>>N;

    for(int i=0;i<N;i++)
    {
        cin>>a>>b>>c>>d;
        a-=c;
        a*=a;
        b-=d;
        b*=b;
        resp+= a+b;
    }

    cout<<resp;

    return 0;
}
