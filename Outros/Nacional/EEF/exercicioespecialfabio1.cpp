#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int m[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                m[i][j]=0;
            }
            else
            {
                if(i<j)
                {
                    m[i][j]=1;
                }
                else
                {
                    m[i][j]=-1;
                }
            }

        }
    }

    for(int i=0;i<n;i++)
    {
for(int j=0;j<n;j++)cout<< m[i][j]<< " ";cout<< "\n";
    }

    cout<< "\n\n";

    int con;
    cin>>con;

    int m2[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            m2[i][j]=m[i][j]*con;
        }
    }


    for(int i=0;i<n;i++)
    {
for(int j=0;j<n;j++)cout<< m2[i][j]<< " ";cout<< "\n";
    }

    cout<< "\n\n";


        for(int i=0;i<n;i++)
    {
for(int j=0;j<n;j++)cout<< m2[i][j]+m[i][j]<< " ";cout<< "\n";
    }

    cout<< "\n\n";







    return 0;
}
