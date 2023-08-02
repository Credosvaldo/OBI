#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int T1;
    int T2;
    int T3;
    int aux=0,aux2=0,aux3=0;

    cin>>T1>>T2>>T3;
    if (T1<T2&&T1<T3)
    {
        aux=1;
        if (T2<T3)
        {
            aux2=2;
            aux3=3;
        }
        else
        {
            aux3=2;
            aux2=3;
        }
    }
    else if (T2<T1&&T2<T3)
    {
        aux=2;
        if (T1<T3)
        {
            aux2=1;
            aux3=3;
        }
        else
        {
            aux3=1;
            aux2=3;
        }
    }
    else
    {
        aux=3;
        if (T2<T1)
        {
            aux2=2;
            aux3=1;
        }
        else
        {
            aux3=2;
            aux2=1;
        }
    }
    cout<< aux<<endl  <<aux2<<endl  <<aux3<<endl  ;




    return 0;
}
