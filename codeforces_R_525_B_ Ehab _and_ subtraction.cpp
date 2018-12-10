
#include<bits/stdc++.h>
using namespace std;
long long x[100005];

int main()
{

    long long n, k;

     cin >> n >> k;


        x[-1] = 0;

     for(int i = 0; i < n; i++)
     {
         cin >> x[i];
     }

     sort(x, x + n);

     long long num = 0;

     for(int i = 0; i < n; i++)
     {
         if(x[i] != x[i+1])
            x[num++] = x[i];

     }

   //  cout << num << endl;


     for(int i = 0; i < num && i < k; i++)
     {
         cout << x[i] - x[i-1] << endl;
     }

     for(int i = 0; i < k - num; i++)
     {
         cout << "0"<< endl;
     }



    return 0;
}
