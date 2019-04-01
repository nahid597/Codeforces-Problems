#include <bits/stdc++.h>
using namespace std;

const int MAX=200001;


int main() {

    int n, t=0,f=0, x[MAX], y[MAX];
    cin>>n;
    int a[n+1];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        y[a[i]]=i;
        x[a[i]]++;
    }

    for(int i = 0; i < MAX; i++) {
        if(f<x[i]) {
            f=x[i];
            t=i;
        }
    }
    int op = n-f;
    int p=y[t];

    cout<<op<<endl;
    for(int i=p-1;i>=0;i--)
    {
        if(a[i]<t)
        {
            cout<<"1 "<<i+1<<" "<<i+2<<endl;
        }
        else if(a[i]>t)
         {
            cout<<"2 "<<i+1<<" "<<i+2<<endl;
        }
    }

    for(int i=p+1;i<n;i++)
    {

     if(a[i]>t)
        {
            cout<<"2 "<<i+1<<" "<<i<<endl;
        }
        else if(a[i]<t)
        {
            cout<<"1 "<<i+1<<" "<<i<<endl;
        }

    }


return 0;
}
