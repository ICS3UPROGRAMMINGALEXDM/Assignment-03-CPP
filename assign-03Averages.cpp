#include "colors.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stoi;


// Declaring variables
string num1, num2, num3, answer;
float average, num1Flt, num2Flt, num3Flt;
bool restartLoop = true, answerLoop = true;



// function for the average calculations
void calculate() {
    cout << BOLDGREEN << "Hello";

}


int main() {
    // Loop to restart calculator
    while (restartLoop) {
        // Get user input
        cout << BOLDWHITE << "Enter your first number: ";
        cin >> num1;
        cout << "Enter your second number: ";
        cin >> num2;
        cout << "Enter your second number: ";
        cin >> num3;

        try {
            num1Flt = stoi(num1);
            num2Flt = stoi(num2);
            num3Flt = stoi(num3);
            
            if (num1 >= 0
                && num1 <= 100
                && num2 >= 0
                && num2 <= 100
                && num3 >= 0
                && num3 <= 100)
        }
    }
}