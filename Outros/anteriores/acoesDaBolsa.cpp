/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,aux=0;
    cin>>N;
    int v[N];
    for(int i=0;i<N;i++)
        cin>>v[i];

    aux=v[0]+v[1]+v[2]+v[3];


    for(int i =1;i<N-3;i++)
    {
        if(v[i]+v[i+1]+v[i+2]+v[i+3]>aux)
            aux=v[i]+v[i+1]+v[i+2]+v[i+3];
    }

    cout<< aux;

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,T,v[N][2],p,q,aux;
    cin>>N>>T;
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
        cout<<v[i][0];
    }


    return 0;
}
