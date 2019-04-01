#include <bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--)
    {
        string s;

        cin>>s;

        bool diverse = true;

        sort(s.begin() , s.end());

        int n = s.size();

        for(int i=1; i<n; i++){
            if(s[i] == s[i-1] + 1){
                diverse = true;

            }

            else
            {
                diverse = false;
                 break;
            }
        }

        if(diverse)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

    return 0;
}

