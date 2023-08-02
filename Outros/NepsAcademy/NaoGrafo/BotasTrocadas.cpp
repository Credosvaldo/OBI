#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
    int n;
    cin>>n;

    priority_queue<int>e,d;

    for(int i=0;i<n;i++)
    {
        char a;
        int c;

        cin>>c>>a;

        a == 'D' ? d.push(c) : e.push(c);

    }
    int resp=0;

    while(!d.empty() && !e.empty())
    {
        if(d.top()<e.top())
        {
            e.pop();
        }
        else if(d.top()>e.top())
        {
            d.pop();
        }
        else
        {
            d.pop();
            e.pop();
            resp++;
        }

    }

    cout<< resp;

    return 0;
}
