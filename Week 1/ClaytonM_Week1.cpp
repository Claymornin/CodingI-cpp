// Clayton McCandless Variables, Logic, and Random Numbers
// June 6th, 2024

// variables - int, float, bool, string, char
// logic - if/else
// random numbers and seeding
// while loops

#include <iostream>
#include <string>
#include <ctime>    // for seeding the random number generator
#include <cstdlib>  // for generating random numbers with !rand
//#include <chrono>
//#include <thread>

using namespace std;

// when creating a function include,
// return type, name of function, and parameters


int main() {
    // std::this_thread::sleep_for(5000);
    srand (time(0)); // seed the random number generator with the current time
    cout <<"\tWelcome to Week 1!\n"; // \n is for a new line
    cout << "What would you like to do?\n"; // \t is for tab
    cout << "Press 1 to work on the variables.\n";
    cout << "Press 2 to work on logic.\n";
    cout << "Press 3 to work on math.\n";
    cout << "Press 4 to work on random numbers.\n";
    cout << "Press 5 to play a short game!\n";
    
    // creating a new variable of the type "integer" named
        // "num Input" and given a value of 0
    int numInput = 0;

    // use "c-in" to get text from the console
    // whatever the user typed, save that to NumInput
    cin >> numInput;

    if (numInput == 1) {
        cout << "\tAn integer is a whole number, positive or negative\n";
        cout << "between -2 billion and positive 2 billion. \n";

        cout << "Let's talk about some other variables.\n";
        cout << "A float, or a 'floating point number', is a decimal number with\n";
        cout << "7-digits of accuracy.\n";

        float pi = 3.1415f;
        double gravity = -9.2; // a double-precision floating point number is accurate
                                    // to 22 decimal places.
        
        cout <<" Let's talk about characters.\n";
        cout << "A character is a single letter, number, or symbol, anything your keyboard\n";
        cout << "can type.\n";
        
        char initial = 'b';     // single quotes on characters
        char answerYN = 'y';    // good for asking yes or no

        cout << "Do you want to keep going?\n";
        cin >> answerYN;        // assign the player's input to the value of answerYN
  
        if (answerYN == 'y') {
            cout << "Great! Let's keep going.\n";
            }      
        else if (answerYN == 'n') {
            cout << "Thanks for playing! See you next time. \n";

            return 0;
        }
        else {
            cout << "Alright, well, you didn't press 'y', so see you later.\n"; 

            return 0;       //this ends the program
            }

            cout << "Say, what is your name, anyway? \n";
            string userName = "";       // created a string variable called userName.
            cin >> userName;            // user's input is now the value of userName
            // getline(cin, userName);
            // use getline for multi-word strings, but only strings
            // USER_NAME, user_name, user-name, UserName, username, USERNAME
            // camelCase = capitalizing every subsequent word after the first
            // CapitalCase = capitalizing every word (AddTwoVariables)
            // avoid long or non-specific variable names (x, num, etc.)
            string FinalBossIdentifier = "George";
            cout << "Hello, " << userName << " it's nice to meet you!\n";
            cout << "A string is an ordered list of characters.\n";
            string stringDefinition = "A string is an ordered list of characters.\n";
            cout << "Would you like to hear a story?\n";
            cout << "Great! Here you go.\n";
            cout << "Once upon a time, " <<userName<< " went on an adventure.\n";

            cout << "A boolean is a variable that can only be true or false. \n";
            bool isGrounded = true;
            bool LightisOn = false;

            if (LightisOn == true) {
                cout << "The light is on!\n";
            } 
            else {
                cout << "It's dark!\n";
            }

}   // end of numInput == 1

    else if (numInput == 2) {
        cout << "You have chosen program " <<numInput<< " .\n";
        cout << "Let's talk about logic!\n";
        cout << "An if statement evaluates its input for truth.\n";
        // if (test) = if the test is true, do THIS code

        // by default, this string variable can be changed.
        // if we don't want the variable to be changed we make it constant
        // a constant variable is a read-only variable
        const string userName = "Clayton";
        if (userName == "Clayton") {
            cout << "Hello Student!\n";
        

        // this is a constant vaariable and you are trying to change it, you can't
        // userName = "BRIAN";

        // else statement is what runs if the if statement does not run
        cout << "An else statement is the catch-all/default statement.\n";
        cout << "And it doesn't get a test.\n";

        cout << "An else if is the second test in the same set of tests.\n";
        cout << "Let's have an example. Give me a number between 1 and 10 (inclusive).\n";
        cin >> numInput;

        // a single = is an assignment operator, so it says 'you now equal this'
        // a double == is an equality operator, it ASKS 'are you two equal?'

            if (numInput == 7) {
        cout << "That's the most common response to a number between 1 and 10.\n";
            }
            else if (numInput == 0) {
        cout << "It may be a hero, but zero is not among 1 through 10.\n";
            }
            else if (numInput > 10) {
               cout << "You've picked a number greater than 10!\n";
            }

            else if (numInput < 1) {
               cout << "You've picked a number less than 1!\n";
            }
            else {
                cout << "You've picked " <<numInput<< ".\n";
            }

            // the AND operator, the OR operator, and the NOT operator
        cout << "The AND && operator allows us to have more than one test.\n";
        cout << "All tests must be true, for the entire set to be true.\n";

        bool playerIsInStore = true;
        int gold = 50;
        cout << "The player is trying to purchase a shield that costs 40 gold.\n";

        // if (playerIsInStore == true && gold >= 40){
        //     cout << "You have purchased the shield!\n";
        // }
        // else {
        //     cout << "You could not purchase the shield.\n";
        // }

        if (playerIsInStore == true) {
            if (gold >= 40) {
                cout << "You purchased the shield!\n";
            }
            else {
                cout << "You don't have enough gold to buy the shield.\n";
            }
        }
        else {
                cout << "You can only buy the shield in the store!\n";
            }

        cout << "Let's talk about the OR operator.\n";
        cout << "The OR operator allows for multiple tests,\n";
        cout << "if ANY of the tests are true, the entire set evaluates to true.\n";
        string stringInput = "";
        cout << "Would you like to keep playing?\n";
        cin >> stringInput;
        if (stringInput == "yes" || stringInput == "YES" || stringInput == "Yes") {
            cout << "Great! Let's keep playing!\n";
        }
        else {
            cout << "Thanks for playing.\n";
        }

        cout << "The NOT operator inverts a true or false statement.\n";
        cout << "The NOT operator is an exclamation point.\n";
    
        bool playerIsDead = false;

        if (!playerIsDead) {
                cout << "The player is alive.\n";
            }
        else {
            cout << "The player is DEAD.\n";
        }

            bool lightIsOn = false;
         while (true) {
                cout << "Flipping the lights.\n";
                lightIsOn = !lightIsOn;

            if (lightIsOn == true) {
                cout << "The light is on.\n";
            }
            else {
                cout << "The light is now off.\n";
            }
            cout << "Keep going?\n";
            cin >> stringInput;
            if (stringInput != "yes") {
                cout << "Breaking out of the loop.\n";
                break;
            }

        }
    }
}   // the end of numInput == 2

    else if (numInput == 3) {
        cout << "Let's talk about math for a second.\n";

        int counter = 0;
        string stringInput = "";
        while (true) {
            cout << "Counter is equal to " <<counter<< ".\n";
            // counter = counter + 1; //adding 1 to counter's current value
                // using the combined assignment operator
            counter += 1;

            cout << "Keep going?\n";
                cin >> stringInput;
                if (stringInput != "yes") {
                    cout << "Breaking out of the loop.\n";
                    break;
                }
        }
        int gold = 10;
        while (true) {  
            cout << "You've got " <<gold<< " pieces of eight.\n";
            
            cout << "You've tripled your gold!\n";
            gold *= 3;
            cout << "You know have " <<gold<< " pieces of eight.\n";
            cout << "Keep going?\n";
                cin >> stringInput;
                if (stringInput != "yes") {
                    cout << "Breaking out of the loop.\n";
                    break;
                }    
        }
        // other math, +-, */, ( )
        cout << "Here's one more loop.\n";
        while (counter++ < 50) {
        cout << "The count is now" <<counter<< ".\n";

        }
} // end of numInput == 3

    else if (numInput == 4) {
        cout << "Let's talk about random numbers.\n";
        // make sure to #include <ctime> and #include <cstdlib>
        // make sure to seed rand() with srand(time(NULL))
        cout << "Here is a random number from rand(): " << rand () << ".";

        cout << "Here are ten random numbers.\n";
        int count = 0;
        while (count++ < 10) {
            cout << rand() << ".\n";
        }

        cout << "Let's constrain these numbers to a reasonable range.\n";
        cout << "Here are ten six-sided dice rolls.\n";
        count = 0;
        while (count++ < 10) {
            cout << rand() % 6 + 1 << ".\n";
        }
        cout << "The remainder of 66/5 = " << 66 % 5 << ".\n";
        cout << "I am thinking of a number between 1 and 10.\n";
        cout << "Can you guess it?\n";

        int theNumber = rand() % 10 + 1;
        int theGuess = 0;
        while(theGuess != theNumber) {
            cout << "What is your guess?\n";
            cin >> theGuess;
            if (theGuess > theNumber) {
                cout << "Too high!\n";
            }
            else if (theGuess < theNumber) {
                cout << "Too low!\n";
            }
            else {
                cout << "That's right! You've guessed it.\n";
            }
        }
        cout << "You're at a table with your friends.\n";
        cout << "Bob, Danny and Vin are rolling dice too.\n";
        int player = rand() %  20 + 1;
        int bob = rand() %  20 + 1;
        int danny = rand() %  20 + 1;
        int vin = rand() %  15 + 6;
        int highScore = 0;
        string winner = "";
        cout << "You roll a " << player << ".\n";
        if (highScore < player) {
            highScore = player;
            winner = "You!\n";
        }
        cout << "Bob rolls a " << bob << ".\n";
        if (highScore < bob) {
            highScore = bob;
            winner = "Bob!\n";     
        }  
        cout << "Danny rolls a " << danny << ".\n";
        if (highScore < danny) {
            highScore = danny;
            winner = "Danny!\n";
        }
        cout << "Vin rolls a " << vin << ".\n";
        if (highScore < vin) {
            highScore = vin;
            winner = "Vin!\n";
        }
        cout << "The winner is " <<winner<< " with a high score of " <<highScore<< ".\n";
} // end of numInput == 4

else if (numInput == 5) {
    cout << "Blockade Runner\n\n\n";
    // you need integers for enemyAttack, enemyHealth, playerBlock, playerHealth, and gold
    // you need a while loop
    // you need random numbers for attack, block, and gold
    // you need an if/else statement to discover which random number was higher
   
    cout << "Welcome aboard our ship!\n";
    cout << "As our new gunnery sergeant, it is your.\n";
    cout << "responsibility to defend our vessel.\n";
    cout << "while retrieving supplies from our drop off point!\n";

    string answer = "";
    cout << "Would you like further explanation before our run?\n";
    cin >> answer;
    
    if (answer == "yes" || answer == "Yes" || answer == "YES" || answer == "Yeah") {
        cout << "Our blockade runner is equipped with state-of-the-art weapons;\n";
        cout << "however, it still requires a steady hand to guide.\n";
        cout << "You must engage enemies in turn-based combat,\n";
        cout << "where the roll of the dice determines victory.\n";
        cout << "Aim to liberate 100 supply crates.\n\n";
    }
    else if (answer == "no" || answer == "No" || answer == "NO") {
        cout << "Very well.\n\n";
    }
    
    cout << "Now... Let the mission begin!\n\n\n";

    cout << "The enemy blockade lies ahead!\n";
    
    int playerHealth = 30;
    int playerBlock = 0;
    int enemyHealth = 45;
    int enemyAttack = 0;
    int gold = 0;
    int turns = 0;
    string choice = "";
    while (playerHealth > 0 && turns++ < rand() % 10 + 5) {
    
    cout << "\tTurn " << turns << "\n";
        //attack phase
        playerBlock = rand () % 20 + 1;
        enemyAttack = rand () % 20 + 1;

        if (enemyAttack < playerBlock) {
            enemyHealth -= rand() % 8 + 1;
            cout << "Enemy hit!";
            cout << "\t Enemy Health: " << enemyHealth << ".\n";
        }
        else if (enemyAttack >= playerBlock) {
            playerHealth -= rand() % 8 + 1;
            cout << "You've been hit!";
            cout << "\t Health: " << playerHealth << ".\n";
        }
        if (playerHealth <= 10) {
            cout << "Warning, gunnery sergeant! Hull condition is critical!.\n";
        }
        if (playerHealth <= 0) {
            cout << "I knew I shouldn't have trusted a new recruit.\n";
            cout << "Abandon all stations!\n";
            cout << "We've wasted " << gold << " supplies.\n";
            break;
        }
        else if (enemyHealth <= 0) {
            cout << "Do you see that?\n";
            cout << "We took down the blockade!\n";
            break;
        }
        else {
            gold += rand() % 20 + 1;  
                if (turns <= 9) {
                        cout << "We've recovered " << gold << " supply crates!\n\n";
                        cout << "Should we retreat, sergeant?\n";
                        cin >> choice;
                    if (choice == "yes" || choice == "Yes" || choice == "YES" || choice == "Yeah") {
                        cout << "Very well, gunnery sergeant!\n";
                        cout << "All hands, retreat!\n";
                        break;
                    }
                
                    else if (choice == "no" || choice == "No" || choice == "NO") {
                        cout << "Very well.\n";
                        cout << "Continue the run!\n\n";
                    }
                }
                else {
                    cout << "Time to go!\n\n";
                    break;
                }
        }
    }
    if (playerHealth > 0) {
        cout << "Well done, sergeant! We escaped the blockade.\n";
        cout << "We delivered " << gold << " crates sergeant!\n";
        if (gold >= 100) {
            cout << "You may become the pride of this fleet one day!\n";
        }
        else {
            cout << "A good run, but there's still much to do.\n";
            cout << "Try again when you're ready.\n";
        }
    }
    else {
        cout << "Try again!\n";
    }
      
    
} // end of numInput == 5
else {
    cout << "You typed " << numInput << ", which wasn't one of the options.\n";
    cout << "An else statement is a 'catch-all' or 'default' statement.\n";
    }

        // cl /Ehsc week1a.cpp
}       // end of main function