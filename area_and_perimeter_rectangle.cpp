// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Sept 2021
// This program calculates the area and perimeter of a rectangle
//    with the length and width that are given by the user

#include <iostream>

int main() {
    // This function calculates the area and the perimeter

    int length;
    int width;
    int areaOfRectangle;
    int perimeterOfRectangle;

    // input
    std::cout << "Enter the length of the rectangle (cm): ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: (cm): ";
    std::cin >> width;

    // process
    areaOfRectangle = length * width;
    perimeterOfRectangle = 2 * (length + width);

    // output
    std::cout << "The area will be " << areaOfRectangle << " cm²" << std::endl;
    std::cout << "The perimeter will be " << perimeterOfRectangle;
    std::cout << " cm" << std::endl;
    std::cout << "\nDone" << std::endl;
}
