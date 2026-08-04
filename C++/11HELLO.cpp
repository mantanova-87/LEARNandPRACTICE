/*Write a program (WAP) to display "Hello World" on console display. WAP to implement the following control characters: 
‘\n’ is for new line, or you can use endl – cout<<endl<<“message”; ‘\t’ is for tab ;‘\a’ is an alarm sound;‘\r’ is carriage return to go to the beginning of the current line */
#include <iostream>
using namespace std;
int main(void)
{
    int num;
    cin >> num;
    cout << "    \rHello World";
    cout << endl<< num;
    cout<<'\t'<<num++<<'\a'<<' '<<num++;
    return 0;
}