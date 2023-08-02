#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int A;
    int B;
    int C;
    cin>>A;
    cin>>B;
    cin>>C;
    if (A==B)
        cout<< C;
    if (A==C)
        cout<< B;
    if (C==B)
        cout<< A;
    return 0;
}
