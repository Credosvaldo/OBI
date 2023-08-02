#include<bits/stdc++.h>
using namespace std;

int main()
{
    int resp=0;
    char m[300];
    gets(m);

    for(int i=0;i<strlen(m);i++)
    {
        if(m[i]==':')
        {
            if(m[i+1]=='-')
            {
                if(m[i+2]==')')
                {
                    resp++;
                    i+=2;
                }
                else if(m[i+2]=='(')
                {
                    resp--;
                    i+=2;
                }
            }
        }
    }

    if(resp==0) cout<< "neutro"; else if(resp>0) cout<< "divertido"; else cout<< "chateado";

    return 0;
}
