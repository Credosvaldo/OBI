#include<bits/stdc++.h>
#include<vector>
#define MAX 1000000000
using namespace std;

void merge_sort(vector<int>&v)
{
    if(v.size()==1) return;

    vector<int> u1,u2;

    for(int i=0;i<v.size()/2;i++)
        u1.push_back(v[i]);
    for(int i=v.size()/2;i<v.size();i++)
        u2.push_back(v[i]);

    merge_sort(u1);
    merge_sort(u2);

    int in1=0,in2=0;

    u1.push_back(MAX);
    u2.push_back(MAX);

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
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int aux;
        cin>>aux;
        v.push_back(aux);
    }

    merge_sort(v);

    int ind=n-1,soma=0;

    for(int i=0;i<n-1;i++)
        soma+=v[i];

    while(ind>1)
    {
        if(soma>v[ind])
        {
            cout<< ind+1;
            return 0;
        }

        ind--;
        soma-=v[ind];

    }

    cout<< 0;

    return 0;
}
