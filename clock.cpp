#include <iostream>
#include<string>
using namespace std;
 main()
{
    double num ;

    cout<<"Enter your  Number = ";

    cin>> num;
   string choice ;

    cout<<"What you want to do ? \n For floor type 'floor' \n For ceiling type 'ceiling'    "<<endl;

    cin>> choice;


    if  (choice == "ceiling" && num!=(int)num && num>0 )

       {

        num =(int)num+1
        ;

        cout<<" Ceiling value is  = "<<num<<endl;}

        else if (choice == "floor" && num !=(int)num && num>0 )

        {
            num =(int)num;

            cout<<"Floor Value is = "<<num <<endl;

        }


        else if

            (choice == "floor" && num !=(int)num && num<0 )

            {
                num=((int)num-1);

                 cout<<"Floor Value is = "<<num <<endl;
            }


            else if


            (choice == "ceiling" && num!=(int)num && num<0 )


            {
                num=(int)num ;

                cout<<"Ceiling Value is"<<num<<endl;
            }

            else if

                (choice == "floor" && num==(int)num )

            {
                cout<<"Floor Value is "<<num;

            }


            else if
                (choice == "ceiling" && num==(int)num)

            {
                cout<<"Ceiling valuse is "<<num<<endl;
            }







return 0;
}
