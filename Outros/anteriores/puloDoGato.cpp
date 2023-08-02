#include<bits/stdc++.h>
using namespace std;
int main()
{
    int resposta=0;
    int C;
    int i=0;
    cin>>C;
    bool L[C+1];
    for (int i =0;i<C;i++)
    {
        cin>> L[i];
    }
    L[C]=0;

    while(true)
    {
        if(i==C-2)
        {
            resposta++;
            break;
        }
        if(i==C-3)
        {
            resposta++;
            break;
        }

        if(L[i+2]==1)
        {
            i++;
        }
        else if(L[i+1]==0)
        {
            resposta=-1;
            break;
        }



        resposta++;
        i++;
    }

    cout<< resposta;

    return 0;
}
