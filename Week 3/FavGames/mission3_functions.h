// Clayton McCandless   Week 2 - File Interface
// June 22, 2024

#include <iostream>
#include <fstream>      // file stream for In/Out file read/write
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>


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

string line;

void LOAD (string& fileName, vector<string>& list) {
    cout << "Reading your data: \n";
    ifstream readFile(fileName);
    
    if (readFile.is_open()){
        cout << "We found the file " << fileName << ".\n";
        cout << "Loading your library loading now.\n";
        while(getline(readFile, line)) {
            list.push_back(line);
        }
        cout << "Please select 'Show' to view your library.\n";
    } else {
        cout << "The file " << fileName << " was not found.\n";
        cout << "Please try again.\n";
    }
    return;
}

void ADD (string& name, vector<string>& list) {
    list.push_back(name);
    cout << "You have added: " << name << " to your favorite games.\n\n";
    return;
}

void EDIT (string& name, vector<string>& list) {
    vector<string>:: iterator iter;
    iter = list.begin();
    string input;

    iter = find(list.begin(), list.end(), name);

    if(iter != list.end()) {
        cout << "We found " << name << " in your library!\n";
        cout << "What would you like to change " << name << " to?\n";

        getline(cin, input);
        *iter = input;

        cout << "You changed the game to " << *iter << ".\n\n";
        
    } else {
        cout << "We did not find " << name << " in your library.\n";
        cout << "Please check your spelling and try again.\n\n";
    }
    return;
}

void DELETE (string& name, vector<string>& list) {
    vector<string>:: iterator iter;
    iter = list.begin();
    iter = find(list.begin(), list.end(), name);

    if(iter != list.end()) {
        cout << "We found " << name << "!\n";
        list.erase(iter);
        cout << name << " has been deleted from your library.\n\n";
        
    } else {
        cout << "We did not find " << name << " in your library.\n";
        cout << "Please check your spelling and try again.\n\n";
    }
    return;
}

void SHOW (vector<string>& list) {
    sort(list.begin(), list.end());

    cout << "Here are your current games:\n";

    for (int i = 0; i < list.size(); i++) {
            cout << i + 1 << "\t" << list[i] << "\n";
        }
    
    cout << "You have " << list.size() << " games stored.\n\n";

    return;
}

void SAVE (vector<string>& list) {
    string input;
    cout << "Would you like to save your library?\n";
    getline (cin, input);
    if (input == "Yes" || input == "yes") {
        cout << "Please make sure your file ends in .txt, so it can be read again.\n\n";
        cout << "What would you like to save your file as?\n";
        string name;
        getline(cin, name);
        

        ofstream writeFile (name);
        if (writeFile.is_open()) {
            for (int i = 0; i < list.size(); i++) {
                writeFile << list[i] << "\n";
            }
        }
        cout << "Your library has been saved.\n";
        cout << "Ending program...\n";
        return;
    }
    else {
        cout << "Very well.\n";
        cout << "Ending program...\n";
        return;
    }
}