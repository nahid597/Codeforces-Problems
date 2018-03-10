#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c , b =0;
    char x[500][500];
    scanf("%d%d",&r,&c);

     for(int i = 0; i< r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> x[i][j];
        }

    }

    for(int i = 0; i< r; i++)
    {
        for(int j = 0; j < c; j++)
        {

            if(x[i][j] == 'S' && (x[i][j+1] == 'W' || x[i+1][j] =='W'))
            {
                b = 1;
                break;

            }


            else
            {

                if(x[i][j] == '.')
                {
                    x[i][j] = 'D';

                }

            }

        }

    }

    if(!b){

        printf("Yes\n");

         for(int i = 0; i< r; i++)
    {
        for(int j = 0; j < c; j++)
        {

            cout<< x[i][j];
        }

        cout<< endl;

    }

    }

    else
        printf("No\n");



    return 0;
}
