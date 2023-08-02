#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    if(m>n)
        swap(n,m);

    if(m>=3)
    {
        cout<< (m*n+1)/2;
    }
    else if(m==2)
    {
        if(n%4==0)
        {
            cout<< n;
        }
        else if(n%2==0)
        {
            cout<< n+2;
        }
        else
        {
            cout<< n+1;
        }

    }
    else
    {
        cout<< n;
    }



    return 0;
}
