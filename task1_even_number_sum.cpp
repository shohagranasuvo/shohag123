#include <iostream>

using namespace std;

int main()
{
   int n,even_sum=0;
   cout<<"Enter a number ";
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       if(i%2==0)
       {
        even_sum=even_sum+i;

       }

   }

   cout<<"1 to "<<n<<" all even number sum is "<<even_sum<<endl;

   return 0;
}
