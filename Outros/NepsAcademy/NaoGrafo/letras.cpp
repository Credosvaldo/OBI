#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    char s[100001*3];
    vector<int>pilha;
    cin>>s;
    //pilha.push_back(s[0]);



    for(int i=0;i<strlen(s);i++)
    {
        vector<int>::iterator it= upper_bound(pilha.begin(),pilha.end(),s[i]);

        if(it==pilha.end())
        {
            pilha.push_back(s[i]);
        }
        else
        {
            *it=s[i];
        }


    }

cout<<pilha.size();


    return 0;
}
