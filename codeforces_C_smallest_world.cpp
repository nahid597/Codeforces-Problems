
#include<bits/stdc++.h>
using namespace std;

#define SZ(x) ((int)(x).size())

int main()
{
    //Boost;
    string str;
    while(cin>>str){
        str.push_back('x');
        int f=1;
        int ans[SZ(str)-1];
        for(int i=SZ(str)-2;i>=0;i--) {
            if(f && str[i]=='b') ans[i]=0;
            else{
                f=0;
                if(str[i]==str[i+1]) ans[i]=0;
                else ans[i]=1;
            }
        }

      //  #define rep(i, n) for(int i=0; i<(n); i++)

        for(int i = 0; i < SZ(str)-1 ; i++)
            if(i) cout<<" "<<ans[i];
            else cout<<ans[i];
        cout<<endl;
    }




    return 0;
}
