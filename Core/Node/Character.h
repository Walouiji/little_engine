#pragma once
#include "Node.h"

#include <iostream>

class Character: public Node {
    void _init() override {
        std::cout << "Character initialized." << std::endl;
    }
    void _process() override {
        std::cout << "Character processing..." << std::endl;
        // For demonstration, we'll stop after one process call
        int age = 0;

        std::cout << "Enter character age: ";
        std::cin >> age;
        if (age >= 18) {
            std::cout << "Character is an adult." << std::endl;
        } else {
            std::cout << "Character is a minor." << std::endl;
            running = false; // Stop processing after this
        }
    }
};