/*A certain grade of steel is graded according to the following conditions:  
(i) Hardness must be greater than 50  
(ii) Carbon content must be less than 0.7  
(iii) Tensile strength must be greater than 5600  
The grades are as follows:  
Grade is 10 if all three conditions are met  
Grade is 9 if all conditions (i) and (ii) are met  
Grade is 8 if all conditions (ii) and (iii) are met  
Grade is 7 if all conditions (i) and (iii) are met  
Grade is 6 if only one condition is met  
Grade is 5 if none of the conditions are met  
  
Write a program, which will require the user to give values of hardness, 
carbon content and tensile strength of the steel under consideration and 
output the grade of the steel.*/
#include<iostream>
using namespace std;
int main()
{
    float hard,carb,tstr;
    cout<<"Enter hardness of steel: ";
    cin>>hard;
    cout<<"Enter carbon content of steel: ";
    cin>>carb;
    cout<<"Enter tensile strength of steel: ";
    cin>>tstr;
    if (hard>50 && carb<0.7 && tstr>5600)
    {
        cout<<"Grade is 10.";
    }
    else if (hard>50 && carb<0.7 && tstr<=5600)
    {
        cout<<"Grade is 9.";
    }
    else if (hard<=50 && carb<0.7 && tstr>5600)
    {
        cout<<"Grade is 8.";
    }
    else if (hard>50 && carb>=0.7 && tstr>5600)
    {
        cout<<"Grade is 7.";
    }
    else if ((hard>50 && carb>=0.7 && tstr<=5600) || (hard<=50 && carb<0.7 && tstr<=5600) || (hard<=50 && carb>=0.7 && tstr>5600))
    {
        cout<<"Grade is 6.";
    }
    else 
    {
        cout<<"Grade is 5.";
    }
    return 0;
    
    
}