#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,c = 0, ans = 0;

    cin >> n;

    int x[n+5];

    for(int i = 1; i <=  n; i++)
    {
        cin >> x[i];
    }

    x[n+1] = 1001;
    x[0] = 0;


    for(int i = 1; i <=  n; i++)
    {
        if(x[i] - x[i-1] == 1 && x[i+1] - x[i] == 1)
        {
            c++;
        }
        else
            c = 0;

        ans = max(ans,c);


    }

    cout << ans << endl;


    return 0;
}
