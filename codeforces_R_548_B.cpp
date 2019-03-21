#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;

        cin>>n;
        long long x[n];

        for(int i=0; i<n; i++)
        {
            cin>>x[i];
        }


        long long  sum = x[n-1];

        for(int i = n - 1; i >= 1; i--)
        {
            //cout << x[i] << " " << x[i-1] << endl;
            if(x[i] > x[i - 1])
            {
                sum += x[i-1];
            }

            else
            {
                x[i-1] = x[i] - 1;
                if(x[i-1] < 0)
                   x[i-1] = 0;

               sum += x[i-1];
            }
        }



        cout<<sum<<endl;

    return 0;
}

