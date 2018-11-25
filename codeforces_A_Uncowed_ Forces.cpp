
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int m1, m2, m3, m4, m5;

    int w1, w2, w3, w4, w5;

    int hs,hu , sum;

    int ans1,ans2,ans3,ans4,ans5;


    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    cin >> w1 >> w2 >> w3 >> w4 >> w5;

    cin >> hs >> hu;

    int s1,s2,s3,s4,s5;
    int r1,r2,r3,r4,r5;

    s1 = (0.3*500);
    r1 = ((1-(m1/250)) * 500 - w1*50);
    s2 = (0.3*1000);
    r2 = ((1-(m2/250)) * 1000 - w2*50);
    s3 = (0.3*1500);
    r3 = ((1-(m3/250)) * 1500 - w3*50);
    s4 = (0.3*2000);
    r4 = ((1-(m4/250)) * 2000 - w4*50);
    s5 = (0.3*2500);
    r5 = ((1-(m5/250)) * 2500 );


    ans1 = max( s1, r1);
    ans2 = max ( s2, r2 );
    ans3 = max ( s3, r3);
    ans4 = max ( s4, r4 );
    ans5 = max ( s5, r5);


    sum = ans1 + ans2 + ans3 + ans4 + ans5;

    sum = sum + hs*100 - hu * 50;

    cout << sum << endl;










    return 0;
}
