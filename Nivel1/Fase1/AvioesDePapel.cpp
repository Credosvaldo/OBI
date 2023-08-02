#include<bits/stdc++.h>
using namespace std;

int main()
{
    int C,F,P;
    cin>> C>> F>>P;

    if(C*P<=F)
    {
        cout<< 'S';
    }
    else cout<< 'N';

    return 0;
}
