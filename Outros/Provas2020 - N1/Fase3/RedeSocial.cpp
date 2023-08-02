#include<bits/stdc++.h>
#include<vector>
#define INF 1000000000
using namespace std;


void merge_sort(vector<int> &v)
{
    if(v.size()==1)
        return;


    vector<int> u1,u2;

    for(int i=0;i<v.size()/2;i++)
        u1.push_back(v[i]);
    for(int i=v.size()/2;i<v.size();i++)
        u2.push_back(v[i]);


    merge_sort(u1);
    merge_sort(u2);

    u1.push_back(-5);
    u2.push_back(-5);

    int ini1=0,ini2=0;

    for(int i=0;i<v.size();i++)
    {
        if(u1[ini1]>u2[ini2])
        {
            v[i]=u1[ini1];
            ini1++;
        }
        else
        {
            v[i]=u2[ini2];
            ini2++;
        }
    }


}


int main()
{
    int n;
    cin>>n;
    vector<int>v;

    for(int i = 0;i<n;i++)
    {
        int aux;
        cin>>aux;
        v.push_back(aux);

    }

    merge_sort(v);
    int resp=0;


    for(int i=0;i<n;i++)
        if(v[i] >= i+1)
            resp=max(resp,i+1);


    cout<<resp;


    return 0;
}
