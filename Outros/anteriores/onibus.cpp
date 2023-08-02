#include<iostream>
#include <stack>
using namespace std;
int main()
{
    int A,N,B,P=-1;
    int top=-1;
    cin>> N>>A>>B;
    stack <int> pilha;
    int v[N-1][2];
    pilha.push(A);
    for(int i=0;i<N-1;i++)
        for(int j=0;j<2;j++)
            cin>>v[i][j];

    while(pilha.top()!=B)
    {

        if(top== pilha.top())
        {
            pilha.pop();
        }

        top=pilha.top();

        for(int i=0;i<N-1;i++)
            for(int j =0;j<2;j++)
            {

                if (i==P)
                    i++;

                    if (v[i][j]==pilha.top())
                    {
                        if(j==1)
                        {
                            if(v[i][j-1]!=pilha.top())
                            {
                                pilha.push(v[i][j-1]);
                                P=i;
                            }
                        }
                        else
                        {
                            if(v[i][j+1]!=pilha.top())
                            {
                                pilha.push(v[i][j+1]);
                                P=i;
                            }
                        }

                    }





            }

cout<< pilha.top();




    }
   // cout<< pilha.size();


    return 0;
}
