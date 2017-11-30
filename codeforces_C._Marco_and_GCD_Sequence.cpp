
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,x[1000000],c=0,max=0;

    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        scanf("%d",&x[i]);

    }

    for(int i =0;i<n;i++)
    {
         for(int j =i;j<n;j++)
        {

            if(x[i]%x[j]==0)
                c++;
                cout<<x[i];

        }

       /* if(c > max)
        {
            printf("%d\n",c);

            for(int k =i+1;k<n;k++)
            {
               printf("%d\n",x[k]);
            }
            c=max;
        }*/

    }

    if(c<=max)
    {
        printf("-1\n");
    }



    return 0;
}
