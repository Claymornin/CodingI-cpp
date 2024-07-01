// Clayton McCandless   Week 2 - For Loops
// June 13, 2024
// in developer command prompt type cls to clear screen

#include <iostream>
#include <string>

using namespace std;

int main () {
    cout << "All about foreach loops!\n";

    string names[] = {"Luke", "Leia", "Han", "Chewie", "Obi-Wan", "Mon Mothma"};
    // a foreach loop uses a variable of the type of the array
        // and runs once for each element of the array
    // for each name in names, do this
    for (string name : names) {
        cout << name << "\n";
    }

    cout << "There's no way to get an index, no i variable.\n";

    // for (initialization or setup; test; action) { code to execute }
    // i stands for iterator, only exists in individual for loops, not across file
    for (int i = 0; i < 6; i++) {
        
    }

 return 0;
}