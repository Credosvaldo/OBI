#include<bits/stdc++.h>
using namespace std;

struct carne{
    int peso,proteina;
};

carne v[2001];
int dp[2001][2001];
int n;

int melhor(int i, int aguenta)
{
    if(dp[i][aguenta]>-1)
    {
        return dp[i][aguenta];
    }

    if(i==n || aguenta==0)
        return dp[i][aguenta]=0;

    int naoC = melhor(i+1,aguenta);
    int C;

    if(aguenta-v[i].peso>=0)
    {
        C= v[i].proteina + melhor(i+1,aguenta-v[i].peso);
        return dp[i][aguenta]=max(C,naoC);
    }

    return dp[i][aguenta]=naoC;

}

//

int main()
{
    int p;
    cin>>p>>n;


    for(int i=0;i<n;i++)
    {
        cin>>v[i].peso>>v[i].proteina;
    }

    memset(dp,-1,sizeof(dp));





    cout<< melhor(0,p);



    return 0;
}
