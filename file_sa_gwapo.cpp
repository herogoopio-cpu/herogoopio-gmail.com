#include <iostream>
using namespace std;

int main() {
    int number;
    char choice;

    do {
        cout << "\nEnter a number: ";
        cin >> number;

        if (number % 2 == 0)
            cout << number << " is EVEN." << endl;
        else
            cout << number << " is ODD." << endl;

        cout << "Check another number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program ended.\n";
    return 0;
}
