#include<bits/stdc++.h>
#include<vector>
#define INF 1010000000
using namespace std;

int merge_sort(vector<int>&v)
{
    if(v.size()==1) return 0;

    vector<int>u1,u2;

    for(int i=0;i<v.size()/2;i++)
    {
        u1.push_back(v[i]);
    }
    for(int i=v.size()/2;i<v.size();i++)
        u2.push_back(v[i]);


    int resp=0;
    resp+=merge_sort(u1);
    resp+=merge_sort(u2);

    u1.push_back(INF);
    u2.push_back(INF);

    int in1=0,in2=0;

    for(int i=0;i<v.size();i++)
    {
        if(u1[in1]<u2[in2])
        {
            v[i]=u1[in1];
            in1++;
        }
        else
        {
            resp+= (u1.size()-in1)-1;
            v[i]=u2[in2];
            in2++;
        }

    }

    return resp;


}


int main()
{
    int n;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int aux;
        cin>>aux;
        v.push_back(aux);
    }

    cout<< merge_sort(v);


    return 0;
}
