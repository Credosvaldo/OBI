#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>> N;
    int resp = N+1;

    for(int i =0;i<N; i++)
    {
        resp += N-i;
    }

    cout<< resp;

    return 0;
}
