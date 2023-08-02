#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n;
    unsigned long long a;
    cin>>n;

    a=sqrt(n);
    for(int i=2;i<;i++)
    {
        if(n%i==0)
        {
            cout<< "S";
            return 0;
        }
    }


    cout<< "N";

    return 0;
}
