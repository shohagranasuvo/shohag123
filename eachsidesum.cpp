#include <iostream>

using namespace std;

int main()
{
   int a ,b ;
   cout<<"Enter Row and cul = ";

   cin>>a>>b;
   double arr[a][b];

   for(int i=0;i<a;i++)
   {
       for(int j=0 ;j<b ;j++)
       { cout<<"Row "<<i+1<<" col "<<j+1 <<" = ";
           cin>>arr[i][j];
       }
   }
   double sum = 0;
   for(int i=0;i<a;i++)
   {
       for(int j =0 ;j<b;j++)
       {
         if ((i==0 && j<b)||(i==a-1 && j<b) || ((i>0 && i<a-1) && j==0 )||((i>0 && i <a-1) && j==b-1))
{
         sum+=arr[i][j];
}



       }
   }

   cout<<"input matrix "<<endl;
    for(int i=0;i<a;i++)
   {
       for(int j=0 ;j<b ;j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }

   cout<<"Each side element sum is    = "<<sum<<endl;


    return 0;
}
