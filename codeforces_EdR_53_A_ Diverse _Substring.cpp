#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,Max=0;
    cin >> n;
    char ch[n+3];

    for(int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }


    for(int i = 1; i < n; i++)
    {
        if(ch[i-1] != ch[i])
        {
            cout << "YES" << endl;
            cout << ch[i-1] << ch[i] << endl;
            return 0;
        }
    }

        cout << "NO" << endl;



    return 0;
}
