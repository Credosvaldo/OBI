#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,p,f,d;
    cin>>h>>p>>f>>d;

    for(int i=f;i!=h;i+=d)
    {
        if(i==16)i=0;
        if(i<0)i=15;


        if(i==p)
        {
            cout<< "N";
            return 0;
        }
        if(i==h)
        {
            cout<< "S";
            return 0;
        }

    }
    cout<< "S";


    return 0;
}
