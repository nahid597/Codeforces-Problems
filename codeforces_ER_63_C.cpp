#include <bits/stdc++.h>
using namespace std;


int main()
{

    vector<long long>vec;

    int n, m, id = -1;

    cin >> n >> m;

        long long som[n], s[m];

        for(int i=0; i<n; i++)
        {
            cin>>som[i];
        }


        for(int i=0; i<m; i++)
        {
            cin>>s[i];

        }

        for(int i=1; i<n; i++)
        {
            vec.push_back(som[i]-som[i-1]);
        }

        long long gc = vec[0];

       for(int i=1; i<vec.size(); i++)
        {
            gc = __gcd(gc, vec[i]);
        }


        for(long long i=0; i<m; i++)
        {
            if(gc%s[i]==0)
            {
                id = i+1;
                break;
            }
        }

        if(id == -1)
        {
            cout<<"NO\n";
        }

        else
        {
            cout<<"YES\n";
            cout<<som[0]<<" "<<id<<endl;
        }

    return 0;
}

