#include<bits/stdc++.h>
#include<vector>
using namespace std;


int n,m;
int dp[105][105];


pair<int , vector<int> > banda(int ind,int k,vector<int> par)
{
   // if(ind>n) return make_pair(0,par);

    if(k==0)
    {
        int a = dp[par[0]][par[1]] + dp[par[0]][par[2]] + dp[par[1]][par[2]];
        return make_pair(a,par);
    }

    pair<int , vector<int> > resp;
    resp.first=0;

    for(int i =ind;i<=n;i++)
    {
        par.push_back(i);
        resp = max(resp,banda(i+1,k-1,par));
        par.pop_back();
    }

    return resp;

}



int main()
{
    cin>>n>>m;
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;

        dp[x][y]=z;
        dp[y][x]=z;

    }


    pair<int , vector<int> > r;
    vector<int>par;
    r=banda(1,3,par);

    cout<<"\n"<< r.second[0]<< " " <<  r.second[1]  <<  " "<< r.second[2]    ;

    return 0;
}
