#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,resp=0;
    cin>>N;
    while(N>=100)
    {
        resp++;
        N-=100;
    }
    while(N>=50)
    {
        resp++;
        N-=50;
    }
    while(N>=25)
    {
        resp++;
        N-=25;
    }
    while(N>=10)
    {
        resp++;
        N-=10;
    }
    while(N>=5)
    {
        resp++;
        N-=5;
    }
    while(N>=1)
    {
        resp++;
        N-=1;
    }

cout << resp;

    return 0;
}
