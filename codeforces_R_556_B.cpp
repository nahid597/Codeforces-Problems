
#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;

    cin>>n;

    char x[n+1][n+1];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> x[i][j];
        }
    }

    for(int i = 1; i < n-1; i++)
    {
        for(int j = 1; j < n-1; j++)
        {
            if(x[i][j] == '.')
            {
                if(x[i+1][j] == '.' && x[i][j+1] == '.' && x[i-1][j] == '.' && x[i][j-1] == '.')
                {
                    x[i+1][j] = 'p';
                    x[i][j+1] = 'p';
                    x[i-1][j] = 'p';
                    x[i][j-1] = 'p';
                    x[i][j] = 'p';
                }
            }
        }
    }
    int check = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(x[i][j] == '.')
            {
               check =  1;
               break;
            }
        }
    }

    if(check)
    {
       cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;


    return 0;
}
