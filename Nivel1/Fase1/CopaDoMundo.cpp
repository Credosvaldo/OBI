#include <bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
    queue<char>g;
    for(char c='A';c<= 'P';c++)
        g.push(c);


    for(int i=0;i<15;i++)
    {
        int a,b;
        cin>> a>>b;

        char ca,cb;
        ca = g.front();
        g.pop();
        cb = g.front();
        g.pop();

        if(a>b)
        {
            g.push(ca);
        }
        else
        {
            g.push(cb);
        }


    }

    cout<< g.front();





    return 0;
}
