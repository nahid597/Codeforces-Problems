#include<bits/stdc++.h>

using namespace std;



int main(){

    long long  n, i,r,sum = 0;

    cin >> n;

    for( i=1; i*i<=n; i++){

        if(n%i==0) sum +=2;
    }
     r = sqrt(n);
    if(r*r==n)
    {
       sum--;
    }

    cout << sum << endl;

    return 0;
}
