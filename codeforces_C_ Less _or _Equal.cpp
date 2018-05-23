
#include<bits/stdc++.h>
using namespace std;

    int x[1000000];
    int k,p = 2,c = 0,n,check = 0,ma = 0;


int cheakpoint(int p)
{

    for(int i = 0; i< n; i++)
        {

                if(p <= x[i])
                c++;

                cout<< p <<" ";
                cout<< x[i]<<endl;

        }

        return c;

}

int main()
{

    cin>> n >> k;

    for(int i = 0; i< n; i++)
    {

        scanf("%d",&x[i]);

        if(ma < x[i])
            ma = x[i];
    }


    while(1)
    {
        c = 0;
       int s = cheakpoint(p);
       cout<< s<<endl;
       if(s == 0)
        break;

       if(s == k || ma == p )
       {
           check = 1;
          break;
       }


       p = p+1;

       //cout<< " s value "<<s<<endl;

    }
        if(check)
            printf("%d\n",p);
        else
            printf("-1\n");




    return 0;
}
