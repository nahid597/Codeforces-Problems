#include<bits/stdc++.h>

using namespace std;

int main(){

    long long nn, m,minn,i;

    cin >> nn >> m;

    if(2 * m >= nn)
        minn = 0;
    else
        minn = nn - 2 * m;

    for(i = 1; i <= nn; i++){

        if(i*(i-1)/2>=m)
            break;
    }
    i--;
    if(i*(i-1)/2<m)
        i++;
    cout << minn  << " "<< nn-i << endl;
    return 0;
}
