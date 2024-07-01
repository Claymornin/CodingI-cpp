// Clayton McCandless   Week 2 - Strings / Debugging
// June 13, 2024
// in developer command prompt type cls to clear screen

#include <iostream>
#include <string>

using namespace std;

int main () {
    bool debug = false;  // set this to false when we are done debugging

    // strings are objects
    // atomic variable types
    bool playAgain = true;
    float pi = 3.1415f;
    int playerAge = 24;
    char inputYN = 'y';

    string playerName = "Clayton";

    // a string is an array of characters
    // string has char characters [], size(), erase (),

    cout << "Here is the first letter of playerName = " << playerName[0] << ".\n";
    cout << "There are " << playerName.size() << " characters in playerName.\n";

    cout << "Let's shorten that:\n";
    cout << playerName.erase(4,3) << "\n";
    playerName += "!!!";
    cout << "Your name is = " << playerName << ".\n";


    string phrase = "Hello Starshine, the Earth says hello!\n";
    cout << "The word earth starts at character " << phrase.find("Earth") << "\n";
    cout << "Searching for banana in the phrase\n";

    // string.find() returns a number. If it returned the special number string::npos,
        // that means that the word we were looking for is not in the string.
    if (phrase.find("banana") == string::npos){ 
        cout << "We didn't find the word banana in the phrase.\n";
    }

    // using a collection initializer to create an array of strings with 5 items in it
    string inventory[5] = {"Master Sword", "Hylian Shield", "Deku Nut", "Bomb", "Hookshot"};
    const int MAX_INVENTORY = 5;

    cout << "Here are your items!\n\n";
    int counter = 0;
    while (counter < MAX_INVENTORY) {
        cout << inventory[counter] << "\n";
        counter++;
    }

    cout << "What item would you like to use?\n";
    string input;
    getline (cin, input);   // for example, we'll say Deku Nut

    counter = 0;
    while (counter < MAX_INVENTORY) {
        if (debug == true) {
            cout << "counter = " << counter << "\n";
            cout << "input = " << input << "\n";
            cout << "inventory[counter] = " << inventory[counter] << "\n";
        }

        if (inventory[counter] == input) {
            cout << "We use the " << inventory[counter] << "!\n";
            inventory[counter].erase();
            break;  // break out of the while loop
        }

        if (counter + 1 == MAX_INVENTORY) {
            cout << "Item not found.\n";
        }

        counter++;
    }

    cout << "Here are your items again!\n\n";

    counter = 0;
    while (counter < MAX_INVENTORY) {
        if (debug == true) {
            cout << "counter = " << counter << "\n";
            cout << "inventory[counter] = " << inventory[counter] << "\n";
        }
        if (inventory[counter] == "") {
            counter++;
            continue; // skip displaying empty strings
        }
        
        cout << inventory[counter] << "\n";
        counter++;
    }

    return 0;
}