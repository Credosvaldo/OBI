#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int P,R;
    cin>>P>>R;
    if (P==0&&R==0)
    {
        cout<< "C";
    }
    if (P==0&&R==1)
    {
        cout<< "C";
    }
    if(P==1&&R==0)
    {
        cout<< "B";
    }
    if(P==1&&R==1)
    {
        cout<< "A";
    }






    return 0;
}
