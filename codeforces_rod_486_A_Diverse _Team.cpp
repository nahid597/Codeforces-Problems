
#include<bits/stdc++.h>
using namespace std;

int n,k,f[110],ans[110];
int main(){

    int x[110],c = 0;

	cin >> n >> k;

	for(int i=1;i<=n;i++){
		cin >> x[i];

		if(f[x[i]]==0){
			f[x[i]]=1;
			ans[c]=i;
			c++;
		}
	}

	if(c >= k)
    {
        cout << "YES" << endl;
        for(int i = 0; i< k; i++)
        {
            cout << ans[i] << " ";
        }
    }
    else
        cout << "NO" << endl;

	return 0;
}
