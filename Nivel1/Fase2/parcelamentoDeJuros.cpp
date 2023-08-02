#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v,p;
    cin>>v>>p;

    int aux=v%p;
    int aux2 = (v-aux)/p;

    for(int i=0;i<p;i++)
    {
        if(i<aux) cout<< aux2+1;else cout<< aux2;cout<< "\n";
    }



    return 0;
}
