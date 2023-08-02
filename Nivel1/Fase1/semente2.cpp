#include <bits/stdc++.h>
using namespace std;

int main()
{
    int F,R,dias=0;
    cin>> F>>R;
    int r[R];
    bool aux=0;

    for(int i =0;i<R;i++)
    {
        cin>>r[i];
        r[i]-=1;
    }
/*
    if(r[0] > F - r[R-1] -1)
    {
        if(r[0] =! 0)
        {
            aux=true;
        }
    }
    else
    {
        if(r[R-1] =! F-1)
        {
            aux=true;
        }
    }
*/




    dias = max(r[0],F - r[R-1] -1) *2;

    for(int i =0; i<R-1;i++)
    {
        dias = max(dias,r[i+1]-r[i]);
    }



    cout << dias/2 ;








   /* if(dias % 2 ==0)
    {
        cout<< dias/2;
    }
    else
    {
        cout<< dias/2 -0.5;
    }*/

//    cout << 3%2;
   // if(dias )



}
