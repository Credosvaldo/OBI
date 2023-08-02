#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,resp = 1,aux=0;
    cin>>N;
    int v[N];

    for(int i =0;i<N;i++)
        cin>>v[i];


    if(N > 2)
    {
        aux =v[1]-v[0];
        for(int i=1;i<N;i++)
        {
            if(v[i]-v[i-1] != aux)
            {

                resp++;
                i++;
                aux =v[i]-v[i-1];

            }

        }
    }


    cout<< resp;


    return 0;
}
