#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
        cin >> s;
        int Count = 0,sz;
        sz = s.size();
        for(int i = 0; i < s.size(); i++)
        {
            if((s[i]-48)%2 == 0)
                Count += i+1;
        }
        cout << Count << endl;
    return 0;
}
