#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,d,e;
    cin>>a>>d>>e;


    int i=0;
    int resp=0;

    while(resp<a)
    {
        i++;
        resp+=d;
        if(resp>=a)
            break;
        resp-=e;
    }

    cout<<i;



    return 0;
}
