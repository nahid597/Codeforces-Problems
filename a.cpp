#include<bits/stdc++.h>

using namespace std;

int main(){


    int t, d, v, l, r;
    scanf("%d", &t);
    while(t--){

        scanf("%d%d%d%d", &d, &v, &l, &r);
        int total = d/v;
        int tmp = r/v - l/v;
        if(l%v==0)
            tmp++;
        printf("%d\n", total-tmp);
    }
    return 0;
}
