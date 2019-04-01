#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i=0; i<(n); i++)
#define forv(i,v) rep(i,SZ(v))
#define SZ(x) ((int)(x).size())


int main()
{

    int n,a,sum=0,odds=0,evens=0;

    cin>>n;

    vector < int > veco, vece;

    for(int i = 0; i <  n; i++)
    {
        cin>>a;

        if(a % 2 != 0 )
        {
            veco.push_back(a);
            odds++;
        }
        else{
            vece.push_back(a);
            evens++;
        }
    }

    if(evens) sort(vece.begin(), vece.begin());
    if(odds) sort(veco.begin(), veco.end());


    while(odds && evens)
    {
        veco.pop_back();
        vece.pop_back();
        odds--;
        evens--;
    }
    if(evens>odds)  vece.pop_back();
    else if(odds>evens) veco.pop_back();

   /* for(auto i = veco.cbegin(); i != veco.cend(); i++)
    {
        sum+=i;
    }

    for(auto i = vece.cbegin(); i != vece.cend(); i++)
    {
        sum+=i;
    }*/

    forv(i,veco) sum+=veco[i];
    forv(i,vece) sum+=vece[i];

    cout<<sum<<endl;

return 0;
}
