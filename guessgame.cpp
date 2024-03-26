#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
 int a,b,t=0;
 char s=' ';
do{

cout<<"Guess a number between 1 to 5 = ";
cin >>a;
t++;
if (t!=1){
           s='s';
        }
 b= rand()%5+1;
if(a==b){

    cout<<"You won the game in  "<<t<<" time"<<s<<" try"<<endl;}
    else {

        cout<<" wrong Try "<<t<<" time"<<s<<endl;
        cout<<"Random number is "<<b<<endl<<endl<<endl;
    }


}
while (a!=b);
    return 0;
}
