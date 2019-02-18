#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,result = 0, k = 0;

    cin >> n;

        vector < long long > vec(n);

        long long l = -1;

        for(int i = 0; i <= n-1; i++)
        {
            cin >> vec[i];

            if(vec[i]>l){

                l = vec[i];
            }
        }


        for(auto i: vec)
        {
            if(i != l){

                if(result<k)
                    result = k;
                k = 0;
                continue;
            }
            k++;
        }
        if(result<k)
            result = k;
        cout << result << endl;

    return 0;
}
