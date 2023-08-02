#include<bits/stdc++.h>
#include<vector>
#define MAX 505
using namespace std;

struct jogador{
string name;int nivel;
};

bool ordalfabetica(jogador a,jogador b)
{
    return a.name<b.name;
}
bool ordnivel(jogador a,jogador b)
{
    return a.nivel>b.nivel;
}


int main()
{
    int n,t;
    cin>>n>>t;

    jogador v[n];

    for(int i=0;i<n;i++)
    {
        cin>>v[i].name>>v[i].nivel;
    }

    sort(v,v+n,ordnivel);

    vector<string>times[t];


    int aux=0;
    for(int i=0;i<n;i++)
    {
        times[aux].push_back(v[i].name);
        aux++;
        if(aux==t)
            aux=0;

    }

    for(int i=0;i<t;i++)
    {cout<< "\n";
        cout<< "Time "<<i+1<<"\n";
        sort(times[i].begin(),times[i].end());

        for(int j=0;j<times[i].size();j++)
            cout<< times[i][j]<<"\n";


    }



    return 0;
}
