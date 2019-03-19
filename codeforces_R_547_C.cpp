#include <bits/stdc++.h>
using namespace std;


int main() {

    int n,l=1,m,flag;

    cin>>n;

    int q[n+1],c[n+1],number[n+1],r=n;

    for(int i = 0; i < n-1 ; i++)
    {
        cin>>q[i];
    }

    while(l<=r){

        m=(l+r)/2;

        memset(c, 0 , sizeof(c));

        c[m]++;

        number[0]=m;

        flag=1;
        for(int i = 0; i < n-1 ; i++)
        {
            number[i+1]=number[i]+q[i];
            if(number[i+1]<1)
            {
                l=m+1;
                 break;
            }
            else if(number[i+1]>n)
             {
                r=m-1;
                 break;
            }
            else if(c[number[i+1]])
             {
                cout<<"-1"<<endl;
                return 0;
            }
            else
            {
                flag++;
                c[number[i+1]]++;
             }
        }
        if(flag==n)
         {
            for(int i = 0; i < n; i++){
                cout<<number[i]<<" ";
            }
            cout<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;

return 0;
}
