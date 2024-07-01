// Clayton McCandless   Week 2 - Algorithms
// June 15, 2024
// in developer command prompt type cls to clear screen

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main () {
    srand(time(0));     // time, in seconds, since January 01, 1970
    cout << "Let's talk about algorithms!\n";

    vector <int> highScores {};

    for (int i = 0; i < 5; i++) {
        int temp = (rand() % 10000);
        cout << "Adding " << temp << " to highScores.\n";
        highScores.push_back(temp);
    }

    cout << "Sorting scores.\n";
    // using the sort algorithm to sort highScores
    // scores accepts an iterator that points to the start of the vector
        // and an iterator that points to the end of the vector
    sort(highScores.begin(), highScores.end());

    // reversing the sorted list
    reverse(highScores.begin(), highScores.end());

    for (int i = 0; i < highScores.size(); i++) {
        cout << highScores[i] << "\n";
    }

    // C++ does not care about white space
    vector <string> names = {   "Clive",
                                "Joshua",
                                "Jill",
                                "Gav",
                                "Benedikta",
                                "Hugo"
                            };
    cout << "\tHere are our characters!\n";

    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << "\n";
    }

    // sort the list of names
    sort(names.begin(), names.end());
    cout << "\tHere are the sorted characters:\n";
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << "\n";
    }
    
    // add numbers to each of these characters
    for(int i = 0; i < names.size(); i++) {
                                        // the concatonator
        (names[i]).insert(0, to_string(i + 1) + " ");
    }
    // name at position of i, inserting (starting at 0),
        // the number i with a space

    cout << "\tHere are our sorted characters... with numbers!\n";
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << "\n";
    }

    
    random_shuffle(names.begin(), names.end());

    cout << "\tHere are our names in a random order!\n";
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << "\n";
    }

    // why is this better than just using rand() % name.size()
    cout << "Let's sort them again, then use rand() to get a random list.\n";
    sort(names.begin(), names.end());

    cout << "Here are our characters shuffled with rand()\n";
    for (int i = 0; i < names.size(); i++) {
        cout << names[rand() % names.size()] << "\n";
    }

    cout << "They're all still sorted, by the way.\n";
    cout << "You're going on an outing with " << names[rand() % names.size()] << ".\n";
    cout << "You're going on an outing with " << names[rand() % names.size()] << ".\n";
    cout << "You're going on an outing with " << names[rand() % names.size()] << ".\n";
    cout << "You're going on an outing with " << names[rand() % names.size()] << ".\n";

    cout << "Instead of that duplicitous nonsense:\n";

    random_shuffle(names.begin(), names.end());
    cout << "You're going on an outing with " << names[1] << ".\n";
    cout << "You're going on an outing with " << names[2] << ".\n";
    cout << "You're going on an outing with " << names[3] << ".\n";
    cout << "You're going on an outing with " << names[4] << ".\n";

    return 0;
}    