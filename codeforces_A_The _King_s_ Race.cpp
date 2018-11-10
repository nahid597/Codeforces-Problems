#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long x , y,n ;
    cin >> n;

    cin >> x >> y;

    if((x+y-2) <= n + n - x - y )
        cout << "White"<< endl;
    else
    cout << "Black"<< endl;


    return 0;
}
