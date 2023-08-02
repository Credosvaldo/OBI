#include<bits/stdc++.h>
#define MAX 10005
#define MOD 1000000007
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    long long int v[MAX];
    long long int d[MAX];

    v[0]=1;

    for(int i=1;i<=n;i++)
    {
        //cout<< v[i-1]<< "\n";
        v[i]=(v[i-1]*2)%MOD;///tira o mod
    }

    //system("pause");

    for(int i=0;i<=n;i++)
    {
        if(i<k)
        {
            d[i]=v[i];
        }
        else if(i==k)
        {
            d[i]=v[i]-1;
        }
        else
        {
            d[i]=0;
            for(int j=1;j<=k;j++)
                d[i]=(d[i]+d[i-j])%MOD;

        }

    }
/*
    for(int i=0;i<=n;i++)
        cout<< v[i]<< " ";cout<< "\n\n";
    for(int i=0;i<=n;i++)
        cout<< d[i]<< " ";

*/
    cout<< d[n];


    return 0;
}
