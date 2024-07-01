// Clayton McCandless   Week 4 - Inheritance
// June 29, 2024

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>  // don't forget to srand()

using namespace std;

// Player       Enemy
// Health       Health
// Damage       Damage
// Attack()     Attack()
// Block()      Block()
class item {
public:
    string itemName;
    int damage;

    // item constructor
    item() {
        damage = rand() % 3 + 4;
    }
};

class person {
private:        // children cannot have the parent's private variables,
                    // though they ARE inherited, and CAN be accessed through get/set functions


protected:      // children CAN have copies of private variables,
                    // but the public cannot see them in either class
    string personName;
    int health;
    item weapon;

public:
    person() { 
        cout << "Person Constructor.\n";
        personName = "Person";
        health = 30;

        item newItem;
        weapon = newItem;
    };

    int attack() {
        return weapon.damage;
    };

    void defend(int givenDamage) {
        if(rand() % 2 == 0) {       // 50 % chance to block
            cout << "Successful block!\n";
        } else {
            cout << "Successful attack!\n";
            health -= givenDamage;
        }
        
        if (health <= 0) {
            cout << personName << "has died.\n";
        } else {
            cout << personName << "'s health is now " << health << ".\n";
        }
    };

    void setName(string givenName) {
        personName = givenName;
    };

    string getName() {
        return personName;
    };
};

// "class boss : private/protected person" will make all of person's public functions 
    // part of the specified type

class boss : public person {
public:
    boss() {
        cout << "Hello! I am a boss, my name is " << getName() << ".\n";
        weapon.damage *= 3;    // boss damage is triple
    }
    // not used by default, only uses person.attack
    // int attack() {  
    //     taunt();
    //     return weapon.damage;
    // }

    void taunt() {
        cout << "You smell!\n";
    }
};

int main () {
    srand(time(0));
    cout << "Let's talk about inheritance!\n";

    person player;
    cout << "What is your name, player?\n";
    string input;
    getline (cin, input);    // getline returns characters.
    player.setName(input);

    person moblin;
    moblin.setName("Moblin");
    cout << moblin.getName() << ".\n";

    cout << "Moblin attacks player!\n";
    player.defend(moblin.attack());


    boss ganon;
    ganon.setName("Ganon");
    cout << ganon.getName() << "\n";
    ganon.taunt();

    player.defend(ganon.attack());

    return 0;
}