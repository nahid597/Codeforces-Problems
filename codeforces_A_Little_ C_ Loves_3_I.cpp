
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,p , q;
    cin >> n;

    p = n / 3;
    q = n % 3;

    a = 1;

    if(q==0)
    {
        b = 1;
    }

    else
        b = 2;

    c = n - a - b;

    cout << a << " " << b << " " << c << endl;




    return 0;
}
