#include<bits/stdc++.h>
#include<vector>
#include<queue>
#define INF 1000000000
using namespace std;
typedef pair<int ,pair<int,int> > pii;


int L,C,K;
int m[105][105];
int dp[105][105];
bool pro[105][105];

int auX[] = {1,-1,0,0};
int auY[] = {0,0,-1,1};

int espera(int xa,int ya,int px,int py)
{
    if(dp[xa][ya]%K < m[px][py])
        return m[px][py] - dp[xa][ya]%K;

    return K - dp[xa][ya]%K + m[px][py];

}

void dj()
{
    priority_queue<pii,vector<pii>,greater<pii> > fila;
    fila.push(make_pair(0,make_pair(0,0)));

    while(true)
    {
        int xDavez=-1,yDavez;

        while(!fila.empty())
        {
            int xa,ya;
            xa=fila.top().second.first;
            ya=fila.top().second.second;

            fila.pop();

            if(!pro[xa][ya])
            {
                pro[xa][ya]=1;
                xDavez=xa;
                yDavez=ya;
                break;
            }

        }

        if(xDavez==-1)break;


        for(int i=0;i<4;i++)
        {
            int x=xDavez+auX[i];
            int y=yDavez+auY[i];

            if(x>-1&&x<L&&y>-1&&y<C)
            {
                if(m[x][y]==-1 || m[x][y] == ((dp[xDavez][yDavez]%K)+1)%K  )
                {
                    if(dp[x][y]> dp[xDavez][yDavez]+1 )
                    {
                        dp[x][y]=dp[xDavez][yDavez]+1;
                        fila.push(make_pair(dp[x][y],make_pair(x,y)));
                    }
                }
                else if(m[xDavez][yDavez]==-1)
                {
                    if(dp[x][y]>  dp[xDavez][yDavez] + espera(xDavez,yDavez,x,y) )
                    {
                        dp[x][y]=dp[xDavez][yDavez] + espera(xDavez,yDavez,x,y);
                        fila.push(make_pair( dp[x][y] ,make_pair(x,y) ));
                    }

                }
            }

        }


    }


}


int main()
{
    cin>>L>>C>>K;
    for(int i=0;i<L;i++)
        for(int j=0;j<C;j++)
            cin>>m[i][j];

    for(int i=0;i<105;i++)
        for(int j=0;j<105;j++)
            dp[i][j]=INF;

    dp[0][0]=0;
    dj();

    if(dp[L-1][C-1]==INF) cout<< -1;else
    cout<< dp[L-1][C-1];

    return 0;
}
