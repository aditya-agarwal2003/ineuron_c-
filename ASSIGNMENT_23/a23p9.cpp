//Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    if (num1>num2)
    {
        cout<<"Maximum number is "<<num1<<endl;

    }
    else{
        cout<<"Maximum number is "<<num2<<endl;
       
    }

    return 0;
}