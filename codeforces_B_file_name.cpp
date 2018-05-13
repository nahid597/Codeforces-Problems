#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c = 0,co = 0;
    cin >> n;
    char ch[n+3];

    for(int i = 0; i< n; i++)
    {
        cin >> ch[i];
    }

    for(int i = 0; i< n; i++)
    {
       if(ch[i] == 'x')
            c++;

       if(c > 2){
        c = c - 1;
        co++;
       }

       if(ch[i] != 'x')
        c = 0;
    }

    cout<< co << endl;



    return 0;
}
