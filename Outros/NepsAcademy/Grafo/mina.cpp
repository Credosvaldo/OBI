#include<bits/stdc++.h>
#include<queue>
#include<vector>
#define INF 10000000
using namespace std;

struct casa
{
    int i,j,c;
};

int n;
bool processado[100][100];
int dp[100][100];
int m[100][100];

int lat[4] = {1,-1,0,0};
int fro[4] = {0,0,1,-1};

typedef pair<int, pair<int,int> > pii;


void DJ()
{
    priority_queue< pii ,  vector<pii>,   greater<pii>   >fila;

    fila.push( { 0,{0,0} }  );


    while(1)
    {
       //cout<< "\nfoi uma";
        int davezL=-1,davezC;

        //cout<< "\nTamanho da fila e: "<< fila.size();

        while(!fila.empty())
        {
            int atualL = fila.top().second.first;
            int atualC = fila.top().second.second;

            //cout<< "\n os topos da fila: "<< atualL << " " << atualC;

            fila.pop();

            if(!processado[atualL][atualC])
            {
                davezL=atualL;
                davezC=atualC;
                processado[atualL][atualC]=true;
                break;
            }


        }

        //cout<< "\nEsse é o da vez L: "<<davezL<<"\nE esse e o C: "<< davezC<< "\n";

        if(davezL==-1) break;


        //cout<< "comecara o for davez\n";

        for(int i=0;i<4;i++)
        {
           // cout<< "iniciou o for da vez\n";
           // cout<< "\nvalro do davezL+lat[i]: "<<davezL+lat[i]<< " \ne do avezC+fro[i]: " << davezC+fro[i]<< "\n";
            if( davezL+lat[i]<n &&  davezL+lat[i]>-1 && davezC+fro[i]<n && davezC+fro[i]>-1 )
            {
                //cout<< "condicao comprida\n";
                if(m[davezL+lat[i]][davezC+fro[i]])
                {
                    if(dp[davezL+lat[i]][davezC+fro[i]] > dp[davezL][davezC]+1)
                    dp[davezL+lat[i]][davezC+fro[i]] = dp[davezL][davezC]+1;
                }
                else if(dp[davezL+lat[i]][davezC+fro[i]] > dp[davezL][davezC])
                {
                    dp[davezL+lat[i]][davezC+fro[i]] = dp[davezL][davezC];
                }

               // cout<< "O valor de davezL e: "<< davezL<< "\n";

                fila.push( {dp[davezL+lat[i]][davezC+fro[i]], { davezL+lat[i] , davezC+fro[i] }} );

            }


        }

        //cout<< "fim do for\n\n";

    }



    return;

}




int main()
{
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j]=INF;
            cin>> m[i][j];
        }
    }

    dp[0][0]=0;

    DJ();




    cout<< dp[n-1][n-1];

    return 0;
}
