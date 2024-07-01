// Clayton McCandless   Week 2 - For Loops
// June 13, 2024
// in developer command prompt type cls to clear screen

#include <iostream>
#include <string>

using namespace std;

int main () {
    cout << "All about for loops!\n";

    string names[] = {"Luke", "Leia", "Han", "Chewie", "Obi-Wan", "Mon Mothma"};

    // for (initialization or setup; test; action) { code to execute }
    // i stands for iterator, only exists in individual for loops, not across file
    for (int i = 0; i < 6; i++) {
        cout << names[i] << "\n";
    }

    for (int i = 0; i < 10; i++) {
        cout << i + 1 << "  ";
    }
    cout << "End Line\n\n";
    // count down from the end, a decrement operator
    cout << "Here are the names in reverse order!\n";
    for (int i = 5; i >= 0; i--) {
        cout << names[i] << "\n";
    }

    // better to get used to using conbined assignment operator
    cout << "Counting down from fifty by fives.\n";
    for (int i = 50; i >= 0; i -= 5) {
        cout << i << " ";
    }
    cout << "\n";

    cout << "Let's split into teams!\n";
    cout << "On the red team is: ";
    for (int i = 0; i < 6; i += 2) {
        cout << names[i] << " ";
    }
    cout << "\n";
    // only change is starting point
    cout << "On the blue team is: ";
    for (int i = 1; i < 6; i += 2) {
        cout << names[i] << " ";
    }
    cout << "\n";
    
    // we are asking the player to pick a best friend from the list of names
    cout << "This loop will run forever!\n";     // and crash when it reaches the end of the list
    string playerBestFriend = " ";
    for (int i = 0; ; i++) {
        cout << "Are you looking for " << names[i] << "? (y/n)\n";
        char input = ' ';
        cin >> input;
        if (input == 'y') {
            cout << "Let's be friends with " << names[i] << ".\n";
            playerBestFriend = names [i];
            break;
        }
        if (i == 5) {
            cout << "That is all the friends we have!\n";
            break;
        }
    }   //end of loop, i does not exist

    cout << "Starting adventure with Player and " << playerBestFriend << ".\n";
    return 0;
}