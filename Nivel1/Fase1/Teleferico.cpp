#include<bits/stdc++.h>
using namespace std;

int A,C,resp=1;

int Resp(int a)
{
    a++;
    if(a-C <= 0 )
    {
        return resp;
    }
    else
    {
        resp++;
        Resp(a-C);
    }
}

int main()
{

    cin>>C>>A;

    cout<< Resp(A);


    return 0;
}
