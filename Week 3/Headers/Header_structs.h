#include<vector>
#include <string>
#include <iostream>



using namespace std;

// Plain Old Data Structures
struct robot {
    int charge;
    string name;
};

void Display (vector<robot>& vector) {
    for (int i = 0; i < vector.size(); i++) {
        cout << vector[i].charge << "\t";
        cout << vector[i].name << "\n";
    }
};