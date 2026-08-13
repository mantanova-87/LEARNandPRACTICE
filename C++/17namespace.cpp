/*Implement namespace in a program to illustrate the use of same name variables and 
functions in different sections/libraries of the code. */
#include<iostream>
using namespace std;
namespace Fst_Name{int value=10;}
namespace Scd_Name{int value=20;}
int main()
{
    cout<<"Value from first namespace Fst_Name:"<<endl<<Fst_Name::value;
    cout<<endl<<"Value from second namespace Scd_Name:"<<endl<<Scd_Name::value;
    return 0;

}