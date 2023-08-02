#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{

    int a,v;
    do
    {
        cin>>a,v;
        int r[a],aux=0;
        vector<int>resp;

        memset(r,0,sizeof(r));

        for(int i=0;i<v;i++)
        {
            cin>>aux;
            r[aux-1]++;
            cin>>aux;
            r[aux-1]++;
        }

        aux=0;
        for(int i=0;i<a;i++)
        {
            if(r[resp[0]]<r[i])
            {
                resp.clear();
                resp.push_back(i);

            }else
            if(r[i]==r[resp[0]])
            {
                resp.push_back(i);
            }


        }

        sort(resp.begin(),resp.end());

        cout<<



    }while(a != v && v !=0);



    return 0;
}
