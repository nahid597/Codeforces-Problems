#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x[10],ans;
    for(int i = 0; i < 3; i++)
        cin >> x[i] ;
    sort(x , x + 3);

    if(x[1] + x[0] > x[2] )
        ans  = 0;
    else
        ans = x[2]-x[1]-x[0] + 1;

    cout << ans << endl;



    return 0;
}
