//Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    float a,b,c,average=0;   
    cout<<endl<<endl<<"Enter 3 numbers : ";
    cin>>a>>b>>c;
    average = (a+b+c)/3;
    cout<<endl<<"Average of three numbers is "<<average;
    cout<<endl<<endl;

    return 0;
}   
