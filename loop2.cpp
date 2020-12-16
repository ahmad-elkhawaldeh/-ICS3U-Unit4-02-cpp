// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: Dec 2020
// This program asks the user for a positive integer,
// then multiplies all the whole numbers up to that number

#include <iostream>

int main() {
    int positiveInteger;
    int loopCounter = 0;
    int number_factorial = 1;
    std::string positive_as_string;

    std::cout << " I will give you the factroial of the number you input"
    << std::endl;


    // input
    std::cout << "Enter a number : ";
    std::cin >> positive_as_string;

    // process
     try {
        positiveInteger = std::stoi(positive_as_string);

        if (positiveInteger < 0) {
            throw std::invalid_argument("");
        }

        do {
        loopCounter = loopCounter + 1;
        number_factorial = number_factorial * loopCounter;
        } while (loopCounter < positiveInteger);

        std::cout << "the factorial of " << positiveInteger << " is "
        << number_factorial << std::endl;
    }catch (std::invalid_argument) {
            std::cout << "That was not a invalid integer" << std::endl;
    }
}
