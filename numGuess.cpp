// Copyright (c) 2021 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Dec 2021
// This program checks if the guessed number is right

#include <iostream>

int main() {
    // this function checks if the guessed number is right
    const int RIGHT_NUMBER = 2;
    int guessedNumber;

    // input
    std::cout << "Enter the guessed number between 0 and 9: ";
    std::cin >> guessedNumber;
    std::cout << "" << std::endl;

    // process
    if (guessedNumber == RIGHT_NUMBER) {
        // output
        std::cout << "Congrats, you guessed right!";
    }
    if (guessedNumber != RIGHT_NUMBER) {
        // output
        std::cout << "Oops, you guessed wrong :(";
    }
}
