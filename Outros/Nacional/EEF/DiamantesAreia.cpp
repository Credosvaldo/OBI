#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n!=0)
    {
        n--;

        string a;

        cin>>a;

        for(int i=0;i<n;i++)
            if(a[i]=='.')
            {
                a.erase(i);
            }


        int resp=0;

        for(int i=0;i<a.size();i++)
            for(int j=0;j<a.size();j++)
            {
                if(a[j]=='<' && a[j+1]=='>')
                    resp++;
            }

            cout<< resp;

    }



    return 0;
}
