#include <iostream>

using namespace std;

int main()
{
    string myName;
    cout << "Please enter your full name: ";
    cin >> myName;
    getline(cin, myName);

    cout << "Welcome to the number addition program, " << myName;

    int inputA = 0;
    int inputB = 0;

    cout << "Please enter the first number: ";
    cin >> inputA;

    cout << "Please enter the second number: ";
    cin >> inputB;

    cout << "The sum of the numbers are " << inputA + inputB << endl;

    return 0;
}
