#include<bits/stdc++.h>
#include<queue>
#include<vector>
#define MAX 505
#define INF 1000000000
using namespace std;
typedef pair<int,int> pii;
//?
int t,l,o,d;
vector<pii>vizinhos[MAX];
bool pro[MAX][MAX];
int dis[MAX];


void dj()
{
    queue<pii> fila;

    for(int i=0;i<vizinhos[o].size();i++)
    {
        fila.push(vizinhos[o][i]);
        dis[vizinhos[o][i].first]=1;
    }



    while(true)
    {
        int navez,lavez=-1;

        //cout<< "tamanho da fila: "<< fila.size()<< "\n";

        while(!fila.empty())
        {
            int natual,latual;
            natual=fila.front().first;
            latual=fila.front().second;

            //cout<< "frente da fila: "<< fila.front().first<< ":"<< fila.front().second<< "\n";
            //cout<< "se ja foi lido: "<<pro[fila.front().first][fila.front().second]<< "\n";


            fila.pop();

            if(!pro[natual][latual])
            {
                navez=natual;
                lavez=latual;
                pro[navez][lavez]=1;
                break;
            }

        }

        //cout<< lavez<< "\n";
        //cout<< navez<< "\n";
        if(lavez==-1)break;

        for(int i=0;i<vizinhos[navez].size();i++)
            if(vizinhos[navez][i].second==lavez)
            {
              //  cout<< "quase colocando um elemento 1\n";
               // cout<< "dis "<< navez<< " e: "<< dis[navez]<< "\n";
                if(dis[vizinhos[navez][i].first]>dis[navez])
                {
                  //  cout<< "colocando mais uma elemento\n";
                    dis[vizinhos[navez][i].first]=dis[navez];
                    fila.push(vizinhos[navez][i]);
                }
            }
            else if(dis[vizinhos[navez][i].first]>dis[navez]+1)
            {
                //cout<< "colocando mais uma elemento\n";
                dis[vizinhos[navez][i].first]=dis[navez]+1;
                fila.push(vizinhos[navez][i]);
            }





    }






}


int main()
{
    cin>>t>>l>>o>>d;
    pii auxO;

    for(int i=1;i<=l;i++)
    {
        int aux;
        cin>>aux;
        int ult;
        cin>>ult;

        for(int j=1;j<aux;j++)
        {
            int aux2;
            cin>>aux2;

            vizinhos[ult].push_back(make_pair(aux2,i));
            vizinhos[aux2].push_back(make_pair(ult,i));


        }

    }





    /*for(int i=1;i<=l;i++)
    {
        cout<< i<<": ";
        for(int j=0;j<vizinhos[i].size();j++) cout<< vizinhos[i][j].first<< ":"<< vizinhos[i][j].second << " ";cout<< "\n";
    }*/

    for(int i=0;i<MAX;i++)
    dis[i]=INF;

    dis[o]=0;
    dj();


    cout<< dis[d];


   /* cout<< "\n\n";

    for(int i=0;i<=t;i++)
        cout<< dis[i]<< " ";
*/

    return 0;
}
