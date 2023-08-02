#include<bits/stdc++.h>
#include<vector>
#define INF -100000000000000010
using namespace std;

long  merge_sort(vector<long double> &v)
{
    if(v.size()==1)
        return 0;

    vector<long double>u1,u2;

    for(long  i=0;i<v.size()/2;i++)
    {
        u1.push_back(v[i]);
    }
    for(long  i=v.size()/2;i<v.size();i++)
    {
        u2.push_back(v[i]);
    }

    long  resp=0;

    resp+= merge_sort(u1);
    resp+= merge_sort(u2);

    u1.push_back(INF);
    u2.push_back(INF);

    long  in1=0,in2=0;

    for(long  i=0;i<v.size();i++)
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
            resp+= u1.size()-1-in1;

        }
    }

    return resp;

}

int main()
{
    long  n;
    vector<long double> v;
    cin>>n;

    for(long  i=0;i<n;i++)
    {
        long double aux1,aux2;
        cin>>aux1>>aux2;

        v.push_back(sqrtl( aux1*aux1 + aux2*aux2) );

    }

    for(int i=0;i<n;i++)
        cout<<fixed<<setprecision(0)<<v[i]<<" ";

    //cout<< merge_sort(v);

    return 0;
}
//Velho
