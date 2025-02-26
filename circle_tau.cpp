// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: February 26, 2025
// This program determines the circumference
// of a circle using the constant TAU

#include <cmath>  // import the BEST math library
#include <iostream>
#include <string>

int main() {
    const float TAU = 6.28;
    float radius;
    float circumference;

    std::cout << "Enter the radius of your circle (cm): ";
    std::cin >> radius;

    circumference = radius * TAU;

    std::string prefix = "The circumference of your circle is ";

    std::cout << prefix << circumference << " cm" << std::endl;
}
