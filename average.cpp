// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 10/21/2021
// This is the Average program
// The program generates and displays 10 random numbers between 1-100
// The program then calculates and displays the average of all the numbers

#include <iostream>
#include <random>


main() {
    // this function uses an array

    int average[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int answer = 0;
    int loopCounter = 0;
    int addedNumbers = 0;
    float aNumber;

    // input
    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        // making the someRandomNumber variable a random number
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        // mersenne_twister
        std::uniform_int_distribution<int> idist(0, 100);
        // [0, 100]
        aNumber = idist(rgen);
        std::cout << "The random number is " << aNumber << std::endl;
        addedNumbers = addedNumbers + aNumber;
    }

    answer = addedNumbers / 10;

    std::cout << "\nThe averagec is " << answer << std::endl;
    std::cout << "\nDone." << std::endl;
}
