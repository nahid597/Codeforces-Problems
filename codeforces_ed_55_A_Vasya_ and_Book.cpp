
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,d, t;

    cin >> t;

    while(t--)
    {
        int c = 0, check = 0;
        cin >> n >> x >> y >> d;

        int p = x;

        while(1)
        {
           // c = 0;

            if(x == y)
            {
                //cout << "nahid" << endl;
                break;
            }
            if(x < 0)
            {
                check = 1;
                break;
            }

               if(x < y)
                {
                    while(1)
                    {
                        x = x + d;

                        c++;
                        if(x >= y)
                            break;
                    }
                }
               // cout << c << endl;
              //  cout << x << " " << y << endl;

                if(x > y && x != y)
                {
                    check = 1;
                    x = p;
                    while(1)
                    {
                        x = x - d;

                        c++;
                        if(x == 0)
                        {
                            x = 1;
                            break;
                        }
                        if(x < 0)
                        {
                            c = 0;
                            check = 1;
                            break;
                        }
                    }

                    //c = c -1;
                }


                //cout << x << endl;


       }
        if(check)
         cout << c -1 << endl;
         else
            cout << c<< endl;


    }





    return 0;
}
