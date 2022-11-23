// Copyright (c) 2022 Kaitlyn Ip All rights reserved.
//
// Created by: Kaitlyn Ip
// Created on: Nov 2022
// This program uses a nested loop

#include <iostream>
#include <string>


int main() {
    // this function uses a nested loop
    int red;
    int green;
    int blue;

    // process & output
    for (red = 0; red < 256; red++) {
        for (green = 0; green < 256; green++) {
            for (blue = 0; blue < 256; blue++) {
                std::cout << "RBG(" << red << "," << blue
                << "," << green << ")" << std::endl;
            }
    }
    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
    }
}
