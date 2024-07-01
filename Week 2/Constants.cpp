// Clayton McCandless   Week 2 - Constants
// June 12, 2024

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "All about constants!\n";

    const float gravity = -9.18f;   // the gravity, you cannot change it
    const int MAX_INVENTORY = 9;    // make constant variables UPPERCASE
    
    int currentInventory = 0;
    cout << "You're gathering firewood!\n";

    while (currentInventory < MAX_INVENTORY){
        cout << "You've found another stick\n";
        currentInventory += 1;
        cout << "You now have " << currentInventory << " sticks.\n";
    }

    const string PLAYER_NAME = "Gordon Freeman";

    cout << "Hello, " <<PLAYER_NAME<< "!";
    cout << "\tYour name is now Shooby Doowop.";
        // PLAYER_NAME = Shooby Doowop;
}