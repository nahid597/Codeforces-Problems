#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , c = 0;

    set < char > s;
    cin >> n;

    char ch;

    for(int i = 0; i< n; i++)
    {
        cin >> ch;
        s.insert(toupper(ch));
    }


    if(s.size() == 26)
        printf("YES\n");
    else
     printf("NO\n");


 return 0;
}
