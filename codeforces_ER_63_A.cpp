#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    string s;

    cin >> n ;
    cin >> s;
        int Check = 0 , x[n+1] , k = 0;

        for(int i=1; i<n; i++)
        {
            if(s[i]<s[i-1])
            {
                //cout<<"YES\n";
                //cout<<i<<" "<<i+1<<endl;
                Check = 1;
                //break;
                x[k++] = i;
            }

        }

        if(!Check){
            cout<<"NO\n";
        }
        else {
            cout<<"YES\n";
            cout << x[0] << " " << x[k-1] + 1;
        }

    return 0;
}
