// Clayton McCandless Week 2 - Do While Loop & Break/Continue
// June 12, 2024

#include <iostream>
#include <string>

using namespace std;

int main () {
    cout << "Let's talk about the do-while loop.\n";

    int counter = 0;
    while (counter < 100) {
        cout << "counter = " << counter++ <<"\n";
    }

// a while loop tests at the top of the loop
// a do-while loop tests at the bottom of the loop

counter = 0;    // reset the counter

do {
    cout << "Counter: " << counter++ << "\n";

} while (counter <= 25);

// when should we use either one?
// use the while loop UNLESS you are duplicating code

string input = "";


// while either one of these tests is true, this is true.
do {
        // string, integer, or other value is inside the loop
            // it is created and destroyed on each loop
            
        // it will also only exist inside this block of code

    cout << "Would you like to go adventuring?\n";
    cin >> input;

    if (input != "yes" && input != "no") {
        cout << "Invalid input. Please try again.\n";
        continue; //continues the loop without changing it
    }

    if (input == "yes") {
        cout << "Let's go!\n";
        // break;  // break is a way to get out of the loop
    }
    else {
        cout << "Thanks for playing!\n";
        // break;  // break is a way to get out of the loop
    }
} while (input != "yes" && input != "no");

    int playersChosenNumber = 0;    // always initialize your variables (= something)
    counter = 0;
    cout << "What number would you like me to count up to?\n";
    cin >> playersChosenNumber;
    
    do {
        if (counter == playersChosenNumber ) {
            cout << "We've found that number! Breaking loop now.\n";
            break;
        }
        if (counter == 13 || counter == 316 || counter == 666) {
            cout << "I'm not superstitious, but I am a little stitious.\n";
            continue;
        }
    
       cout << "Computer yells: " << counter << ".\n";

    } while (counter++ <= playersChosenNumber);

    return 0;   // why do we return zero?
                // this is the end of the function
                // we are returning the variable from the function
                // this is for error codes
                // returning zero means the code returned successfully
}