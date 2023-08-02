#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;

    if(N <=10)
    {
        cout<< 7;
    }
    else if(N<=30)
    {
        cout<< 7 + N-10;
    }
    else if(N<=100)
    {
        cout<< 27 + (N-30) * 2;
    }
    else
    {
        cout<< 167 + (N-100)*5;
    }


    return 0;
}
