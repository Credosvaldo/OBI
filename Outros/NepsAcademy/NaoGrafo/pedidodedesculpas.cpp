#include<bits/stdc++.h>
using namespace std;

struct frase{
    int n,d;
};

int f;
int dp[2000][2000];
frase v[2000];

int bilhete(int i,int j)
{
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }

    if(i==f || j==0)
    {
        return dp[i][j]=0;
    }

    int naoC = bilhete(i+1,j);
    int C;
    if(v[i].n<=j)
    {
        C = v[i].d + bilhete(i+1,j-v[i].n);
        return dp[i][j] = max(naoC,C);
    }
    return dp[i][j] = naoC;


}

int main()
{
    int c,n=1;

    do
    {
        memset(dp,-1,sizeof(dp));
        cin>>c>>f;


        for(int i=0;i<f;i++)
            cin>>v[i].n>>v[i].d;

        cout<< "Test "<<n<<"\n";
        cout<< bilhete(0,c)<< "\n";
        n++;


    }while(c!=0 || f!=0);




    return 0;
}
