
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,l,p,d,m1,s1;

    cin >> n >> m >> l;

    int a[200000];
    int c = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        if(a[i] > l && a[i-1] <= l)
        {
                    //cout << c << endl;
            c++;

        }

    }



    while(m--)
    {
        cin >> m1;



        if(m1==0)
        {

              cout << c << endl;
              c = 0;

           /* for(int j = 0; j < n; j++)
                {
                    for(int k = j+1; k < n; k++)
                    {
                        if(a[j] == a[k])
                            c--;
                    }
                }*/



                // c = 0;



        }
           // c = 0;

         if(m1==1)
         {

              cin >> p >> d;

                 a[p-1] = a[p-1] + d;

                for(int i = 0; i < n; i++)
                {
                    if(a[i] > l && a[i-1] <= l)
                    {
                        c++;
                    }

                }


                   /* for(int j = 0; j < n; j++)
                    {
                        for(int k = j + 1; k < n; k++)
                        {
                            if(a[j] == a[k])
                                c--;
                        }
                    }*/



         }




    }


    return 0;
}
