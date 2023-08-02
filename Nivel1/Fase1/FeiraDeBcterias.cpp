#include<bits/stdc++.h>
using namespace std;

int main()
{






    long double n,resp=0,aux=0;
    cin>> n;

    for(int i=0;i<n;i++)
    {
        long double d,c;
        cin>>d>>c;

        if(c* log(d)>aux)
        {
            resp=i;
            aux = c*log(d);
        }

    }

    cout <<resp;





    return 0;
}
