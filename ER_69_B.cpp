#include <bits/stdc++.h>
using namespace std;

const int MAXN = 3e5+3;
vector<int> a(MAXN);
int n, cnt;
signed main(){
	cin >> n;
	for(int i=1; i<= n; ++i) cin >> a[i];
	for(int i=1; i<= n; ++i) cnt += (a[i] > a[i-1] && a[i] > a[i+1]);

	if(cnt==1) cout << "YES\n";
	else cout << "NO\n";
}
