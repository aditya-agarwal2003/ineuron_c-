//Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<endl<<endl<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<endl<<"Before swapping a = "<<a<<" and b = "<<b;
    cout<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<endl<<"After swapping a = "<<a<<" and b = "<<b;
    cout<<endl<<endl;
    return 0;

}