#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c=0,i;
    cin >> s;

    for(i=0;i<s.size();i++)
    {
        cout<<s[i];
        if(s[i]==1)
        {
        cout<<"nahid"<<endl;
            for(int j=i;j<s.size();j++)
            {
               if(s[j] == 0)
               c++;
             //  cout<<"nahid"<<endl;

            }
             break;
        }
       // cout<<c<<endl;


    }

   /* if(c >= 6)
    {
        printf("yes\n");
    }
    else
        printf("no\n");

*/

    return 0;
}
