// Clayton McCandless   Week 2 - Assignment
// June 17, 2024
// in developer command prompt type cls to clear screen

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main () {

vector <string> namesList {"Hollow Knight", "Shovel Knight" };

vector<string>::iterator iter;
iter = namesList.begin();

string input = " ";

cout << "Welcome back, player!\n";

while (true) {
cout << "What would you like to do?\n\n";
cout << "Add\nEdit\nDelete\nSort\nQuit\n";
    cout << "\n";

getline (cin, input);

if (input == "Add") {
    cout << "What game would you like to add?\n";
    getline (cin, input);
    namesList.push_back(input);
    cout << "You have added: " << input << " to your favorite games.\n\n";
    
    cout << "Here are your current games: \n";
    for (int i = 0; i < namesList.size(); i++) {
        cout << "\t" << namesList[i] << "\n";
    }

    continue;
} // end of Add

else if (input == "Edit") {
    cout << "Here are your current games: \n";
    for (int i = 0; i < namesList.size(); i++) {
        cout << namesList[i] << "\n";
    }

    cout << "What game would you like to edit?\n";
    getline (cin, input);

    
    // the algorithm will search for input in the vector namesList
        // it will search from begin(), which is entry 0, 
        // through end(), which is a blank space after the last value
    // if the game we are searching for is found, 
        //the iterator is pointing at that string. 
        //otherwise, it is pointing to namesList.end().
    iter = find(namesList.begin(), namesList.end(), input);

    //if the iterator is not pointing at the end of the list
    if(iter != namesList.end()) {
        cout << "We found " << input << ".\n";
        cout << "What would you like to change it to?\n";
        getline (cin, input);
        *iter = input;
        cout << "You changed the game to " << *iter << ".\n";
        cout << "Here are your current games: \n";
        for (int i = 0; i < namesList.size(); i++) {
            cout << "\t" << namesList[i] << "\n";
        }
        cout << "\n";
        continue;
    }
    else {
        cout << "We could not find" << input << ". Please try again.\n";
        continue;
    }
} // end of Edit

else if (input == "Delete") {
    cout << "What game would you like to delete?\n";
    getline (cin, input);
    iter = find(namesList.begin(), namesList.end(), input);

    //if the iterator is not pointing at the end of the list
    if(iter != namesList.end()) {
        namesList.erase(iter);
        cout << input << "has been deleted.\n";
        cout << "Here are your current games: \n";
        for (int i = 0; i < namesList.size(); i++) {
            cout << "\t" << namesList[i] << "\n";
        }
        cout << "\n";
        continue;
    }

    else {
        cout << "We could not find" << input << ". Please try again.\n";
        continue;
    }
}   // end of Delete

else if (input == "Sort") {
    sort(namesList. begin(), namesList.end());

    cout << "Here are your current games: \n";
        for (int i = 0; i < namesList.size(); i++) {
            cout << i + 1 << "\t" << namesList[i] << "\n";
        }
        cout << "You have " << namesList.size() << " games stored.\n";
        cout << "\n";
        continue;
}   // end of Show

else if (input == "Quit") {
    cout << "Are you sure you would like to quit?\n";
    getline (cin, input);
    if (input == "Yes" || input == "yes") {
        cout << "Thank you for playing.\n";
        cout << "Ending program...\n";
        return 0;
    }
    else {
        cout << "Very well.\n";
        continue;
    }
}   // end of Quit

else {
    cout << "You appear to have made an error. Please try again.\n";
    continue;
}   // end of Error

}

    return 0;
}