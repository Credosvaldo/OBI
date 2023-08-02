#include <iostream>
using namespace std;
int main ()
{
    int v[15][15];
    int resultado=-1;
    for (int i =0;i<15;i++)
        for (int j=0; j<15;j++)
            cin>> v[i][j];

    for (int i =0;i<15;i++)
        for (int j=0; j<15;j++)
        {
            if(resultado==-1)
            {
                if(v[i][j]==1)
                {
                    for(int k=0;i<5;k++)
                    {
                        if(v[i+k][j]!= 1)
                        {
                            break;
                        }
                        else if(k=5)
                        {
                            resultado=1;
                            break;
                        }
                    }

                    for(int k=0;i<5;k++)
                    {
                         if(v[i][j+k]!= 1)
                        {
                            break;
                        }
                        else if(k=5)
                        {
                            resultado=1;
                            break;
                        }
                    }

                    for(int k=0;i<5;k++)
                    {
                        if(v[i+k][j+k]!= 1)
                        {
                            break;
                        }
                        else if(k=5)
                        {
                            resultado=1;
                            break;
                        }
                    }

                }

                if(v[i][j]==2)
                {
                    for(int k=0;i<5;k++)
                    {
                        if(v[i+k][j]!= 2)
                        {
                            break;
                        }
                        else if(k=5)
                        {
                            resultado=2;
                            break;
                        }
                    }

                    for(int k=0;i<5;k++)
                    {
                         if(v[i][j+k]!= 2)
                        {
                            break;
                        }
                        else if(k=5)
                        {
                            resultado=2;
                            break;
                        }
                    }
                    for(int k=0;i<5;k++)
                    {
                        if(v[i+k][j+k]!= 2)
                        {
                            break;
                        }
                        else if(k=5)
                        {
                            resultado=2;
                            break;
                        }
                    }


                }
            }




        }


        cout<< resultado;




    return 0;
}
