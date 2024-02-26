#include <bits/stdc++.h>
 using namespace std;
int main() {
 double a,b,c;

 cin>>a>>b>>c;

 if ((a>b && a>c)||( a>c && c==b))

 {
     cout<<a<<" eh o maior"<<endl;

 }

 else if ((b>a && b>c)||( b >a && a==c))

 {
     cout<<b<<" eh o maior"<<endl;

 }

 else if ( (c>a && c>b)||(c>a&& a==b))

 {
     cout<<c<<" eh o maior"<<endl;

 }

 else {

    cout<<"all are equal"<<endl;
 }






    return 0;
}
