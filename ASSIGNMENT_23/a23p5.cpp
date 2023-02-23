//Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    float length,breadth,height;
    cout<<endl<<endl<<"Enter length : ";
    cin>>length;
    cout<<"Enter breadth : ";
    cin>>breadth;
    cout<<"Enter height : ";
    cin>>height;
    cout<<endl<<"Volume of cuboid is "<<length*breadth*height;
    cout<<endl<<endl;
    return 0;
}