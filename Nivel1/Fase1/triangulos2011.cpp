#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,aux;
    cin>>a>>b>>c;

    if(b>a)
    {
        aux=a;
        a=b;
        b=aux;
    }
    if(c>a)
    {
        aux=a;
        a=c;
        c=aux;
    }

    if(a<b+c)
    {
        if(b*b + c*c == a*a)
        {
            cout<< "r";
        }
        else if(b*b + c*c < a*a)
        {
            cout<< "o";
        }
        else if(b*b + c*c > a*a)
        {
            cout<< "a";
        }
    }
    else cout<< "n";



    return 0;
}
