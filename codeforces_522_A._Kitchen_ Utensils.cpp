
#include<bits/stdc++.h>

using namespace std;

int main()
{
    map < int , int > mp;

    int n,k;

    cin >> n >> k;

    int x;


    for(int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }

    int lr = 0;

    for(auto i: mp){

        if(i.second>lr)
            lr = i.second;
    }

    cout << lr << endl;

    int x1 = lr/k;
    cout << lr % k << endl;
    if(lr%k != 0)
    {
       x1++;
    }

    x1 *= k;

    int sum = 0;

    for(auto i: mp){
        cout << x1 << " " << i.second << endl;
        sum += x1-i.second;
    }

    cout << sum << endl;




    return 0;
}
