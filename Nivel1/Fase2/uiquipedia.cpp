#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<set>
#include<queue>
#define MAX 2005
#define INF 1000000000
using namespace std;
typedef pair<int,int>pii;

int n;
vector<int>vizinhos[MAX];
map<string,int>mapa;
int dist[MAX];
bool pros[MAX];
string o,f;


void dj()
{
    priority_queue<pii,vector<pii>,greater<pii> >fila;
    for(int i=0;i<MAX;i++)
        dist[i]=INF;

    dist[mapa[o]]=0;

    fila.push(pii(0,mapa[o]));

    while(true)
    {
        int davez=-1,dis;

        while(!fila.empty())
        {
            int atual;
            atual=fila.top().second;
            dis=fila.top().first;

            fila.pop();

            if(!pros[atual])
            {
                davez=atual;
                pros[atual]=1
                ;break;
            }

        }



        if(davez==-1)break;

        //cout<< "peguei o "<<davez<< "\n";

        for(int i=0;i<vizinhos[davez].size();i++)
        {
            if(dist[vizinhos[davez][i]]>dis+1)
            {
                dist[vizinhos[davez][i]]=dis+1;
                fila.push(pii(dist[vizinhos[davez][i]],vizinhos[davez][i]));
            }

        }


    }


}


int main()
{
    cin>>n;
    int aux=0;

    for(int i=0;i<n;i++)
    {
        string x,y;
        cin>>x>>y;

        if(mapa.count(x)==0)
            mapa[x] = aux++;
        if(mapa.count(y)==0)
            mapa[y]=aux++;

        //cout<< "ha uma ligacao entre "<<mapa[x]<< " e "<<mapa[y]<< "\n";

        vizinhos[mapa[x]].push_back(mapa[y]);

    }

    map<string,int>::iterator it = mapa.begin();
    aux= (*it).second;
    it++;

    for(;it!=mapa.end();it++)
    {
        int n2=(*it).second;
        vizinhos[aux].push_back(n2);
        vizinhos[n2].push_back(aux);

        //cout<< "liguei o "<< n2<< " no "<<aux<< "\n";

        aux=n2;

    }


    cin>>o>>f;

    dj();

    cout<< dist[mapa[f]];
/*

    cout<< "\n\n";

    cout<< "o valor do A e: "<< mapa["a"]<< "\n";
    cout<< "o valor do B e: "<< mapa["b"]<< "\n";
    cout<< "o valor do C e: "<< mapa["c"]<< "\n";

    cout<< "\n\n";

    for(int i=0;i<n;i++)
    {
        cout<< i << " tem como vizinhos: ";
        for(int j=0;j<vizinhos[i].size();j++)
            cout<<vizinhos[i][j]<< " ";cout<< "\n";
    }


    for(int i=0;i<n;i++)
        cout<< dist[i]<< " ";
*/

    return 0;
}

/*

3
a c
b c
a c

c a

*/

