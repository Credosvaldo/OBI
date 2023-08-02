#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,M,j=0;
    cin>>N>>M;
    int v[N+1], r[10] = {0};

    for(int i=1;i<=N;i++)
        cin>>v[i];

    while(M-- > 0)
    {
        cin>>N;

        if(j<N)
        {

        }
        else if(j>N)
        {

        }
        while(j<N)
            r[v[++j;]]++;


        while(j>N)
            r[v[--j]]++;
    }


   for(int i =0;i<10;i++)
        cout<<r[i]<< " ";



    return 0;
}
