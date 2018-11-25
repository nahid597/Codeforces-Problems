#include<bits/stdc++.h>

using namespace std;



int main()
{
    bool input[101], com[100];
    int n,r;
    cin >> n;

    memset(com, true, sizeof(com));
    while(n--)
    {
        cin >> r;

        int x[r+2];

        memset(input, false, sizeof(input));

        for(int i = 1; i <= r; i++)
        {
            cin >> x[i];

                input[x[i]] = true;

        }

        for(int i = 1 ; i<= 5; i++)
        {
            cout << com[i] << " " << input[i] << endl;
            com[i] = com[i] && input[i];
        }


    }

        for(int i = 1; i <= 5 ; i++)
        {
            if(com[i])
                cout << i << " ";
        }



    return 0;
}
