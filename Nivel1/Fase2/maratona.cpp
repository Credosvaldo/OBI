#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    queue<int>v;
    int aux;
    cin>>aux;
    for(int i=1;i<n;i++)
    {
        cin>>aux;
        v.push(aux);
    }

    int dis=0;
    //cout<< "afjklashflkjhsa\n";

    while(!v.empty())
    {
        //cout<< v.size()<< "\n";
        if(dis+m>=v.front())
        {
            dis=v.front();
            v.pop();
        }
        else
        {
            cout<< "N";return 0;
        }
    }

    dis+=m;

    if(dis>=42195) cout<< "S";else cout<< "N";


    return 0;
}
