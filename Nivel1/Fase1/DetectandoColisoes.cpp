#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x0,x1,y0,y1,a0,a1,b0,b1;
    cin>> x0>>y0>>x1>>y1>>a0>>b0>>a1>>b1;


    if(  x0 <= max(a0,a1)  &&  x0 >= min(a0,a1) &&  y0 <= max(b0,b1) && y0 >= min(b0,b1)    ||
         x1 <= max(a0,a1)  &&  x1 >= min(a0,a1) &&  y0 <= max(b0,b1) && y0 >= min(b0,b1)    ||
         x1 <= max(a0,a1)  &&  x1 >= min(a0,a1) &&  y1 <= max(b0,b1) && y1 >= min(b0,b1)    ||
         x0 <= max(a0,a1)  &&  x0 >= min(a0,a1) &&  y1 <= max(b0,b1) && y1 >= min(b0,b1)    ||

         (x0+x1)/2 <= max(a0,a1) && (x0+x1)/2 >= min(a0,a1) && (y0+y1)/2 <= max(b0,b1) && (y0+y1)/2 >= min(b0,b1) ||


         a0 <= max(x0,x1)  &&  a0 >= min(x0,x1) &&  b0 <= max(y0,y1) && b0 >= min(y0,y1)    ||
         a1 <= max(x0,x1)  &&  a1 >= min(x0,x1) &&  b0 <= max(y0,y1) && b0 >= min(y0,y1)    ||
         a1 <= max(x0,x1)  &&  a1 >= min(x0,x1) &&  b1 <= max(y0,y1) && b1 >= min(y0,y1)    ||
         a0 <= max(x0,x1)  &&  a0 >= min(x0,x1) &&  b1 <= max(y0,y1) && b1 >= min(y0,y1)    ||

         (a0+a1)/2 <= max(x0,x1) && (a0+a1)/2 >= min(x0,x1) && (b0+b1)/2 <= max(y0,y1) && (b0+b1)/2 >= min(y0,y1)


    )
    {
        cout<< 1;
    }
    else cout <<0;



    return 0;
}
