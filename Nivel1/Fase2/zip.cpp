#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a==b)
    {
        a=2*(a+b);
    }
    else if(a+1==b || b+1==a)
    {
        a=3*(a+b);
    }
    else
    {
        a+=b;
    }


    if(c==d)
    {
        c=2*(c+d);
    }
    else if(c+1==d || d+1==c)
    {
        c=3* (c+d);
    }
    else
    {
        c+=d;
    }




    if(a>c)
    {
        cout<< "Lia";
    }
    else if(a<c)
    {
        cout<< "Carolina";
    }
    else
    {
        cout<< "empate";
    }


    return 0;
}
