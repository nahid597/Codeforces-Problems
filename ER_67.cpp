#include<bits/stdc++.h>

using namespace std;

string s1, s2;

struct st {
   char ch;
   int pos;
   int plc;
} stc[200005];

bool cmp(st x, st y)
{
  if(x.pos < y.pos)  return true;
     return false;
}

int bs(char ch , int l , int r, int n)
{
   //cout << s1 << endl;
   while(l <= r)
   {
     int m = l + (r-l)/2;
     // cout << s1[m] << endl;
     if(ch == s1[m])
     {
        cout << m << endl;
        for(int i = 0; i < n; i++)
        {
          if(stc[i].ch == ch)
          {
             return stc[i].plc;
             //break;
          }
        }
       // return m;
     }

     if(ch < (s1[m]))
     {
        r = m - 1;
     }
     else
     {
        l = m + 1;
     }

   }

   return -1;
}

int main()
{
   freopen("codeforces_B.txt", "r", stdin);
   freopen("codefoces_Bout.txt", "w", stdout);
 // st stc;
  int n;
  cin >> n;

  //st stc[n+1];

  cin >> s1;

  for(int i = 0; i < n; i++)
  {
     stc[i].ch = s1[i];
     stc[i].pos = s1[i]-'a';
     stc[i].plc = i + 1;
  }

  sort(stc, stc + n , cmp);
  sort(s1.begin(), s1.end());

 cout << s1 << endl;
  int t;

  cin >> t;



  while(t--)
  {

    int mx = INT_MIN;
    cin >> s2;

     for(int i = 0; i < s2.size(); i++)
     {
        int p = bs(s2[i], 0, n-1, n);
        mx = max(mx, p);
     }


    cout << mx << endl;

  }


  return 0;
}
