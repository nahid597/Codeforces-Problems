#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount(n) __builtin_popcount(n)

#define ma 100050

bool notP[ma];

vector<long long>p;

void seive(){
    notP[0] = notP[1] = true;

    for(long long i=2; i*i< ma; i++){
        if(!notP[i]){
            for(long long j=i*i; j<ma; j+=i){
                notP[j] = true;
            }
        }
    }

    for(long long i=0; i<ma; i++)
        if(!notP[i])
            p.push_back(i);

    return;
}

bool isPrime(long long n){
    if(n<ma){
        return !notP[n];
    }

    for(long long i=0; i<p.size() && p[i]*p[i]<=n; i++)
        if(n%p[i]==0)
            return false;

    return true;
}

long long fvalue(long long n){
    for(long long i=0; i<p.size(); i++){
        if(n%p[i]==0)
            return p[i];
    }
}

long long Solve(long long n){
    if(isPrime(n))
        return 1;

    long long v = fvalue(n);

    return (n-v)/2 + 1;
}

int main(){
    FasterIO;
    seive();

    long long n;

    while(cin>>n){

        long long ans = Solve(n);

        cout<<ans<<endl;
    }

    return 0;
}
