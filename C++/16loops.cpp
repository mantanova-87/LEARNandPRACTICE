/*WAP to demonstrate for, while, do-while (with all possible variations), like for loop
can be demonstrated without giving initialization in for construct or without giving
increment in for construct.*/
#include <iostream>
using namespace std;
void fordemo(void);
void whiledemo(void);
int main()
{
}
void fordemo(void)
{
    cout << "FOR LOOP VARIATIONS" << endl;
    int A = 0;
    cout << "VARIATION 1 OF FOR LOOP: NO INIT" << endl;
    for (; A < 5; A++)
    {
        cout << "ITERATION: " << A << endl;
    }
    cout << "NO INCREMENT OR DECREMENT" << endl;
    for (; A < 5;)
    {
        cout << "ITERATION" << A << endl;
    }
    cout << "CONDITION INFINITE LOOP" << endl;
    for (;;)
    {
        cout << "LOOP" << endl;
        break;
    }
}
void whiledemo(void)
{
    cout<<"WHILE DEMO";
    cout<<"infinite loop"<<endl;
    while (1)
    {
        break;
    }
    
}