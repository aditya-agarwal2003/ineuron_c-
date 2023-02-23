//Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,sum=0;
    cout<<endl<<endl<<"Enter elements in the array ";
    for (i=0;i<=9;i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<"Sum of the elements of array is "<<sum<<endl<<endl;
    return 0;
}