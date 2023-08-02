#include<bits/stdc++.h>
#include<vector>
#define INF 1000000000
using namespace std;


void merge_sort(vector<float>&v)
{
    if(v.size()==1)
        return;

    vector<float>u1,u2;

    for(int i=0;i<v.size()/2;i++)
        u1.push_back(v[i]);

    for(int i=v.size()/2;i<v.size();i++)
        u2.push_back(v[i]);

    merge_sort(u1);
    merge_sort(u2);

    int in1=0,in2=0;

    u1.push_back(INF);
    u2.push_back(INF);


    for(int i=0;i<v.size();i++)
    {
        if(u1[in1]<u2[in2])
        {
            v[i]=u1[in1];
            in1++;
        }
        else
        {
            v[i]=u2[in2];
            in2++;
        }
    }


}


int main()
{
    float t;
    int n;
    cin>>t>>n;

    vector<float> v;
    float resp=INF;

    float vresp[n];
    memset(vresp,0,sizeof(vresp));

    for(int i=0;i<n;i++)
    {
        int aux;
        cin>>aux;
        v.push_back(aux);
    }

    merge_sort(v);


    vresp[0]=v[0];


    for(int i=1;i<n;i++)
    {
        float aux2 = (v[i]-v[i-1])/2;

        vresp[i-1]+=aux2;
        vresp[i]+=aux2;

        resp=min(resp,vresp[i-1]);


    }

    vresp[n-1]+=t-v[n-1];

    resp=min(resp,vresp[n-1]);

    cout<< fixed<< setprecision(2) <<resp;


    return 0;
}
