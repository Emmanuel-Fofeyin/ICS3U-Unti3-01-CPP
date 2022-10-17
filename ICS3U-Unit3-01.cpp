// Copyright 2022 MTHS
// Author: Emmanuel
// This program adds two numbers
// with user input
#include <iostream>
int main() {
    // this function calculates area and perimeter
    int first_number;
    int second_number;
    int sum;

    // input
    std::cout << "Enter in any number: ";
    std::cin >> first_number;
    std::cout << "Enter in any number: ";
    std::cin >> second_number;

    // process
    sum = (first_number + second_number);

    // output
    std::cout << "" << std::endl;
    std::cout << "" << first_number << "+" << "" << second_number <<
    "=" << sum << std::endl;
    std::cout << "\nDone." << std::endl;
}
