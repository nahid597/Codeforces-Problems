

#include<bits/stdc++.h>
using namespace std;


void sortString(string &str)
{
   sort(str.begin(), str.end());
   cout << str << endl;
}


int main()
{
    string s;
    int n;

    cin >> n;
    char ch[n + 5];


    for(int i= 0; i < n; i++)
    {
        cin >> ch[i];
        s += ch[i];
    }

    sortString(s);
    return 0;
}
