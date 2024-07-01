// Clayton McCandless   Week 2 - Vectors and Iterators
// June 13, 2024
// in developer command prompt type cls to clear screen

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    cout << "Let's talk about vectors.\n";
    cout << "Vectors are resizeable arrays.\n";
    cout << "Vectors are data objects, with data members and member funcctions.\n";

    vector <int> highScores = {270, 123, 556, 24, 6000};

    vector <string> favGames = { "halflife2", "dishonored", "zelda"};

    // create a vector with a size of 15, all with the value of "<user_Name_Here>"
    vector <string> names = {15, "user_name_here"};

    cout << "Here are your favorite games!\n";
    for (auto game : favGames) {
        cout << game << "\n";
    }

    // for (int i = 0; i < 5; i += 1) {
    //     cout << "You've finished the game! What was your score?\n";
    //     int input;
    //     cin >> input;
    //     if (input > 0) {
    //         highScores.push_back(input);
    //     }
    // }
    // //270. 123, 556, 24, 6000

    // cout << "Your unsorted high scores:\n";
    // for (int i = 0; i < highScores.size(); i++) {
    //     cout << highScores[i] << "\n";
    // }

    // cout << "What's that? You've entered a score wrong?\n";
    // cout << "Alright, let's find it and change it.\n";
    // bool foundScore = false;
    // while (!foundScore) {
    //     cout << "What score are you trying to find?\n";
    //     int input;
    //     cin >> input;

    //     for (int i = 0; i < highScores.size(); i ++) {
    //         if (highScores[i] == input) {
    //             cout << "We've found the score.\n";
    //             foundScore = true;
    //             cout << "What would you like to change this score to?\n";
    //             cin >> input;
    //             highScores[i] = input;      // setting the score with a new value
    //             cout << "Changed score to " << highScores[i] << ".\n";
    //         }
    //     }
        
    //     if (!foundScore) {
    //         cout << "We couldn't find that number...\n";
    //         cout << "Press 1 to search again,\n";
    //         cout << "Or press 0 to quit.\n";
    //         cin >> input;
    //         if (input == 0) {
    //             cout << "All good! Thanks for playing.\n";
    //             break;
    //         }
    //     }
    // }

    cout << "Your unsorted high scores:\n";
    for (int i = 0; i != highScores.size(); i++) {
        cout << highScores[i] << "\n";
    }

    //let's build an iterator to learn, and then to sort

    // creating an iterator that points specifically to a vector of strings
    vector<string>::iterator iter;

    iter = names.begin();
    // built-in iterators for each vector:
        // vector.begin(), which points at the first element in the vector
        // vector.end(), which points to the spot AFTER the last element in the vector
        //
    
    cout << "Your names with an iterator:\n";
    for (vector<string>::iterator iter = names.begin(); iter != names.end(); iter++) {
        // dereference the iterator with the dereference operator (*)
        cout << *iter << "\n";
    }

    // let's talk about the arrow operator
    iter = names.begin();
    cout << "Iter is now pointing at the first name in the names.\n";
    
    // let's get the number of characters, or the size, of the first name in the list
    cout << "There are " << (*iter).size() << " characters in names[0].\n";
    
    // let's use the arrow operator instead of the dereference operator
    cout << "There are " << iter->size() << " characters in the string iter is pointing at.\n";

    // let's use the arrow operator and the string.find() function
    cout << "The word 'name' starts on character " << iter->find("name") << ".\n";

    // can we use insert?
    iter->insert(iter->find("name"), "super");
    cout << "The first name now says \"" << *iter << "\".\n";

    iter = names.begin() + 3;   // this points to the fourth name in the vector

    *iter = "Bran";

    iter = names.end() - 1;     // this is the actual last name

    *iter = "LastNameEVER";

    // why learn about iterators if we can just do this?

    *(names.begin()+1) = "Second Name";

    cout << "Your names with an iterator:\n";
    for (vector<string>::iterator iter = names.begin(); iter != names.end(); iter++) {
        // dereference the iterator with the dereference operator (*)
        cout << *iter << "\n";
    }

    cout << "Your names for names.begin():\n";

    for (int i = 0; i < names.size(); i++) {
        if (i < 9) { cout << "0";}
        cout << i + 1 << ".\t" << *(names.begin() + i) << "\n";
    }

    return 0;
}