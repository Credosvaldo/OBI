#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float A,B,C;
    char D;
    bool um=1;

    cin>> A>>D>>B;

        if (D=='+')
        {
            cout<<A+B;
            C=A+B;
        }
        else if (D=='-')
        {
            cout<<A-B;
            C=A-B;
        }
        else if (D=='/')
        {
            cout<<A/B;
            C=A/B;
        }
        else if (D=='*'|| D== 'x'|| D== 'X')
        {
            cout<<A*B;
            C=A*B;
        }


    while (um==1)
    {
        cin>>D>>B;

        if (D=='+')
        {
            cout<<C+B;
            C=C+B;
        }
        else if (D=='-')
        {
            cout<<C-B;
            C=C-B;
        }
        else if (D=='/')
        {
            cout<<C/B;
            C=C/B;
        }
        else if (D=='*'|| D== 'x'|| D== 'X')
        {
            cout<<C*B;
            C=C*B;
        }

    }






    return 0;
}
