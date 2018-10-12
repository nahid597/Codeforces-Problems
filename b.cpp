#include<bits/stdc++.h>

using namespace std;

int main(){

    int nn, r, ar[1001];
    scanf("%d%d", &nn, &r);
    for(int i = 1; i <= nn; i++)
        scanf("%d", &ar[i]);
    int sum = 0, indx = 1, prev = -1000000;
    for(int i = 1; i <= nn; i++){

        if(ar[i] == 1){

            if(i-r+1>indx){

                if(prev == -1000000 || prev+r < i-r+1)
                {
                    printf("-1\n");
                    return 0;
                }
                sum++;
                indx = prev+r;
            }
            prev = i;
        }

    }
    if(indx<=nn){

        sum++;
        indx = prev+r;
    }
    if(indx<=nn)
        printf("-1\n");
    else
        printf("%d\n", sum);
    return 0;
}
