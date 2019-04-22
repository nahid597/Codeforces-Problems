#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector < int > vec;

    int n, m;

    cin >> n >> m;

        int store[n+1][m+1];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin >> store[i][j];
            }
        }

        int x = 0;

        for(int i = 0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if((store[i][j]^x)>0)
                {
                    x = x ^ store[i][j];
                    vec.push_back(j+1);
                    break;
                }
            }
        }

        if(vec.size() == n)
        {
            cout << "TAK"<< endl;
            for(auto i : vec)
            {
                cout << i <<" ";
            }

            cout<<endl;
        }

        else
            cout<<"NIE"<<endl;

    return 0;
}

