#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

typedef pair<int, int> PII;
typedef map<int, int> MII;
typedef priority_queue<int> P_QI;
typedef priority_queue<string> P_QS;
typedef vector<int> VI;
typedef vector<long long> VLL;
typedef vector< int > :: iterator $$;

#define SET(arr) memset(arr, -1, sizeof(arr))
#define CLR(arr) memset(arr, 0, sizeof(arr))

#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

#define $ vector< int > :: iterator
#define m_p make_pair
#define p_b push_back
#define rep(i, n) for(int i=0; i<(n); i++)
#define forn(i, n) for (int i = 1; i <=(int)(n); ++i)
#define forab(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
#define forba(i, b, a) for (int i = (int)(b); i >= (int)(a); --i)

#define forv(i,v) rep(i,SZ(v))
#define forit(i,s) for(auto i=(s).begin();i!=(s).end();++i)

#define Boost ios_base::sync_with_stdio(0); cin.tie(0)
#define all(a) (a).begin(), (a).end()
#define SZ(x) ((int)(x).size())
#define F first
#define S second
#define _ <<" "<<
#define CS(i) cout<<"Case "<<(int)(i)<<": "

const int MOD = 1e9+7;
const int inf = 1e9+9;
const long long INF = 1e18+3;
const ld eps = 1e-9;
const ld PI=acos(-1.0);
const ld E=2.71828182845904523536;

int main() {
Boost;
//READ("in.txt");
//WRITE("out.txt");
int n,m,x;
ll res=0,ans=0,sum=1,M=998244353;
    string a,b;
    cin>>n>>m;
    m--;
    cin>>a>>b;
    for(int i=m;i>=0;i--){
      x=0;
      if(n)
        x=a[--n]-'0';
      x=(x*sum)%M;
      sum=(sum*2)%M;
      ans=(ans+x)%M;
      if((int)(b[i]-'0')) res=(res+ans)%M;
    }
    cout<<res<<endl;

return 0;
}
