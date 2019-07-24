#include<bits/stdc++.h>

using namespace std;

int sumofdigit(int n)
{
   int sum = 0;

   while(n)
   {
      sum += n % 10;
      n /= 10;
   }

   return sum;
}

int main()
{
  int n, a;

  cin >> n;


  while(1)
  {
    a  = sumofdigit(n);
    //9cout << a << endl;

    if(a % 4 == 0)
    {
       cout << n << endl;
       break;
    }

    else
      n++;
  }




}
