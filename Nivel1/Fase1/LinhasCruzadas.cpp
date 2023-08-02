#include<bits/stdc++.h>
#include<vector>

#define INF 100000000

using namespace std;

int resp=0;

int merge_sort(vector<int> &v)
{
    if(v.size()==1)
        return 0;


    vector<int> u1,u2;

    for(int i=0;i<v.size()/2;i++)
    {
        u1.push_back(v[i]);
    }
    for(int i=v.size()/2;i<v.size();i++)
    {
        u2.push_back(v[i]);
    }

    int resp=0;

    resp+=merge_sort(u1);
    resp+=merge_sort(u2);

    u1.push_back(INF);
    u2.push_back(INF);

    int ini1=0,ini2=0;

    for(int i=0;i<v.size();i++)
    {
        if(u1[ini1]<u2[ini2])
        {
            v[i]=u1[ini1];
            ini1++;
        }
        else
        {
            v[i]=u2[ini2];
            ini2++;
            resp+=u1.size()-ini1-1;
        }
    }

    return resp;

}


int main()
{
    int n,resp=0;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int aux;
        cin>>aux;
        v.push_back(aux);
    }



    cout << merge_sort(v);;

    return 0;
}
