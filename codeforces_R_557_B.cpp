#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m, mn = INT_MAX, mx = INT_MIN;

        cin >> n >> m;

        int a[n+1][m+1]= {}, b[n+1][m+1]={};

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> b[i][j];
            }
        }


        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {

                mx = max(a[i][j], b[i][j]);
                mn = min(a[i][j], b[i][j]);

                a[i][j] = mx;
                b[i][j] = mn;

            }
        }

        int check = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if((a[i][j] >= a[i][j+1] && j != m -1 )||( a[i][j] >= a[i+1][j] && i != n - 1))
                {
                    check = 1;
                   // cout << "check1" << endl;
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if((b[i][j] >= b[i][j+1] && j != m - 1 )|| (b[i][j] >= b[i+1][j] && i != n -1))
                {
                    check = 1;
                    //cout << "check2" << endl;
                }
            }
        }

        if(check)
        {
            cout << "Impossible" << endl;
        }

        else
        {
            cout << "Possible" << endl;
        }

    return 0;
}

