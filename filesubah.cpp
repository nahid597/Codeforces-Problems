#include<iostream>
#include<fstream>

using namespace std;

int main()
{
       ofstream shubah("nahid.txt", ios::app);
       if(!shubah)
       {
            cout << "can't open the file" << endl;
            return 0;
       }
       shubah << "Hello word" << endl;
       shubah << "nahid\nshubah" << endl;
       shubah.close();
	   ifstream nahid("nahid.txt");
	   if(!nahid)
       {
            cout << "can't open the file" << endl;
            return 0;
       }
	   string s;
	   while(getline(nahid, s))
	   {
			cout << s << endl;
	   }
	   nahid.close();
       return 0;
}
