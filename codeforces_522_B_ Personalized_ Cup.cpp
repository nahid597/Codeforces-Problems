
#include <bits/stdc++.h>
using namespace std;



int main()
{

    string s;

    cin >> s;

    int sz = s.size();

    int row = 0, col=sz;

    while(1)
    {
        row++;

        if(col <= 20)
            break;



        if(col > 20)
        {
            col = col / row;
        }

       // cout << row << " col " << col << endl;



    }

    cout << sz << " " << row << endl;

    col = sz / row;

    if(sz % row != 0)
    {
        col += 1;
    }

    int i= 0;
    int p = col;

    cout << row << " " << col << endl;

    for(int j = 0; j < row; j++)
    {

        for( ; i < col; i++)
        {
            if(s[i] == '\0')
                cout << "*";
            cout << s[i] ;
        }

            col = col + p;


        cout << endl;
    }


    return 0;
}

