#include<bits/stdc++.h>
#define MAX 1005
using namespace std;

int v[1005][6];
int n;

int torre(int q,int f)
{
    if(q==n-1)
    {
        if(f==6)
            return 5;
        return 6;
    }

    int aux;
    int aux2;


    for(int i =0;i<6;i++)
        if(f==v[q][i])
        {
            if(i==0)
                aux=5;
            else if(i==1)
                aux=3;
            else if(i==2)
                aux=4;
            else if(i==3)
                aux=1;
            else if(i==4)
                aux=2;
            else if(i==5)
                aux=0;

            if(v[q][i]==6 || v[q][aux]==6)
            {
                if(v[q][i]==5||v[q][aux]==5)
                    aux2=4;
                else
                    aux2=5;
            }
            else
                aux2=6;


            break;

        }

        return aux2 + torre(q+1,v[q][aux]);


}

int main()
{

    cin>>n;

    for(int i=0;i<n;i++)
        cin>>v[i][0]>>v[i][1]>>v[i][2]>>v[i][3]>>v[i][4]>>v[i][5];

    cout<< "";


    int resp=0;
    for(int i=0;i<6;i++)
    {
        resp=max(resp, torre(0,i));
    }

    cout<< resp;



    return 0;
}
