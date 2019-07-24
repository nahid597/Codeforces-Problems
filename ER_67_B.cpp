#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    string s;

    cin>>n;

        cin >> s;

        cin >> m;

        int al[26][s.size()+5];
        int fk[30] = {0};

        for(int i=0; i<s.size(); i++)
        {
            int p = s[i] - 'a';
            fk[p]++;
            al[p][fk[p]] = i + 1;
        }


        string a;

        while(m--)
        {
            int Count[26] = {};

            cin >> a;

            int fh[30] = {0};

            int mx = INT_MIN;

             for(int i=0; i<a.size(); i++)
            {
                int p = a[i] - 'a';
                fh[p]++;
                mx = max(mx, al[p][fh[p]]);
            }


            cout<<mx<<endl;
        }

    return 0;
}

