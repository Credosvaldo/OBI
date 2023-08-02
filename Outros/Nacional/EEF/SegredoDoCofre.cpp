#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

int v[MAX];

int main()
{
    int n,m;
    int resp[10];
    cin>>n>>m;

    memset(resp,0,sizeof(resp));

    for(int i=1;i<=n;i++)
        cin>>v[i];


    int aux;
    cin>>aux;
    int pos=1;
    m--;
    resp[v[1]]++;


    while(m>0)
    {
        m--;

        cin>>aux;

        while(pos>aux)
        {
            pos--;
            resp[v[pos]]++;
        }

        while(pos<aux)
        {
            pos++;
            resp[v[pos]]++;
        }

    }


    for(int i=0;i<10;i++)
        cout<< resp[i]<< " ";


    return 0;
}
