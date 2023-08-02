#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>> m[i][j];

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(m[i-1][j]+m[i][j-1]+m[i-1][j-1]>=2)
                m[i][j]=0; else m[i][j]=1;
        }
    }

    cout<< m[n-1][n-1];


    return 0;
}
