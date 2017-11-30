#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c=0,i;
    cin >> s;

    for(i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            for(int j=i;j<s.size();j++)
            {
               if(s[j] == '0')
               c++;

            }
             break;
        }
    }

    if(c >= 6)
    {
        printf("yes\n");
    }
    else
        printf("no\n");



    return 0;
}
