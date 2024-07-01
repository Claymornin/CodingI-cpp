// Clayton McCandless   Week 2 - File Interface
// June 22, 2024

#include <iostream>
// #include <istream>   read IN from files
// #include <ostream>   write OUT to files
#include <fstream>      // file stream for In/Out file read/write
#include <string>
#include <vector>
#include <ctime>

    // can I make a counter to keep track of the how many games were added to save to the log file?

using namespace std;

int main () {
    cout << "Let's write to a file!\n";

    string text = "Here's some text!\n";

    ofstream file;          // create a file variable
    file.open("save.txt");  // open a file
    file << text;           // write text to it
    file.close();           // close the file (to save it)

    cout << "Let's read from a file!\n";

    // create an ifstream file
    // open the file
    // check that it exists
    // read each line to the screen
    // close the file.

    string line;    // this is the line of text we are reading
    // creates the variable and opens it on the same line
    vector<string> favGames;
    ifstream readFile("favGames.txt");
    if(readFile.is_open()) {
        while(getline(readFile, line)) {
            // cout << line << "\n";
            favGames.push_back(line);
        }
    } else {
        cout << "Cannot read from file.\n";
    }

    readFile.close();

    cout << "Your favGames:\n";
    for (int i = 0; i < favGames.size(); i ++) {
        cout << favGames[i] << "\n";
    }

    cout << "What game would you like to add?\t";
    string input;
    getline (cin,input);

    favGames.push_back(input);

    cout << "Your favGames:\n";
    for (int i = 0; i < favGames.size(); i ++) {
        cout << favGames[i] << "\n";
    }

    // SAVING TO FILE
    ofstream writeFile("favGames.txt");

    if (writeFile.is_open()) {
        for (int i = 0; i < favGames.size(); i ++) {
            writeFile << favGames[i] << "\n";
        }
    }
    writeFile.close();

    cout << "Successfully saved. Thanks for playing!\n";

    // Saving to a CSV - a Comma,Separated,Value

    const int ROWS = 4;     // 1,2,3,4
    const int COLUMNS = 2;  // A,B
    string fullNames[ROWS][COLUMNS];
    fullNames[0][0] = "Clayton";
    fullNames[0][1] = "McCandless";
    fullNames[1][0] = "Jon";
    fullNames[1][1] = "McClayne";
    fullNames[2][0] = "Duke";
    fullNames[2][1] = "Dangerous";
    fullNames[3][0] = "Bob";
    fullNames[3][1] = "Hope";

    writeFile.open("fullNames.csv");
    for (int i = 0; i< ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            writeFile << fullNames[i][j] << ", ";
        }
        writeFile << "\n";
    }

    writeFile.close();

    // multidimensional array
    // how many rows?
    // how many columns?

    string excel[4][5];

    //
    time_t now = time(0);

    char* dt = ctime(&now);

    cout << "The local date and time is: " << dt << "\n";

    writeFile.open("log.txt", ios::out | ios::app);

    writeFile << "Fav Games last opened " << dt;
    writeFile << "Games added: " << favGames[favGames.size() - 1];

    writeFile.close();

    cout << "Would you like to erase the favGames file?\n";

    string choice;
    getline (cin, choice);

    if (choice == "yes") {
        favGames.clear();
        writeFile.open("favGames.txt");
        if(writeFile.is_open()) {
            writeFile << "";
        }
        writeFile.close();
    }
    return 0;
}