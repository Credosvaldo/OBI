#include<bits/stdc++.h>
using namespace std;

int m[15][15];

int f(int x,int y)
{
    if(m[x][y]==m[x][y+1] && m[x][y+1] == m[x][y+2] && m[x][y+2] == m[x][y+3] && m[x][y+3] == m[x][y+4] && y+4<15)
    {
        return m[x][y];
    }
    if(m[x][y]==m[x+1][y] && m[x+1][y] == m[x+2][y] && m[x+2][y] == m[x+3][y] && m[x+3][y] == m[x+4][y] && x+4<15)
    {
        return m[x][y];
    }
    if(m[x][y]==m[x+1][y+1] && m[x+1][y+1] == m[x+2][y+2] && m[x+2][y+2] == m[x+3][y+3] && m[x+3][y+3] == m[x+4][y+4] && x+4<15 && y+4<15)
    {return m[x][y];
    }
    if(m[x][y]==m[x-1][y+1] && m[x-1][y+1] == m[x-2][y+2] && m[x-2][y+2] == m[x-3][y+3] && m[x-3][y+3] == m[x-4][y+4] && x-4>=0 && y+4<15)
    {
        return m[x][y];
    }


    return 0;

}

int main()
{
    for(int i=0;i<15;i++)
    for(int j=0;j<15;j++)
    cin>>m[i][j];

    for(int i=0;i<15;i++)
    for(int j=0;j<15;j++)
        if(m[i][j]>0)
        {
            if(f(i,j)>0)
            {
                cout<< m[i][j];
                return 0;
            }



        }


    cout<< 0;

    return 0;
}


/*
1 0 1 0 2 1 2 1 2 1 1 2 1 2 1
1 0 0 2 0 2 1 1 2 1 1 1 0 2 2
0 0 1 2 2 0 1 1 1 2 0 1 0 2 1
1 2 0 0 2 0 0 2 0 2 1 2 1 0 2
0 0 2 1 0 2 0 0 1 0 2 2 1 2 0
0 1 2 1 1 2 2 1 1 2 1 2 1 0 0
0 0 0 2 1 0 2 0 2 1 0 0 0 1 2
2 2 2 1 0 1 1 0 1 1 1 2 0 0 1
0 0 0 1 2 0 0 2 1 1 2 1 2 1 0
0 2 0 2 0 1 1 0 1 2 0 1 0 2 0
1 0 2 1 2 2 0 0 2 2 1 2 2 2 2
0 1 2 1 2 1 2 1 2 2 1 2 1 2 0
2 2 1 1 0 0 1 1 2 0 2 0 0 1 0
0 2 2 1 1 2 0 0 0 1 1 2 2 2 1
1 1 0 0 2 1 2 0 2 0 1 1 0 1 0

*/
