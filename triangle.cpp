#include<iostream>
using namespace std;
int main ()

{
    int a,b,c;

     cout <<"Please give three lenghts of triangle"<<endl;

     cin>>a>>b>>c;

     if(a==b&&b==c)

     {
         cout<<" the triangle is equilateral"<<endl;
     }

    else if((a==b && c!=a)||(a==c & b!=a)||(b==c && a!=b) )

     {
         cout<<" the triangle is  isosceles"<<endl;
     }

     else

     {
         cout<<"the triangle is scalene"<<endl;
     }

    return 0;




}
