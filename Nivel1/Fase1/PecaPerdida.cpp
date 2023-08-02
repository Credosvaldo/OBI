#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,aux;
    cin>>N;
    int v[N+1] = {0};
    v[0]=-1;

    for(int i=1; i<N; i++)
    {
        cin>>aux;
        v[aux]=1;
    }


    for(int i=1; i<=N; i++)
    {
        if(v[i]==0)
        {
            cout<<i;
            break;
        }
    }


    return 0;
}
