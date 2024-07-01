// Clayton McCandless   Week 2 - Arrays
// June 13, 2024
// in developer command prompt type cls to clear screen

#include <iostream>
#include <string>

using namespace std;

int main () {
    cout << "Arrays are ordered lists of variables.\n";

    // like a grocery list
        //  GROCERIES        HIGH SCORE          DISTANCE TO GOAL
        //0 milk             highest             4.26
        //1 bread            second              7.90
        //2 candy            third               12.65
        //3 cereal           lowest              21.92
    // index is a specific number, first number in list is index of zero

    // creating an array of strings named groceries with a size of 10
    string groceries [10];

    cout << "The first item on our grocery list is " <<groceries[0]<< ".\n";
    cout << "Whoops! Forgot to add that one to the list. Just a second...\n";

    groceries [0] = "Milk";

    cout << "The first item on our grocery list is " <<groceries[0]<< ".\n";
    cout << "Let's add a few more...\n";

    groceries [1] = "Bread";
    groceries [2] = "Candy";
    groceries [3] = "Cereal";
    groceries [4] = "Cheese";

    cout << "The second item on our grocery list is " <<groceries[1]<< ".\n";
    cout << "Here's our groceries! " <<groceries<< ".\n";
    cout << "Whoops! The name of an array is a pointer to a memory address.\n";

    int index = 0;
    while (index < 5) {
        cout << groceries [index] << ".\n";
        index ++;   // add one to index
    }

    //creating an array of integers named 'scores'
        // with a size of 4.
    // make a variable an array with [square brackets]
    // use a collection initializer to set the size
        // AND the values at the same time.
    int scores[] = {9999, 8550, 6325, 480};

    cout << "The highest score is " << scores [0] << ".\n";

    cout << "We know there are two enemies nearby.\n";
    cout << "Can you tell us the distance of the other three?\n";
    float floatInput = 0.0f;


    // let's create the array
    float closestEnemies [5] {4.267f, 12.132f};
    int nextIndex = 2;

    while (nextIndex < 5) {
        // get input from the player for next closest enemy
        cin >> floatInput;
        // is that number larger than the next closest enemy?
        if (floatInput < closestEnemies[nextIndex - 1]) {
            cout << "That's too close! They need to be re-ordered.\n";
            continue;
        }   else {
            // always add one to nextIndex after you use it,
            // nextIndex points at the bottom of the list
            closestEnemies[nextIndex++] = floatInput;
        }
    }
    cout << "Here are the closest enemies that we know about: \n";

    // using the same int index as earlier in the code
    index = 0;
    while (index < 5) {
        cout << "Enemy Number " << index + 1 << " is " << closestEnemies[index] << " meters away.\n";
        index++;
    }

    return 0;
}