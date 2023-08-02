#include<bits/stdc++.h>
using namespace std;

int n,m,x,y,k;
bool dp[205][205];



int f(int a,int b)
{
    //cout<< a<< " "<<b<< "\n";
    if(dp[a][b]||b>m||b<1||a>n||a<1)
        return 0;
    dp[a][b]=1;
    return 1 + f(a+1,b)+ f(a-1,b)+ f(a,b+1)+ f(a,b-1)+ f(a+1,b+1)+ f(a+1,b-1)+ f(a-1,b+1)+ f(a-1,b-1);


}

int main()
{
    memset(dp,0,sizeof(dp));
    cin>>n>>m>>x>>y>>k;
    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;
        dp[a][b]=1;
    }

    cout<< f(x,y);




    return 0;
}
