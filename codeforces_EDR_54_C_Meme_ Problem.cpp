
#include <bits/stdc++.h>
using namespace std;

#define Boost ios_base::sync_with_stdio(0); cin.tie(0)
const long double eps = 1e-12;
const long double EPS = 1e-6;

int main() {
Boost;
    int t;
    cin>>t;
    long double n,l,r,m;
    while(t--){
        cin>>n;
        l=0.0;
        r=n;
        if(!n){
            cout<<"Y"<<" 0.000000000"<<" 0.000000000"<<endl;
        }
        else{
            while(r-l>=eps){
                m=(l+r)/2.0;
                if(m*(n-m)-n>eps) r=m-eps;
                else if(n-m*(n-m)>eps) l=m+eps;
                else break;
            }
            if(fabs(m*(n-m)-n)<=EPS){
                cout<<"Y "<< fixed<<setprecision(9)<<max(m,n-m) <<" "<<fixed<<setprecision(9)<<min(m,n-m)<<endl;
            }
            else cout<<"N"<<endl;
        }
    }

return 0;
}
