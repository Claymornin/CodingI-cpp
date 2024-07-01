// Clayton McCandless   Week 3 - Main File
// June 22, 2024
// Headers!

#include "Header.h"     // all of this stuff is in here, too
#include "Header_structs.h"
#include <string>
// #include <ctime>
// #include <cstdlib>
// #include <algorithm>


int main() {
    cout << "Headers!\n\n";

    cout << "5 + 6 = " << AddTwoNumbers (5,6) << "\n";

    vector<string> ingredients = {"Milk", "Flour", "Butter", "Eggs", "Baking Soda"};

    Display (ingredients);

    vector<int> highScores = {45, 22, 17, 11};

    Display (highScores);

    vector<robot> bots(2);
    bots[0].charge = 23;
    bots[0].name = "Gypsy Danger";
    bots[1].charge = 4;
    bots[1].name = "Crimson Typhoon";

    Display(bots);

    

    return 0;
}