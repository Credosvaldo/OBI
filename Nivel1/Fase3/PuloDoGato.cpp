#include<bits/stdc++.h>
#include<vector>
#include<queue>
#define MAX 505
#define INF 1000000000
using namespace std;

int l,c;
bool pros[MAX][MAX];
int dist[MAX][MAX];
bool m[MAX][MAX];

void dj()
{
    queue<pair<int ,int> >fila;
    fila.push(make_pair(0,0));


    while(true)
    {
        int xd=-1,yd;

        while(!fila.empty())
        {
            int xa,ya;
            xa=fila.front().first;
            ya=fila.front().second;

            fila.pop();

            if(!pros[xa][ya])
            {
                xd=xa;
                yd=ya;
                pros[xd][yd]=true;
                break;
            }

        }


        if(xd==-1) break;


        for(int i=-2;i<=2;i++)
        {
            for(int j=-2;j<=2;j++)
            {
                if(xd+i>-1&&xd+i<l&&yd>-1&&yd<c)
                if(m[xd+i][yd+j])
                {
                    if(dist[xd+i][yd+j] > dist[xd][yd]+1 )
                    {
                        dist[xd+i][yd+j] = dist[xd][yd]+1;
                        fila.push(make_pair(xd+i,yd+j));
                    }
                }
            }
        }

    }


}

int main()
{
    cin>>l>>c;

    for(int i=0;i<l;i++)
        for(int j=0;j<c;j++)
        {
            cin>>m[i][j];
            dist[i][j]=INF;
        }

    dist[0][0]=0;

    dj();

    if(dist[l-1][c-1]==INF)cout<<-1;else
    cout<< dist[l-1][c-1];

    return 0;
}
