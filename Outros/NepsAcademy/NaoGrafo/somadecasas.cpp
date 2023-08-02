#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int v[n];

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cin>>k;

    for(int i=0;i<n;i++)
    {
        int ini=0,fim=n,meio;

        while(ini<=fim)
        {
            meio = floor((ini+fim)/2);

            if(v[i]+v[meio]==k)
            {
                cout<<v[i]<<" "<<v[meio];
                return 0;
            }

            if(v[i]+v[meio]<k)
            {
                ini=meio+1;
            }else
            {
                fim=meio-1;
            }


        }


    }



    return 0;
}
