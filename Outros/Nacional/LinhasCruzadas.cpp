#include<bits/stdc++.h>
#include<vector>
#define MAX 100005
using namespace std;

int n;

int mergesort(vector<int>&v)
{
    if(v.size()==1) return 0;

    vector<int>u1,u2;

    for(int i=0;i<v.size()/2;i++)
        u1.push_back(v[i]);
    for(int i=v.size()/2;i<v.size();i++)
        u2.push_back(v[i]);

    int resp=0;

    resp+=mergesort(u1);
    resp+=mergesort(u2);

    u1.push_back(MAX);
    u2.push_back(MAX);


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
            v[i]=u2[in2];
            in2++;
            resp+=u1.size()-1-in1;

        }


    }

    return resp;

}


int main()
{

    cin>>n;
    vector<int>v;
    int aux;

    for(int i=0;i<n;i++)
    {
        cin>>aux;
        v.push_back(aux);
    }

    cout<< mergesort(v);




    return 0;
}
