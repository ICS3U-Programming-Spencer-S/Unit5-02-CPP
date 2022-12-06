// Copyright (c) 2022 Spencer Scarlett All rights reserved.
// .
// Created by: Spencer Scarlett
// Created on: Dec 5, 2022
// A program which calculates Area of a triangle
// Using functions with perimeters

#include <iomanip>
#include <iostream>


void CalcArea(float base, float height) {
    float areaTri = 0;
    // calculation
    areaTri = (base * height) / 2;
    // output
    std::cout<< "The triangle has an area of: " << areaTri <<
    "cm^2" << std::endl;
}

int main() {
    std::string inpBaseStr;
    std::string inpHeightStr;
    float inpBaseFlo;
    float inpHeightFlo;

    std::cout << "Enter a positive base (cm): ";
    std::cin >> inpBaseStr;
    std::cout << "Enter a positive height (cm): ";
    std::cin >> inpHeightStr;

    try {
        // converts into to a float from string
        inpBaseFlo = std::stof(inpBaseStr);
        inpHeightFlo = std::stof(inpHeightStr);

        // checks input if less then 0
        if (inpBaseFlo < 0 || inpHeightFlo < 0) {
            std::cout << "Inputs cannot be negative or zero!" << std::endl;

            // calls function
        } else {
            CalcArea(inpBaseFlo, inpHeightFlo);
        }

        // for string inputs/wrongfully inputs
    } catch (std::invalid_argument) {
        std::cout << "You must enter non-negative numbers!" << std::endl;
    }
}
