// Clayton McCandless   Week 3 - Header
// June 22, 2024

#include<vector>
#include <iostream>
#include <string>

using namespace std;

int AddTwoNumbers (int first, int second) {
    return first + second;
}

void Display (vector<string>& vector) {
    for (int i = 0; i < vector.size(); i++) {
        cout << vector[i] << "\n";
    }
}

void Display (vector<int>& vector) {
    for (int i = 0; i < vector.size(); i++) {
        cout << vector[i] << "\n";
    }
}
