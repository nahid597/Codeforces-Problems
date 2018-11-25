
#include <bits/stdc++.h>
using namespace std;


int add(int n){
    cout <<" check " << (n&1) << endl;
    if(n&1)
        return -(++n/2);
    return n/2;
}

int main(){

    int n,l,r,ans;

    cin>>n;

        while(n--){
            cin>>l>>r;
            cout << add(r) << "  " << add(l-r);
            ans = add(r) - add(l-1);
            cout<<ans<<endl;
        }



    return 0;
}
