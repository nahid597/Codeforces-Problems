
#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n, m, k,sum = 0, result,div, rem, sub;

     cin>>n>>m>>k;

        long long d[n + 1];

        for(long long i=0; i<n; i++)
        {

            cin>>d[i];
        }

        sort(d, d+n);

        div = m / (k + 1);
       // rem = m / k + 1;
        sub = m - div;

       // cout << div << endl;

       sum = d[n-1]* sub + d[n-2]*div;


        cout << sum << endl;






    return 0;
}
