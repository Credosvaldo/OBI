#include<bits/stdc++.h>
#include<vector>
#include<queue>
#define MAX 50005
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>viz[MAX];
    int peso[MAX];
    memset(peso,0,sizeof(peso));

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;

        viz[a].push_back(b);
        peso[b]++;

    }

    queue<int> resp;
    priority_queue<int ,vector<int>,greater<int> >fila;

    for(int i=0;i<n;i++)
        if(peso[i]==0) fila.push(i);


    while(!fila.empty())
    {
        int aux=fila.top();
        fila.pop();

        resp.push(aux);

        for(int i=0;i<viz[aux].size();i++)
        {
            peso[viz[aux][i]]--;

            if(peso[viz[aux][i]]==0)
                fila.push(viz[aux][i]);
        }



    }

    if(resp.size()<n)
    {
        cout<< "*";
    }
    else
    {
        while(!resp.empty())
            cout<< resp.front()<< "\n",resp.pop();
    }


    return 0;
}
