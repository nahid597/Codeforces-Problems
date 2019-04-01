#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin>>n;

    int store[n];

        for(int i=0; i<n; i++)
        {
            cin>>store[i];
        }

    sort(store, store+n);

        int Count = 1;

        bool p = true;

        vector<int>d,vec;

        vec.push_back(store[0]);

        for(int i=1; i<n; i++)
        {
            if(store[i]==store[i-1])
            {
                Count++;
                if(Count>2)
                {
                    p = false;
                    break;
                }
                d.push_back(store[i]);
            }
            else{
                vec.push_back(store[i]);
                Count=1;
            }
        }

        if(!p){
            cout<<"No" << endl;
        }

        else{
            cout<<"Yes" << endl;
            sort(d.begin(), d.end(), greater<int>());

            cout<<vec.size()<<endl;

            for(auto v : vec)
            {
                cout<<v<<" ";
            }

            cout << endl;

            cout<< d.size()<<endl;
            for(auto v : d)
            {
                cout<<v<<" ";
            }

            cout<<endl;
        }

    return 0;
}

