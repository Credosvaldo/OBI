#include<bits/stdc++.h>
#include<queue>
#include<vector>
#define MAX 105
#define INF 1000000000
using namespace std;
typedef pair<int , pair<int,int> >pii;

int l,c,k;
int dis[MAX][MAX];
bool pro[MAX][MAX];
int m[MAX][MAX];
int lin[] = {0,1,-1,0};
int col[] = {1,0,0,-1};


int esperar(int totalobitido,int hres)
{
    int h=totalobitido%k;

    if(h<hres)
        return hres-h;

    return k-h+hres;

}


void dj()
{
    priority_queue<pii,vector<pii>,greater<pii> >fila;
    fila.push(make_pair(0,make_pair(0,0) ));
    dis[0][0]=0;

    while(true)
    {
        int xdavez=-1,ydavez;

        while(!fila.empty())
        {
            int xatual,yatual;

            xatual=fila.top().second.first;
            yatual=fila.top().second.second;

            fila.pop();

            if(!pro[xatual][yatual])
            {
                pro[xatual][yatual]=true;
                xdavez=xatual;
                ydavez=yatual;
                break;

            }

        }

        if(xdavez==-1)break;

        for(int i=0;i<4;i++)
        {
            int nx=xdavez+lin[i];
            int ny=ydavez+col[i];

            if(nx>-1&&nx<l&&ny>-1&&ny<c)
            {
                if(m[nx][ny]==-1 || m[nx][ny] == (dis[xdavez][ydavez]+1)%k )
                {
                    if(dis[xdavez][ydavez]+1<dis[nx][ny])
                    {
                        dis[nx][ny]=dis[xdavez][ydavez]+1;
                        fila.push( make_pair(dis[nx][ny], make_pair(nx,ny) ) );
                    }

                }
                else if(m[xdavez][ydavez]==-1)
                {
                    int ndis = esperar(dis[xdavez][ydavez],m[nx][ny]) + dis[xdavez][ydavez];
                    dis[nx][ny]=ndis;
                    fila.push(make_pair( ndis, make_pair(nx,ny)));

                }

            }


        }



    }



}

int main()
{
    cin>>l>>c>>k;

    for(int i=0;i<l;i++)
        for(int j=0;j<c;j++)
            cin>>m[i][j];

    for(int i=0;i<MAX;i++)
        for(int j=0;j<MAX;j++)
            dis[i][j]=INF;


    dj();

    if(dis[l-1][c-1]==INF)cout<< -1;else
    cout<< dis[l-1][c-1];

/*
    cout<< "\n\n";


    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)cout<< dis[i][j]<< " ";cout<< "\n";
    }
*/

    return 0;
}
