// Clayton McCandless   Week 4 - Classes
// June 29, 2024

#include <iostream>
#include <string>

using namespace std;

// C++ is Object Oriented Programming (OOP)
    // it has large objects which hold smaller objects, which can hold their own variables

// structs for data, classes for data with functions

// a string is a class that has number of data members (characters), and member functions

// use the class keyword to create a class named "robot"

class robot {
private:        // only I can see, call, or change this
    // Data Members
    string name;
    string phrase;
    int charge;
    int maxCharge = 100;
    int minCharge = 0;
public:         // anyone can see, call, or change this
    // Member Functions
    // function declarations to be defined later
        // function declarations don't require parameter names
    robot (string, string, int);
    robot ();
    void SayHello();

    // Setters and Getters give access to private variables
        // through whatever tests we want to write

    // SetCharge clamps charge to a range of 0-100 (inclusive)
        // exclusive would remove values from the range
    // Setters always have an input parameter
    void SetCharge(int givenCharge) {

        if(givenCharge < minCharge) {
            charge = minCharge;
        } else if(givenCharge > maxCharge) {
            charge = maxCharge;
        } else {
            charge = givenCharge;
        }
    }

    // Getters will always have a return type
    int GetCharge() {
        return charge;
    }

    void ChangeCharge(int by = 1) {
        charge += by;
        SetCharge(charge);  // for clamping charge
    }

    void SetName(string givenName) {
        if(givenName.size() < 2) {
            cout << "Name is too short!\n";
            return;
        } else if(givenName.size() > 20) {
            cout << "Name is too long!\n";
        } else {
            name = givenName;
        }
    }
    string GetName () {
        return name;
    }

protected:
};  // don't forget the semi-colon after the curly braces

// Function Definitions must be outside the class definition
// constructor, has to be named the same as the class, and doesn't have a return type

robot::robot(string givenName, string givenPhrase, int givenCharge) {
    // assigns this intance's variables to the given values.
    name = givenName;
    phrase = givenPhrase;   // assume phrases have punctuation
    charge = givenCharge;

    // lets us know that this constructor has run.
    cout << "A new robot has been constructed!\n";
    }

    // overloading the constructor with a "default" constructor
robot::robot() {
    cout << "Using the DEFAULT constructor.\n";
    // error message
    cout << "Please fix this error in source code.\n";
    }

void robot::SayHello() {
    cout << "My name is " << name << ", and my charge is " << charge << ".\n";
    cout << phrase << "\n";
    ChangeCharge(-1);   // this task was not very expensive on charge;
    }

int main () {
    cout << "Let's talk about classes!\n";

    robot bob;  // constructor runs here. (Event Begin Play in Unreal)
    bob.SetName("Bobby Boy") ;
    bob.SetCharge(5);

    cout << "Have a look at my new robot! Their name is " << bob.GetName() << ".\n";
    cout << "I am charging them. Their charge is " << bob.GetCharge() << ".\n";

    bob.ChangeCharge(50);
    cout << "Two hours later, bob's charge is now " << bob.GetCharge() << "\n";

    robot rob ("Robbie", "I can do anything!", 20);

    cout << "Here is my premium robot.\n";
    cout << "It can introduce itself!\n";
    rob.ChangeCharge(-200);         // poor power efficiency.
    rob.SayHello();

    bob.SayHello();


    return 0;
}