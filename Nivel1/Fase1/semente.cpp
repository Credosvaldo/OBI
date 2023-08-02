#include <bits/stdc++.h>
using namespace std;

int main()
{
    int F,R,dias=0, ind;
    cin>> F>>R;
    bool v[F] = {0},testD=0,testE=0;
    int r[R];

    for(int i =0;i<R;i++)
    {
        cin>>r[i];
        r[i]-1;
        v[r[i]]=1;
    }

    for(int i =0;i<R;i++)
    {
        ind=r[i]+1;
        while(ind < F)
        {
            if(v[ind])
            {
                cout<< "\n" << "primeira quebra" << "\n";
                break;
            }
            cout<< "\n" << "soma frente" << "\n";
            v[ind]=1;
            dias++;
            ind++;
        }
        ind =r[i]-1;
        while(ind >0)
        {
            if(v[ind])
            {
                cout<< "\n" << "seginda quebra" << "\n";
                break;
            }
            cout<< "\n" << "soma tras" << "\n";
            v[ind]=1;
            dias++;
            ind--;
        }
    }

    cout <<dias;


    return 0;
}
