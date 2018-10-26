
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,check = 0;

    cin >> n;

    int x[n+3];

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(x[i] == 1)
        {
            check = 1;
            break;
        }
    }

    if(check)
        cout << "HARD"<< endl;
    else
        cout << "EASY"<< endl;


    return 0;
}
