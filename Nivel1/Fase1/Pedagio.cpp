#include<bits/stdc++.h>
using namespace std;

int main()
{
    double L,D,K,P,resp;
    cin>>L>>D>>K>>P;

    resp= K*L + floor(L/D)*P;
    cout.precision(0);
    cout<< fixed <<resp;

/*
10000 1
10000 10000
*/

    return 0;
}
