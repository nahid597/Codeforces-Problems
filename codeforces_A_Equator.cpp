
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,x[200003],sum1 = 0, sum2  =0,c = 0,i ;

    scanf("%d",&n);

    for( i = 0; i< n; i++)
    {
        scanf("%d",&x[i]);

        sum1 += x[i];
    }

    int p = sum1 / 2;
    if(sum1 % 2 != 0)
        p = p + 1;

    for( i = 0; i< n; i++)
    {

       if(p <= sum2)
        break;
       sum2 += x[i];
       //c++;

    }

    printf("%d\n",i );

    return 0;
}
