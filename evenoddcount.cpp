#include<iostream>

using namespace std;

int main(){

int arr[5]={2,3,4,5},counteven=0, countodd=0 ;

for (int i=0;i<4;i++)

{
 if (arr[i]%2==0)
 {
   counteven++;
 }

 else {
    countodd++;
 }

}

cout<<"Total Even Number = "<<counteven<<endl;

cout<<"Total Odd Number = "<<countodd<<endl;

}
