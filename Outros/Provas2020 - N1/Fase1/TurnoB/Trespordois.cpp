#include<bits/stdc++.h>
#include<vector>
#define INF -10000000
using namespace std;

void merge_sort(vector<int> &v)
{
    if(v.size()==1) return;

    vector<int>u1,u2;
    for(int i=0;i<v.size()/2;i++)
    {
        u1.push_back(v[i]);
    }
    for(int i=v.size()/2;i<v.size();i++)
    {
        u2.push_back(v[i]);
    }

    merge_sort(u1);
    merge_sort(u2);

    u1.push_back(INF);
    u2.push_back(INF);

    int in1=0,in2=0;

    for(int i=0;i<v.size();i++)
    {
        if(u1[in1]>u2[in2])
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
    return;

}

int main()
{
    int n,resp=0;
    cin>>n;
    vector<int>p;

    for(int i=0;i<n;i++)
    {
        int aux;
        cin>> aux;
        p.push_back(aux);
    }
    merge_sort(p);

    int aux= n%3;

    if(aux==1)
    {
        resp=p[n-1];
    }else if(aux==2)
    {
        resp=p[n-1]+p[n-2];
    }
    n-=aux;

    for(int i=0;i<n;i+=3)
    {
        resp+=p[i]+p[i+1];
    }

    cout<<resp;





    return 0;
}
