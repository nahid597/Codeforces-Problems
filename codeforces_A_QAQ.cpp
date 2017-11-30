
#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    int p,c=0;

    cin >> s;

    p = s.size();

    for(int i = 0 ; i<p; i++)
    {
        if(s[i] == 'Q')
        {

            for(int j = i+1 ; j<p; j++)
            {
                if(s[j] == 'A')
                {

                        for(int k = j+1 ; k<p; k++)
                        {
                            if(s[k] == 'Q')
                            {
                                c++;

                            }

                        }

                }

            }

        }

    }

    printf("%d\n",c);

    return 0;


}
