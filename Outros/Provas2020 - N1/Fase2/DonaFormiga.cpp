#include<bits/stdc++.h>
#include<vector>
#define MAX 205
using namespace std;

vector<int>vizinhos[MAX];
int s,t,p;
int alt[MAX];

int bfs(int u)
{
    if(vizinhos[u].size()==0) return 0;
    int resp=0;

    for(int i=0;i<vizinhos[u].size();i++)
    {
        int viz=vizinhos[u][i];

        resp = max(resp,1+bfs(viz));

    }
    return resp;


}


int main()
{
    cin>>s>>t>>p;

    for(int i=1;i<=s;i++)
        cin>>alt[i];

    for(int i=1;i<=t;i++)
    {
        int a,b;
        cin>>a>>b;

        if(alt[a]>alt[b])
            vizinhos[a].push_back(b);
        else if(alt[b]>alt[a])
            vizinhos[b].push_back(a);

    }

    cout<< bfs(p);


    return 0;
}
