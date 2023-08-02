#include<bits/stdc++.h>
#include<vector>
using namespace std;


long double merge_sort(vector<long double>&v)
{
    if(v.size()==1) return 0;



    vector<long double>u1,u2;

    for(long int i=0;i<v.size()/2;i++)
        u1.push_back(v[i]);
    for(long int i=v.size()/2;i<v.size();i++)
        u2.push_back(v[i]);

    long double resp=0;

    resp+=merge_sort(u1);
    resp+=merge_sort(u2);

    u1.push_back(-1);
    u2.push_back(-1);

    long long int in1=0,in2=0;

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
            resp+= u1.size()-in1-1;
        }
    }

    return resp;

}



int main()
{
    long int n;
    cin>>n;
    vector<long double>v;

    for(long int i=0;i<n;i++)
    {
        long double aux,aux2;
        cin>>aux>>aux2;

        v.push_back(  sqrtl(aux*aux + aux2*aux2)   );

    }

   /* for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
cout<< "\n\n";*/

    cout<<fixed<<setprecision(0)<<merge_sort(v);



    return 0;
}
