#include <iostream>
 #include<list>
 using namespace std;

 template <class j>
 int input (list<j> &li)
 {
     cout<<"Enter a size = ";
     int x;
     j ele;
     cin>>x;
     for (int i=0;i<x;i++)
     {
         cout<<"Enter element ";

         cin>>ele ;

         li.push_back(ele);
     }
 }
 template <class k >
 int inputByIterator (list <k> &lil)
 {
     cout<<"Enter a size = ";
     int x;
     cin>>x;

     k ele;

   typename  list <k> :: iterator p=lil.begin();
 for (int i=0;i<x;i++)
 { cout<<"Input element ";

     cin>>ele;
     *p=ele;
     ++p;
 }


 }



 template <class t>

 void display (list<t> &li)
 {
    typename list<t> :: iterator p ;
     p=li.begin();
     for (p=li.begin();p!=li.end();p++)
     {
         cout<<*p<<" ";
     }
   cout<<endl;
 }




int main()
{
  list<int> list1;

  input(list1);

  list1.remove(4);
  display(list1);

  list<int> list2;

  input(list2);
  display(list2);

  list1.sort();

  display(list1);
  list1.pop_back();
  display(list1);
  list1.pop_front();
  display(list1);

  list1.merge(list2);

  display(list1);

  list1.reverse();
  display(list1);









    return 0;
}
