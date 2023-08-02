#include<bits/stdc++.h>
using namespace std;

int main()
{
    float N,D,V,N2,D2,V2;
    cin>>N>>D>>V>>N2>>D2>>V2;

    if(D/V < D2/V2)
    {
        cout << N;
    }
    else
        cout << N2;




    return 0;
}
