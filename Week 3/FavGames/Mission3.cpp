// Clayton McCandless   Week 2 - File Interface
// June 22, 2024

#include <iostream>
#include <fstream>      // file stream for In/Out file read/write
#include <string>
#include <vector>
#include <ctime>
#include "mission3_functions.h"

using namespace std;

// Load(vector<string>& vector)
// Add(vector<string>& vector)
// Edit(vector<string>& vector)
// Remove(vector<string>& vector)
// Show(const vector<string>& vector)
    // should sort the list by name
// Quit(const vector<string>& vector)
    // Should offer to wipe the list
    // or should save to file

vector<string> favGames;

int main () {
    cout << "Welcome back to your library!\n";
    
    while (true) {
        cout << "What would you like to do?\n\n";
        cout << "Load\nAdd\nEdit\nDelete\nShow\nQuit\n\n";
        
        string input;

        getline (cin, input);

        if (input == "Load"||input == "load"||input == "LOAD") {
            cout << "Please make sure your file ends in .txt, so it can be read.\n";
            cout << "Please input your file name:\n";
            getline (cin, input);

            LOAD (input, favGames);
            continue;
        }

        else if (input == "Add"||input == "add"||input == "ADD") {
            cout << "What game would you like to add?\n";
            getline (cin, input);
            ADD (input, favGames);
            continue;
        }

        else if (input == "Edit"||input == "edit"||input == "EDIT") {
            string input;

            cout << "What game would you like to edit?\n";
            getline (cin, input);

            EDIT (input, favGames);
            continue;
        }

        else if (input == "Delete"||input == "delete"||input == "DELETE") {
            cout << "What game would you like to delete?\n";
            getline (cin, input);
            DELETE (input, favGames);
        }

        else if (input == "Show"||input == "show"||input == "SHOW") {
            SHOW(favGames);
        }

        else if (input == "Quit"||input == "quit"||input == "QUIT") {
            cout << "Are you sure you would like to quit?\n";
            getline (cin, input);
            if (input == "Yes" || input == "yes"||input == "YES") {
                SAVE (favGames);
                return 0;
            }
            else {
                cout << "Alright.\n";
                continue;
            }
        }

        else {
            cout << "You appear to have made an error. Please try again.\n";
            continue;
        }
    }

    return 0;
}