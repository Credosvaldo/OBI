#include<bits/stdc++.h>
#define MAX 1005
using namespace std;

int hjd[1005][6];
int n;

int torre(int q,int f)
{
    if(q==n)
    {
        return 0;
    }

    int aux;
    int aux2;


    //
    for(int i=0;i<6;i++)
        if(hjd[q][i]==f)
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

            if(hjd[q][i]==6 || hjd[q][aux]==6)
            {
                hjd[q][i]==5||hjd[q][aux]==5 ? aux2=4 : aux2=5;

            }
            else aux2=6;



            break;

        }

        return aux2 + torre(q+1,hjd[q][aux]);


}

int main()
{

    cin>>n;

    for(int i=0;i<n;i++)
        for(int j=0;j<6;j++)
            cin>>hjd[i][j];


    int resp=0;
    for(int i=0;i<6;i++)
    {
        resp=max(resp, torre(0,i+1));
    }

    cout<< resp;



    return 0;
}
