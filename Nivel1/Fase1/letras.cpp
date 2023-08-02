#include<bits/stdc++.h>
using namespace std;

int main()
{
    int resp=0,palavra=0;
    char a;
    string b;
    a=getchar();
    getline(cin,b);

    cout<< "\n\n";

    cout<< a<<"\n"<<b<< "\n" ;


/*
    while(cin>>b)
    {
        cout<< "to aqui\n";
        palavra++;
        for(int i=0;i<strlen(b);i++)
        {
            if(b[i]==a)
            {
                resp++;
                break;
            }
        }
    }*/

    cout<< "acabou\n";

    cout<<fixed<<setprecision(1)<<(resp*100)/palavra;


    return 0;
}
