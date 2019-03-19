
#include <bits/stdc++.h>

using namespace std;

int main(){

     int n;

     cin >>  n;

     int x[n+1];

     for(int i = 0; i < n; i++)
     {
        cin >> x[i];
     }

     int c = 1,s = 0;

     for(int i = 0; i <  n - 1; i++)
     {
        if(x[i] == x[i+1] && x[i] == 1)
        {
            c++;
           // cout << "nahid" << c << endl;
            s = max(s,c);
        }

        else
        {

           c = 1;
        }
     }

   //  cout << s << endl;

     int q = 0;

     for(int i = 0; i < n; i++)
     {
        if(x[i] == 1)
          q = 1;
     }

     for(int i = 0; i < n; i++)
     {
        if(x[n-1] == x[i] && x[n-1] == 1)
          c++;
        else
          break;
     }

     s = max(s,c);

     if(!q) s = 0;

     cout << s << endl;


    return 0;
}
