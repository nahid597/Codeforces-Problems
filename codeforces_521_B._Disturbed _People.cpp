#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c = 0;
    cin >> n;
    int x[n+5];
    //x[0] = 0;
    x[n+1] = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for(int i =1; i < n-1; i++)
    {
        if(x[i-1] == 1 && x[i] == 0 && x[i+1] == 1)
        {
            c++;
            x[i+1] = 0;
        }
    }

    cout << c << endl;






    return 0;
}
