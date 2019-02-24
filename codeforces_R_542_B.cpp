


#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Declaring vector of pairs
    vector< pair <int,int> > vect;


    int n;
    cin >> n;

    int arr[ n * 2 + 1] ;

    for(int i = 0; i < n * 2; i++)
    {
        cin >> arr[i];

    }

    for (int i=0; i<n*2; i++)
        vect.push_back( make_pair(arr[i],i) );

    sort(vect.begin(), vect.end());

    long long ans1 = vect[0].second , ans, ans2 = vect[1].second ;


   // cout << ans1 << endl;

    for(int i = 0; i < n * 2; i++)
    {
        if(i % 2 == 0 && i != (n*2)-2)
        {
            ans1 += abs(vect[i + 2].second - vect[i].second);
           // cout << "nahid " << i << endl;
        }

        else if(i % 2 != 0)
        {
            if(i != (n*2)-1)
            {
                  ans2 += abs(vect[i + 2].second - vect[i].second);
            //cout << "nahid " << i << endl;
            }


        }
    }

    ans = ans1 + ans2;
    cout <<  ans << endl;

    vect.clear();


    return 0;
}

