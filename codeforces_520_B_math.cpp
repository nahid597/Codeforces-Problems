
#include <bits/stdc++.h>
using namespace std;

vector<int>f;
int a;

int fac(int n){
    int fr, x=-1;
    f.clear();

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            fr = 0;
            a*=i;
            while(n%i==0){
                n/=i;
                fr++;
            }

            f.push_back(fr);
            x = max(x, fr);
        }
    }

    if(n!=1){
        f.push_back(1);
        x = max(x, 1);
        a*=n;
    }

    return x;
}

int main(){

    int n;

        while(cin>>n){
        if(n==1){
            cout<<1<<" "<<0<<endl;
            continue;
        }

        a = 1;

        int x = fac(n);
        int xx = ceil((long double)log2(x));

        x = pow(2,xx);

        bool s = true;

        for(int i=0; i<f.size(); i++){
            if(f[i]!=x){
                s = false;
            }
        }

        if(!s){
            xx++;
        }

        cout<<a<<" "<<xx<<endl;
        }
    return 0;
}
