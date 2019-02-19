
#include <bits/stdc++.h>

using namespace std;

int main(){

    long long q, n, r1,r2,result = 0,a,b;

    cin >> q;

    while(q--){

        cin >> n >> a>> b;
        if(n == 1) {
            result = n * a;
        }

        else {
            r1 = n * a;
            r2 = ( n / 2 ) * b;
            if(n % 2 != 0)
            {
                r2 = r2 + a;
            }

            result = min(r1, r2);

        }

        cout << result << endl;

    }

    return 0;
}
