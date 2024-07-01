// Clayton McCandless   Week 4 - Pointers
// June 29, 2024

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>  // don't forget to srand()

using namespace std;

void AddByValue(int coins) {
    coins += 200;
};

void AddByPointer (int* coins) {
    *coins += 200;
}

void displayArray(string* array) {
    for(int i = 0; i < 5; i++) {
        cout << array[i] << "\n"; 
    }
}

void leak() {
    int* coolNumber = new int(9001);
    delete coolNumber;
    coolNumber = NULL;
}

// on Stack, coolNumber has its own address with its information.
// on Heap, it will be a blank address only holding the information
    // this will fill up memory unless it is deleted at the end of the function

int main () {
    cout << "Here's some stuff about pointers!\n";

    int totalCoins = 300;

    cout << "You have " << totalCoins << " coins in your purse.\n";

    cout << "The memory address of totalCoins, the variable, is " << &totalCoins << ".\n";

    // pointers pass the LOCATION of an object rather than its INFORMATION
    // creating a pointer to an int named ptotalCoins
    // good practice is to point it at NULL, or the memory address that you want to point to
    int* ptotalCoins = &totalCoins;     // & is the "address-of operator"
    cout << "The memory address of our pointer is " << &ptotalCoins << ".\n";

    cout << "Here is ptotalCoins: " << ptotalCoins << ".\n";
    cout << "The value that our pointer 'ptotalCoins is pointing at is " << *ptotalCoins << ".\n";

    cout << "Let's use a function to add to totalCoins.\n";
    AddByValue(totalCoins);
    cout << "totalCoins = " << totalCoins << "\n";

    AddByPointer(&totalCoins);
    cout << "totalCoins = " << totalCoins << ".\n";

    // the Stack versus the Heap.
    // the Heap is dynamically allocated memory
        // that means OUR program chooses where the memory goes
    // the Stack is automatically allocated memory.

    int* playerHealth = new int(100);      // creating a new variable on the heap

    delete playerHealth;        // unload the memory at that memory address.

    playerHealth = NULL;        // make playerHealth a nullpointer, so it doesn't crash the system

    // the variable name of an array is a pointer to the first element in the array.
    string inventory[5] = {"Sword", "Shield", "Potion"};

    cout << "The memory address of inventory is " << &inventory << ".\n";
    cout << "The memory address of inventory[0] is " << &inventory[0] << ".\n";
    cout << "The memory address of inventory[1] is " << &inventory[1] << ".\n";

    displayArray(inventory);

    return 0;
}