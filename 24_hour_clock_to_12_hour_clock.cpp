#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{   int test ;
cin>>test;
 cin.ignore();

while (test!=0)
{

string time;

getline(cin,time);

string c ,am="AM",pm="PM",tem ;

   tem=am;

string hour = time.substr(0,2);
string minute=time.substr(3,2);


 int h = stoi (hour);

   if(h==0)
   {
     h= 12;
   hour=to_string(h);

   }

   else if(h==12)
   {
       tem=pm;
     hour=to_string(h);
   }
   else if(h>12 && h<22)
   {
       h-=12;
       hour= "0"+to_string(h);

       tem=pm;
   }

   else if (h>=22)
   {
       h-=12;
       hour=to_string(h);
       tem=pm;
   }
   cout<<hour<<":"<<minute<<" "<<tem<<endl;






 test--;
}
    return 0;
}
