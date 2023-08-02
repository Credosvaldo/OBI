#include<bits/stdc++.h>
using namespace std;

int main()
{
    int B,T;
    cin>>B>>T;
    int r = min(B,T)*70 + ((max(B,T) - min(B,T)) * 70/2);

    if(r==5600)
    {
        cout<<0;
    }
    else if(r>5600)
    {
        cout<< 1;
    }
    else
    {
        cout<< 2;
    }

    return 0;
}
