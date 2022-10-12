// Copyright 2022 MTHS
// Author: Emmanuel
// This program adds two numbers
// with user input
#include <iostream>
int main() {
    // this function calculates area and perimeter
    int Fn;
    int Sn;

    // input
    std::cout << "Enter in any number (mm): ";
    std::cin >> Fn;
    std::cout << "Enter in any number (mm): ";
    std::cin >> Sn;

    // process
    Fn = (Fn + Sn);
    Sn = (Fn + Sn);

    // output
    ;std::cout << "" << std::endl;
    std::cout << "Total is: " << Fn << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
