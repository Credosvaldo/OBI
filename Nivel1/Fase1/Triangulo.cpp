#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;

    cin>> a>>b>>c>>d;

    if(a+b>c && a+c>b && b+c>a && a-b<c && a-c<b && b-c<a || d+b>c && d+c>b && b+c>d && d-b<c && d-c<b && b-c<d || d+a>c && d+c>a && a+c>d && d-a<c && d-c<a && a-c<d || d+a>b && d+b>a && a+b>d && d-a<b && d-b<a && a-b<d)
    {
        cout<< "S";
    }
    else
    {
        cout<< "N";
    }



    return 0;
}
