#include <iostream>

using namespace std;


int RecurFact(int userInput) {
    //factorial using recursion

    //this one is important, called "Base Exit" whereas it is a method for recursion to exit once it's job is done.
    if (userInput == 1) {
        return 1;
    }
    //Here the recursion happens, it can be also applied in if-statement or here.
    else {
        return userInput * RecurFact(userInput - 1);
    }
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
