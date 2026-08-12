/*A library charges a fine for every book return late. For first 5 days the 
fine is 50 paisa, for 6-10 days fine is one rupee and above 10 days fine is 
5 rupees. If you return the book after 30 days your membership will be 
cancelled. WAP to accept no. of days the member is late to return the 
book and display the fine or appropriate message.*/
#include<iostream>
using namespace std;
int main()
{
    int NOD;
    cout<<"ENTER THE NUMBER OF DAYS MEMBER IS LATE TO RETURN THE BOOK: ";
    cin>>NOD;
    if (NOD<=5)
    {
       cout<<"THE FINE IS 50 PAISE";
    }
    else if (NOD>5 && NOD<=10)
    {
        cout<<"THE FINE IS 1 RUPEE.";
    }
    else if (NOD>10 && NOD<30)
    {
        cout<<"THE FINE IS Rs. 5.00.";
    }
    else
    {
        cout<<"YOUR MEMBERSHIP HAS BEEN CANCELLED.";
    } 
}