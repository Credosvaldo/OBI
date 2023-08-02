#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<queue>
#define MAX 1005
#define INF 1000000000
using namespace std;

int n;
vector<int>vizinhos[MAX];
map<string,int>mapa;
int dp[MAX];
bool pros[MAX];


void dj(int x)
{
    dp[x]=0;
    cout<< "valor de x: "<<x<< "\n\n";
    queue<int>fila;

    fila.push(x);

    while(true)
    {
        int davez=-1;

        while(!fila.empty())
        {
            int atual;
            atual=fila.front();
            fila.pop();

            if(!pros[atual])
            {
                davez=atual;
                pros[davez]=1;
                break;
            }

        }

        if(davez==-1) break;

        for(int i=0;i<vizinhos[davez].size();i++)
        {
            if(dp[vizinhos[davez][i]]>dp[davez]+1)
            {
                dp[vizinhos[davez][i]]=dp[davez]+1;
                fila.push(vizinhos[davez][i]);
            }

        }

        cout<< fila.front()<< "\n";


    }



}


int main()
{
    cin>>n;
    vector<pair<string,string> >v;

    int aux=0;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        if(mapa.find(a)==mapa.end())
        {
            cout<< "valor de a: "<<a<< "\n\n";
            mapa.insert(make_pair(a,aux));
            aux++;
        }
        if(mapa.find(b)==mapa.end())
        {
            cout<< "valor de b: "<<b<< "\n\n";
            mapa.insert(make_pair(b,aux));
            aux++;
        }
        vizinhos[mapa[a]].push_back(mapa[b]);

    }


    cout<< "ne possive ta errado: " <<mapa["Pink_Floyd"]<< "\n";





    for(int i=0;i<MAX;i++)
            dp[i]=INF;


    string a,b;
    cin>>a>>b;


    dj(mapa[a]);

    cout<< dp[mapa[b]];

    cout<< "\n\n";

    for(int i=0;i<mapa.size();i++)
cout<< dp[i]<< " ";

cout<< "\n\n";


    for(int i=0;i<mapa.size();i++)
    {
        cout<< i<< ": ";
        for(int j=0;j<vizinhos[i].size();j++)
            cout<<vizinhos[i][j]<< " ";cout<< "\n";
    }


    return 0;
}
