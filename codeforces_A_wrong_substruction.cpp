
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,k,p,q;

    scanf("%d%d",&n,&k);

    for(int i = 0; i< k; i++)
    {
        p = n % 10;
        if(p != 0)
        {
            n = n - 1;

        }
        else
            n = n / 10;
    }

    printf("%d",n);



    return 0;
}
