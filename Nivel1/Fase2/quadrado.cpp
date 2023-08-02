#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m[n][n];
    int l[n];
    int c[n];

    memset(l,0,sizeof(l));
    memset(c,0,sizeof(c));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>m[i][j];
            l[i]+=m[i][j];
            c[j]+=m[i][j];

        }
    }

    int pl;
    int pc;




    for(int i=1;i<n;i++)
    {
        if(l[0]!=l[i])
        {
            if(i==n-1)
            {
                pl=n-1;break;
            }
            else
            {
                if(l[0]!=l[i+1])
                {
                    pl=0;break;
                }
                else
                {
                    pl=i;break;
                }
            }
        }





    }


    for(int i=1;i<n;i++)
    {
        if(c[0]!=c[i])
        {
            if(i==n-1)
            {
                pc=n-1;break;
            }
            else
            {
                if(c[0]!=c[i+1])
                {
                    pc=0;break;
                }
                else
                {
                    pc=i;break;
                }
            }
        }

    }

int aux=m[pl][pc];
if(pl==n-1)
{
m[pl][pc]+=l[0]-l[pl];
}
else
{
    m[pl][pc]+=l[pl+1]-l[pl];
}
cout<<m[pl][pc]<< " "<<aux;


    return 0;
}
