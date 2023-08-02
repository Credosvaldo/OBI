#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,P,Q;
    char c;
    cin>>N>>P>>c>>Q;
    if(c == '+')
    {
        if(P+Q>N)
        {
            cout<< "OVERFLOW";
        }
        else
        {
            cout<< "OK";
        }
    }
    else
    {
        if(P*Q>N)
        {
            cout<< "OVERFLOW";
        }
        else
        {
            cout<< "OK";
        }
    }




    return 0;
}
