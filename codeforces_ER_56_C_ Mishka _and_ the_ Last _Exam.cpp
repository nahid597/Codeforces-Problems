
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long  a[n+2],b[n/2+1],Max=0,deffernce;
    a[0]=0;
    b[0]=0;
    for(int i = 1 ; i <= n/2; i++){
        cin>>b[i];
        Max=max(b[i],Max);
    }
    a[n+1]=Max;
    for(int i = 1 ; i <= n/2; i++){
        a[i]=a[i-1];
        a[n-i+1]=(b[i]-a[i]);
        if(a[n-i+1]>a[n-i+2]) {

            deffernce=a[n-i+1]-a[n-i+2];
            a[i]+=deffernce;
            a[n-i+1]=a[n-i+2];

        }
    }
    for(int i = 1 ; i <= n; i++)
        if(i!=n) cout<<a[i]<<" ";
        else cout<<a[i]<<endl;

return 0;

}
