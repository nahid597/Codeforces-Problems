#include<bits/stdc++.h>

using namespace std;

int main()

{
    long long a , b , i , r , s1, s2 , p;
    int t , check;

    scanf("%d" , &t);

    while(t--)
    {
        check = 0;

        cin >> a >> b;

        s1 = a + b;
        s2 = a - b;

        if(s2 == 1)

        {

            p = sqrt(s1);

            for(i = 2; i <= p ; i ++ )
            {
                if(s1 % i == 0 )
                {
                   check = 1;
                   break;
                }

            }



            if(check == 1)
                printf("NO\n");
            else
            printf("YES\n");

        }

        else
        printf("NO\n");


    }



    return 0;
}
