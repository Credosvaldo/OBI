#include<bits/stdc++.h>
#include<list>
using namespace std;

struct caxa{
int p,r;

};

int n,resp=0;
caxa v[1000];
list<caxa>m;

int TP(int r,int in)
{
    if(in==n)
        return 0;



    for(int i=in;i<n;i++)
    {
        return 1+ TP(min(v[i].r, r-v[i].p),i+1);
    }



}


int main()
{
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>v[i].p>>v[i].r;
        v[i].r-=v[i].p;
        m[i].r=v[i].r;
        m[i].p=v[i].p;
    }



    for(int i=0;i<n;i++)
    {
        resp=max(resp,TP(1000005,0));

        caxa c;
        c=m[0];
        m.pop_front();
        m.push_back(c);


    }



    return 0;
}
