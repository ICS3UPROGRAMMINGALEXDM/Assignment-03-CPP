// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 02//22
// Description: Calculates the average of three numbers inputted by the user
#include <cstdio>
#include <iostream>
#include "colors.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stoi;
using std::stof;


// Declaring variables
float average, num1Flt, num2Flt, num3Flt;
bool restartLoop = true, answerLoop = true;



// function for the average calculations
void calculate() {
    average = (num1Flt + num2Flt + num3Flt) / 3;
    printf("%sThe average of your three numbers is %.2f \n",
        BOLDYELLOW, average);
}


int main() {
    // Loop to restart calculator
    while (restartLoop) {
        string num1, num2, num3, answer;
        // When the user says 'y' in answer this will be set to true
        // so that the question about playing again will be asked
        // again when it goes all through the program
        answerLoop = true;
        // Get user input
        cout << BOLDWHITE << "Enter your first number: ";
        cin >> num1;
        cout << "Enter your second number: ";
        cin >> num2;
        cout << "Enter your second number: ";
        cin >> num3;

        // try is tp check to ensure a number was entered
        try {
            // casting to int
            num1Flt = stof(num1);
            num2Flt = stof(num2);
            num3Flt = stof(num3);

            if (num1Flt >= 0
                && num1Flt <= 100
                && num2Flt >= 0
                && num2Flt <= 100
                && num3Flt >= 0
                && num3Flt <= 100) {
                    calculate();
                    while (answerLoop) {
                        cout << BOLDWHITE <<
                        "Would you like to calulate again? (y/n): ";
                        cin >> answer;

                        if (answer == "y") {
                            cout << BOLDGREEN << "Okay" << endl;
                            answerLoop = false;
                        } else if (answer == "n") {
                            cout << BOLDMAGENTA << "Okay" << endl;
                            answerLoop = false;
                            restartLoop = false;
                        } else {
                            cout << BOLDRED <<
                            "I don't understand. Please try again." << endl;
                        }
                    }
            } else {
                cout << BOLDRED <<
                "Numbers can't be less than 0 or more than 100" << endl;
            }
        } catch (...) {
            cout << BOLDRED << "Invalid input, try again!" << endl;
        }
    }
}
