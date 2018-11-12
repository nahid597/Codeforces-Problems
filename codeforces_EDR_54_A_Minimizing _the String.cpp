#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    string s;
    cin >> s;
   // bool f = false;
    int f = 0;
    for(int i = 0; i < n-1; i++){

        if( f || s[i]<=s[i+1])
            cout << s[i];
        else
            f = 1;
    }
    if(f) cout << s[n-1];
    return 0;
}
