/*WAP to calculate gross salary of a person, where gross_salary = basic+da+ta+HRA and 
da is 46% of basic and ta is 8% of basic and HRA is 9% of basic pay. */
#include<iostream>
using namespace std;
int main()
{
    float basic,gsal;
    cout<<"Enter the basic salary";
    cin>>basic;
    gsal=basic+((basic*46)/100)+((basic*8)/100)+((basic*9)/100);
    cout<<"The gross salary is: "<<gsal;
    return 0;
}