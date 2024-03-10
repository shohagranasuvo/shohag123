#include<iostream>
#include <string>

using namespace std;

int main()
{
    char x [2]= {'X','O'};


    for (int i=1;i<5;i++){
    for (int j=1;j<7;j++)
    {
        if (i%2!=0 && j%2!=0 )
    {


        cout<<x[0]<<" ";
    }

        else if (i%2!=0 && j%2==0)
        {
            cout<<x[1]<<" ";
        }

        if (i%2==0 && j%2!=0)

        {
            cout<<x[1]<<" ";
        }

        else if(i%2==0 && j%2== 0)

        cout<<x[0]<<" ";

    }
 cout<<endl;
    }


return 0;
}
