#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,N,x=0;
    cin>>A>>N;

    while(1)
    {
        x++;
        if( ((A-x)/N)*2 == x )
        {
            cout<<x;
            return 0;
        }

    }


    return 0;
}
