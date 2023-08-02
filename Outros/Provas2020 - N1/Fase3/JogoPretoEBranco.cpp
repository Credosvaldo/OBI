#include<bits/stdc++.h>
#define MAX 7
using namespace std;

int main()
{
    int l,c;
    int p;
    cin>>l>>c;
    cin>>p;

    int lin[] = {1,-1,0,0};
    int col[] = {0,0,1,-1};

    int m[MAX][MAX];

    memset(m,0,sizeof(m));

    int resp=0;


    for(int i=0;i<p;i++)
    {
        int x,y;
        cin>>x>>y;

        m[x][y]=1;

        for(int j=0;j<4;j++)
        {
            int nx,ny;

            nx= x+lin[j];
            ny= y+col[j];

            if(m[nx][ny]!=0 || nx<1 || nx>l || ny<1 || ny>c )
                continue;

            m[nx][ny]=-1;
            resp++;

            for(int k=0;k<4;k++)
            {
                int nnx,nny;

                nnx=nx+lin[k];
                nny=ny+col[k];

                if( nnx<1 || nnx>l || nny<1 || nny>c )
                    continue;

                if(m[nnx][nny]==-1)
                {
                    m[nx][ny]=0;
                    resp--;
                    break;
                }


            }


        }


    }

    cout<< resp;



    return 0;
}
