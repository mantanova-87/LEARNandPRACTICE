/*Write a C++ program that will ask for a temperature in Celsius and display it in 
degree Fahrenheit.[F=9C/5+32] */
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the temperature in Celcius: ";
    float num;
    cin>>num;
    cout<<"Temperature converted to degree farenheit is: "<<((9*num)/5)+32;
    return 0;
}