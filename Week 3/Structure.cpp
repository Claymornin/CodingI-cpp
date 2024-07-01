// Clayton McCandless   Week 3 - Structures
// June 20, 2024

//identical to classes in C++ (except public by default)
// we can talk about POD (Plain Old Data) structs - they don't have functions

#include <iostream>
#include <string>
#include <vector>
// #include <ctime>
// #include <cstdlib>
// #include <algorithm>


using namespace std;

enum enemyType {GRUNT, MINIBOSS, BOSS};

// POD structure
// a custom variable type
// these data members are public by default.


struct enemy {
    int health;
    int damage;
    string  name;
    enemyType type;
    
};

struct address {
    string streetName;
    int streetNumber;
    string city;
    string state;
    int zipCode;
};

struct employee {
    int Id;
    string name;
    int age;
    // string address
    address addr;// you can hold a structure within another structure
    float wage;

};

// function combines five elements into one
string AddressOneLine (address addr) {
    string OneLine = "";
    OneLine += to_string(addr.streetNumber);
    OneLine += " " + addr.streetName;
    OneLine += ", " + addr.city;
    OneLine += ", " + addr.state;
    OneLine += " " + to_string(addr.zipCode);

    return OneLine; 
}

int main () {
    cout << "Let's talk about structures.\n";
    
    enemy golem;
    golem.health = 10;
    golem.damage = 4;
    golem.name = "Golem";
    golem.type  = GRUNT;

    cout << "Here's " << golem.name << "! His health is " << golem.health << ".\n";


    enemy wizard;
    wizard.health = 15;
    wizard.damage = 5;
    wizard.name = "Gary the Wizard";
    wizard.type = MINIBOSS;


    cout << wizard.name << " is attacking " << golem.name << "!\n";
    golem.health -= wizard.damage;

    if( golem.health < 1) {
        cout << golem.name << " has been killed!\n"; 
    } else {
        cout << golem.name << " has " << golem.health << " health left!\n\n";
    }

    // can make a vector of whatever type you want
    vector<enemy> enemies;

    enemies.push_back(golem);
    enemies.push_back(wizard);

    cout << "\tStatus of all enemies!\n\n";
    for (int i = 0; i < enemies.size(); i++) {
        cout << enemies[i].name << " has " << enemies[i].health << " health.\n";
        cout << "Their damage is " << enemies[i].damage << " and their type is ";
        // switch is an alternative to if and else statment, but only tests once
        switch (enemies[i].type)    
        {
        case GRUNT:
            cout << "Grunt";
            break;
        case MINIBOSS:
            cout << "Mini-Boss";
            break;
        case BOSS:
            cout << "Boss";
            break;
        default:
            break;
        }
        cout << ".\n\n";
    }

    

    employee clayton;
    clayton.Id = 245;
    clayton.name = "Clayton McCandless";
    clayton.age = 22;
    clayton.wage = 7.25f;
    clayton.addr.streetNumber = 1101;
    clayton.addr.streetName = "Main Street";
    clayton.addr.city = "Wichita";
    clayton.addr.state = "KS";
    clayton.addr.zipCode = 12345;
    
    cout << "Employee Number " << clayton.Id << ": " << clayton.name << ", age " << clayton.age << ".\n";
    cout << clayton.name << " lives at " << AddressOneLine(clayton.addr) << ".\n";
    cout << "Hourly wage in dollars: " << clayton.wage << ".";

    return 0;
}