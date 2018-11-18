#include<bits/stdc++.h>
using namespace std;


int main(){
int n,a[10000],res=0;
    cin>>n;

    for(int i = 1; i <= n; i++){
        cin>>a[i];
    }
    a[++n] = 0;
    a[0] = 0;

    for(int i = 1; i <= n;i++){
        if(a[i] == 0 && a[i-1]==1 && a[i+1] == 1){
            a[i+1] = 0;
            res++;
        }
    }
    cout<<res<<endl;

    return 0;
}
