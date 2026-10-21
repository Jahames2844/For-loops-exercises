#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Input positive number...\n";
    cin >> number;

    while (number <= 0) {
        cout << "Try again...\n";
        cin >> number;
    }
    cout << "thank you for inputting a positive number!!!\n";
    return 0;
}