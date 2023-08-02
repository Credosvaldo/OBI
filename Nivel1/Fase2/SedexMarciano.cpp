#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a<b)
    {
        swap(a,b);
    }
    if(c>b)
        swap(c,b);

    d*=2;

    if(a*a+b*b <= d*d)
    {
        cout<< "S";
    }
    else
    {
        cout<< "N";
    }



    return 0;
}
