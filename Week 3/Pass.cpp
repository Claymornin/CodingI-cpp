// Clayton McCandless   Week 3 - More Functions!
// June 22, 2024
// Global Variables, Overloading Functions, Declare vs Define Functions
// References, Constant References, Returning References
// Headers and file i/o

#include <iostream>
#include <string>
#include <vector>
// #include <ctime>
// #include <cstdlib>
// #include <algorithm>


using namespace std;

// global variables exist in all functions in this program.
    // every piece of the program can use it, which has pros and cons

// int totalGold = 0;

int RollDie () {
    return 6;
};

void GetGold (int givenGold) {
    int totalGold = 0;
    cout << "We've received " << givenGold << " gold!\n";
    totalGold += givenGold;
    cout << "We now have " << totalGold << " gold.\n";
}
// you could even keep the name the same for each of these...
    // because the entire function line is the name

// we are overloading the "GetGold" function name
    // with a different set of parameters

int GetGold (int oldTotalGold, int givenGold) {
    int newTotal = oldTotalGold;
    cout << "We've received " << givenGold << " gold!\n";
    newTotal += givenGold;
    cout << "We now have " << newTotal << " gold.\n";
    return newTotal;
}

// let's declare a new function, but define it after main()

// what does this function do?
    // it adds a name to a vector of strings.
void AddPerson(vector<string>& rtempNames, string& rgivenName);
void ListPersons(const vector<string>& list);

int main () {
    cout << "Global Variables!\n";
    int totalGold = 0;
    totalGold = GetGold(totalGold, RollDie());
    totalGold = GetGold(totalGold, RollDie());
    totalGold = GetGold(totalGold, RollDie());
    totalGold = GetGold(totalGold, RollDie());

    vector<string> names;
    cout << "What name would you like to add to the vector of names?\t";
    string input;
    getline (cin,input);
    AddPerson(names, input);
    // names will have the same operation as performed by tempNames and givenName 
        // copied onto itself
    cout << "List of names:\n";
    ListPersons(names);

    // this is an int variable
    int myScore = 1500;
    // this is a reference to an int variable
    int& myScoreRef = myScore;  // when you build a reference,
        // add an ampersand, and point it to another variable,
        // because it will point to that variable forever
        
    int yourScore = 2500;
    myScoreRef = yourScore; // this says myScore = 2500

    cout << "MyScoreRef = " << myScoreRef << ".\n";
    // because the reference is connected, myScoreRef is overwriting myScore
    cout << "MyScore = " << myScore << ".\n";



    return 0;

}


void AddPerson (vector<string>& rtempNames, string& rgivenName) {
    // names were pushed back to this list, not the one in main()
    // vector<string> names;
    rtempNames.push_back(rgivenName); // same as names.push_back
    }
// list is a constant reference to a vector of strings.
// that means it is read only, not possible to change the vector.
void ListPersons(const vector<string>& list) {
    for (int i=0; i< list.size(); i++) {
        // so this list was pulling from an empty vector
        cout << list[i] << "\n";
    }
}