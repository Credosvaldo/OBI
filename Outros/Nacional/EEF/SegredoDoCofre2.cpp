#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

int v[MAX];
int soma[MAX];

int main()
{
    int n,m;
    int resp[10];
    cin>>n>>m;

    memset(resp,0,sizeof(resp));
    memset(soma,0,sizeof(soma));

    for(int i=1;i<=n;i++)
        cin>>v[i];


    int aux;
    cin>>aux;
    int pos=aux;
    m--;

    while(m>0)
    {
        m--;

        cin>>aux;


        if(pos<aux)
        {
            soma[pos+1]++;
            soma[aux+1]--;

        }
        else
        {
            soma[aux-1]++;
            soma[pos-1]--;

        }



    }


    for(int i=1;i<=n;i++)
        soma[i]+=soma[i-1];


    for(int i =1;i<=n;i++)
        cout<< soma[i]<< " ";

    system("pause");
    cout<< "\n\n\n";


    for(int i=1;i<=n;i++)
    {
        resp[v[i]]+=soma[i];
    }





    for(int i=0;i<10;i++)
        cout<< resp[i]<< " ";


    return 0;
}
