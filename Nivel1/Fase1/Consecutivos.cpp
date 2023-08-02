#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,resp=1,aux=0;
    cin>>N;
    int v[N];
    for(int i =0;i<N;i++)
        cin>>v[i];

    for(int i=1;i<N;i++)
    {
        if(v[i-1]==v[i])
        {
            resp++;
        }
        else
        {
            aux= max(resp,aux);
            resp =1;
        }
    }
    aux= max(resp,aux);
    cout<<aux;

    return 0;
}
