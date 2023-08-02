#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin>> N;
    int P;
    char C;
    int  Q;
    cin >> P>>C>>Q;
    if (C=='+')
    {
        if ((P+Q)>N)
            cout<< "OVERFLOW";
            else
            cout<< "OK";
    }
    else
        if ((P*Q)>N)
        cout<< "OVERFLOW";
            else
            cout<< "OK";

    return 0;
}
