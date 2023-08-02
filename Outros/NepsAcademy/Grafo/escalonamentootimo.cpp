#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    // uma prioriti queue pra aqueles que nao foram prossessados
    int n,m;

    cin >>n>>m;
    int peso[n];
    memset(peso,0,sizeof(peso));
    vector<int>grafo[50005];
    vector<int>resp;
    priority_queue<int,vector<int>,greater<int> > fila;


    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        grafo[x].push_back(y);
        peso[y]++;
    }
    for(int i=0;i<n;i++)
    {
        if(peso[i]==0) fila.push(i);
    }

    while(!fila.empty())
    {
        int atual;
        atual=fila.top();
        fila.pop();
        resp.push_back(atual);

        for(int i=0;i<grafo[atual].size();i++)
        {
            peso[grafo[atual][i]]--;
            if(peso[grafo[atual][i]]==0)
                fila.push(grafo[atual][i]);
        }
    }
    if(resp.size()<n)
    {
        cout<<"*";return 0;
    }
    for(int i=0;i<n;i++)
    {
        cout<< resp[i]<< "\n";
    }



    return 0;
}
