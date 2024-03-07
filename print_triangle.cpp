#include <iostream>

using namespace std;
int main()
{
int n=6;



for(int row= 1; row<=n; row++)

{
    for(int col=n;col>row;col--)
    {


        cout<<" ";

    }
     for(int i=n-1;i<(2*row)+1;i++)

     cout<<"*";

cout<<endl;
}

return 0;


}

