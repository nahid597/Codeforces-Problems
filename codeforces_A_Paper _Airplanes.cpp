
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int k,n,s,p,co = 0,co1 = 0,s1 = 0,s2;

    scanf("%d%d%d%d",&k,&n,&s,&p);

    s2 = p;

    if(s >= n)
    {
       while(1)
       {
           if(p >= k )
            break;

            co1++;
         p += s2;
       }

       printf("%d",co1 + 1);
    }


    else
    {
        while(1)
        {
            if(s >= n)
                break;

           co++;
          // cout<< p<<endl;

           if(p >= k)
           {
              // cout<< s<<endl;
               s += s1;
               p = p - k;
               s1 = s;
           }

           else
            p += s2;
        }

    printf("%d",co - 1);
    }

    return 0;

}
