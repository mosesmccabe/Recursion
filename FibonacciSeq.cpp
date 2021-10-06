#include <iostream>
using namespace std;

int Fib(int userInput)
{
    if(userInput <= 1) return userInput;
    return Fib(userInput - 1) + Fib(userInput -2);
}
int main()
{
    cout << Fib(45) << endl;
}