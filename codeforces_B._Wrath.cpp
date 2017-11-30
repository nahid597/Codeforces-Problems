
#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long n,x[1000000];
    int c =0;

    scanf("%I64d",&n);


    for(int i =0;i<n;i++)
    {
         scanf("%I64d",&x[i]);

    }


    for(int i =0;i<n;i++)
    {

        for(int j =i;j<n;j++)
        {

            if(x[j] < i && x[j] >= 0 )

            c++;
        }


    }

    printf("%d\n",c);




    return 0;
}
