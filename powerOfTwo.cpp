// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: May 7th, 2025
// This program asks the user for a whole calculates and
// displays the and displays the square of the starting from 0.

#include <cmath>
#include <iostream>
#include <string>

int main() {
    // Get user num as a string
    std::string user_num_string;
    std::cout << "Enter a number: ";
    std::cin >> user_num_string;

    try {
        // Convert user num to an integer
        int user_num = std::stoi(user_num_string);
        //
        if (user_num >= 0) {
            // if user_num is greater than or equal to 0
            for (int counter = 0; counter < user_num + 1; counter += 1) {
                // initialization = starts at 0
                // condition = when counter less than user_num + 1
                // increment by 1 each time
                int product = pow(counter, 2);
                // product = counter ** 2
                std::cout << counter << " ** 2 = " << product << std::endl;
            }

        } else {
            // If user enters a negative number the code below will be
            // displayed
            std::cout << user_num << " is not a positive number" << std::endl;
        }
    } catch (std::invalid_argument) {
        // The code will be displayed when user enters something
        // other than an integer
        std::cout << user_num_string << " is a valid input" << std::endl;
        // The code below will be the code displayed in the terminal
    }
    std::cout << "Thank you \nHave a great day." <<  std::endl;
}
