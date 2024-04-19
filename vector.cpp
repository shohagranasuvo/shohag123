#include <iostream>
#include<vector>
using namespace std;

template <class t> // all type of vector display

double display (vector<t> &v)
{
    for(int i=0;i<v.size();i++)
    {

        cout<<v[i]<<" ";
    }
    cout<<endl;
}
template <class j>  //all type of vector got input
int input (vector<j> &ve , const string &vecName )
{
     j ele;
     int x ;

 cout<<vecName<<" size = ";

    cin>>x;
    for(int i=0 ;i<x;i++)
    {
        cout<<"Enter a element = ";
        cin>>ele;

        ve.push_back(ele);
    }
}


int main()
{
    vector<int> vec1 ;

    input(vec1,"vec1");
    vector <int> ::iterator iter =vec1.begin() ; //point a location
    vec1.insert(iter+1,2,77); // input on the point location
    display(vec1);
    vec1.pop_back(); //remove element
    display(vec1);
    cout<<vec1.at(2)<<endl;//at this position which one have ,it will display
    vec1.at(2)=500;// initialize by using at

    display(vec1);


    vector<char> vec2;

    input (vec2,"vec2");
    display(vec2);
    vector<char> vec3(vec2); // first insert vec2 ,,then store input
     input  (vec3,"vec3");
    display(vec3);
    vector<int> vec4(6,4); // 6 size and all location has 1 value 4
    display(vec4);


    cout<<"vec1 size "<<vec1.size()<<endl;
     cout<<"vec2 size "<<vec2.size()<<endl;
     cout<<"vec3 size "<<vec3.size()<<endl;
     cout<<"vec4 size "<<vec4.size()<<endl;





    return 0;
}
