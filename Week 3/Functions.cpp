// Clayton McCandless   Week 3 - Functions
// June 20, 2024

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
// #include <algorithm>


using namespace std;

// a function is a reusable code block
// it has a return type, a name, parameters, and the code body
// we are declaring that this function "SayHello" exists!
// we are also defining the function which means giving it the
    // block of code inside.
// we will call this function inside of main.

void SayHello () {
    cout << "Hello!\n";
}

// in math, f(x) = y is a function, where x is the input and y is the output

// return type is int
// the function name is triple
// has one input parameter "int input"
int Triple (int input) {
    input = input * 3;     // take the number we were given and triple it.

    return input;   // return that number.
}

// create a function named ADD that accepts two input parameters 
    // and returns an int

int Add (int numberA, int numberB) {
    return numberA + numberB;

}

bool AskYN(string Question) {
    int counter = 0;
    string input = "";
    do {
        cout << Question << " (Y/N)\n";
        getline (cin, input);
        if (input == "Y") {
            return true;
        }
        else if (input == "N") {
            return false;
        }
        else {
            cout << "Invalid response. Please type 'Y' or 'N'.\n";
        }
    } while (true && counter++ < 5);
    // they don't know how to answer,
    cout << "Too many failed inputs, returning 'N'\n";
    return false;
}

void BadDieRoll() {
    int droppedGold = rand() % 20;
    int attack = rand () % 6;
    int block = (rand () % 6) + 1;

    cout << "The enemy attacks for " << attack << " damage.\n";
    cout << "You block for " << block << " damage.\n";
    cout << "The enemy drops " << droppedGold << " gold.\n";
}
int DieRoll (int sides = 6) {   // default parameter
    return (rand() % sides) + 1;
}

void DisplayVec(vector<string> vec, string description = "Your List:") {
    cout << description << "\n";
    // cout << "Your " << vec[0] << "\n";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << "\n";
    }
}

int main () {
    srand(time(0));
    cout << "Let's learn about functions!\n";

    SayHello();

    SayHello();

    int number = 2;
    int tripledNumber = Triple(number);
    cout << "The number " << number << " when tripled is " <<tripledNumber<< ".\n";
    cout << "f(3) = " << Triple(3) <<  ".\n";
    
    cout << "2 + 2 = " << Add(2,2) << ".\n";
    cout << "117 + 234 = " << Add(117,234) << ".\n";

    cout << "Do you want to go adventuring?\n";

    if (AskYN("Would you like to go adventuring?")) {
        cout << "Great! Here we go.\n";
    }   else {
        cout << "That's fine too! Let's return home.\n";
    }

    int totalGold = DieRoll(20);
    int attack = DieRoll();
    int block = DieRoll();

    // BadDieRoll();

    cout << "Attack: " << attack << "\tBlock: " << block << "\tTotal Gold:" << totalGold << "\n";

    vector <string> inventory = {/*"Inventory"*/"Sword", "Shield", "Apple"};
    DisplayVec(inventory, "Your items:");

    vector<string> friends = {/*"Friends"*/ "Harry", "Ron", "Hermione"};
    DisplayVec(friends, "Your friends:");

    vector<string> animals = {"cat", "dog", "horse", "hawk"};
    DisplayVec (animals);

    return 0;
}