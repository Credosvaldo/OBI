#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char a[1005];
    char b[105];
    int cont =0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>b;
        strcat(a,b);
    }

    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='{')
        {
            cont++;
        }
        else if(a[i]=='}')
        {
            if(cont>0)
                cont--;
            else
            {
                cout<< "N";
                return 0;
            }
        }
    }


    if(cont > 0)
        cout<< 'N';
    else
        cout<< "S";



    return 0;
}
        /*
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]=='{')
            {
                cont++;
            }
            else if(a[i]=='}')
            {
                if(cont>0)
                    cont--;
                else
                {
                    cout<< "N";
                    return 0;
                }
            }


        }*/
