#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<stack>
#define MAX 100005
using namespace std;

int n,m;
vector<int>duplas[MAX];
set<int> dup;


int main()
{
    cin>>n>>m;
    stack<int>resp;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        duplas[u].push_back(v);
        duplas[v].push_back(u);

    }

    resp.push(n);
    for(int i=0;i<duplas[n].size();i++)
        dup.insert(duplas[n][i]);

    int qnt=1;

    for(int i=n-1;i>0;i--)
    {
        if(dup.find(i)==dup.end())
        {
            qnt++;
            resp.push(i);
            for(int j=0;j<duplas[i].size();j++)
                dup.insert(duplas[i][j]);

        }
    }

    cout<< qnt<< "\n";

    while(!resp.empty())
    {
        cout<< resp.top()<< " ";
        resp.pop();
    }


    return 0;
}
