#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int P1,P2,C1,C2;
    cin>> P1>>P2>>C1>>C2;
    if ((P1*P2)==(C1*C2))
    {
        cout<< "0";
    }
    else
        cout << "1";
    return 0;
}
