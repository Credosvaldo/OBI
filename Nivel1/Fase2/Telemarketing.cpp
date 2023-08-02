#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    queue<int> v;

    int resp[n],t[n];

    memset(resp,0,sizeof(resp));
    memset(t,0,sizeof(t));


    for(int i=0;i<l;i++)
    {
        int aux;
        cin>>aux;
        v.push(aux);
    }


  /*  while(!v.empty())
    {
        cout<< v.front()<< " ";
        v.pop();
    } */


    int i=0;
    while(!v.empty())
    {
        //cout<< i<< " "<< v.size() <<"\n";
        for(int j=0;j<n;j++)
        {
            if(v.empty())break;
            if(t[j]==i)
            {//cout<< "\nLeu\n";
                resp[j]++;
                t[j]+=v.front();
                v.pop();
            }
        }
        i++;

    }


    // for de resposta

    for(int j=0;j<n;j++)
    {
        cout<< j+1<< " "<< resp[j] << "\n";
    }

    return 0;
}
