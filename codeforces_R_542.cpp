
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int x[n+2], neg = 0;;

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];

        if(x[i] < 0)
        neg++;

    }

    if(neg >= (n + 1) / 2)
    {
      cout << "-1" << endl;
      return 0;
    }

    int d = 1, ans = 0;

    int st = n / 2;

    if(n % 2 != 0)
       st = st + 1;


       for(int d = 1; d <= n; d++)
       {
           ans = 0;
            for(int i =  0; i< n; i++)
           {
                float s = (float)x[i] / d;

                //cout << s << " ";

                if(s > 0)
                  ans++;
           }

           if(ans >= st)
           {
                cout << d << endl;
                break;
           } else {
               cout << "0" << endl;
               break;
           }

       }




    return 0;
}
