#include <iostream>

using namespace std;


int RecurFact(int userInput) {
    //factorial using recursion

    //This version is not good, since it will return the recursion endlessly because there was no "Basa Exit".
    //It will run infinitely but will be causing bugs and errors in the system itself.
        return userInput * RecurFact(userInput - 1);
    }


int main() {

    //structure...
    int userInput;

    cout << "Factorial (Recursion)" << endl;

    cout << "Please type the number for factorial: ";
    cin >> userInput;

    cout << "The factorial result of " << userInput << " is " ;
    cout << RecurFact(userInput);

}
