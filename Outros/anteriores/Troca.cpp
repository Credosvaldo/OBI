#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,T,p,q,aux;
    cin>>N>>T;
    int v[N][2];
    for(int i=0;i<N;i++)
    {
        cin>>v[i][0];
    }
    for(int i=0;i<N;i++)
    {
        cin>>v[i][1];
    }

    for(int i=0;i<T;i++)
    {
        cin>>p>>q;
        for(int j=0;j<N;j++)
        {
            if(j+1>=p && j+1<=q)
            {
                aux=v[j][0];
                v[j][0]=v[j][1];
                v[j][1]=aux;
            }
        }
    }

    for(int i=0;i<N;i++)
    {
        cout<<v[i][0]<< " ";
    }


    return 0;
}






