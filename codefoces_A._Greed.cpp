
#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long n ,v[100001], c[100001],sum1 = 0 , sum2 = 0;

        scanf("%I64d",&n);

        for(int i = 0;i < n;i++)
        {

            scanf("%I64d",&v[i]);

            sum1 += v[i];

        }

        for(int i = 0;i < n;i++)
        {

            scanf("%I64d",&c[i]);

        }


        sort(c,c+n);

            sum2 = c[n-2] + c[n-1];


       if(sum1 <= sum2)
            printf("YES\n");

            else
                printf("NO\n");














    return 0;
}
