// Clayton McCandless   Week 2 - Enumerators
// June 12, 2024

#include <iostream>
using namespace std;

int main() {
    cout << "All about enumerators!\n";
    // let's make an enumerator
    // unless specified, FIRE = 0, ICE = 1, CANDY = 2, SLIME = 3
    enum elementalType {FIRE, ICE, CANDY, SLIME};
    elementalType element = CANDY;

    // creating a new variable of the type elementalType named element
        // with the value of FIRE which is 0
    if (element == FIRE) {
        cout << "You've picked fire as your element!\n";
    }
    else {
        cout << "You DIDN'T pick FIRE?\n";
        cout << "Let me fix that for you...\n";
        // we can change the value of an enumerated type at any time
        element = FIRE;
    }

    if (element == FIRE) {
        cout << "You've picked fire as your element!\n";
    }
    else {
        cout << "You DIDN'T pick FIRE?\n";
        element = FIRE;
    }

    enum shipType {FIGHTER = 25, GUNSHIP = 100, CORVETTE = 200};
    const int EASY = 4, MEDIUM = 8, HARD = 12;
    int difficulty = EASY;
    
    shipType myShip = FIGHTER;

    cout << "Your fighter costs " << FIGHTER * 100 << " dollars.\n";


    return 0;
}