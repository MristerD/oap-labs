// lab02_task2.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>


    int main() {
        int number;
		std::cout << "enter a three-digit number: ";
        std::cin >> number;

        if (number < 100 || number > 999) {
            std::cout << "Number is not a three-digit number." << std::endl;
            return 1;
        }

        
        int hundreds = number / 100;        
        int tens = (number / 10) % 10;     
        int units = number % 10;           

        int sum = hundreds + tens + units;

        std::cout << number << " -> " << hundreds << " " << tens << " " << units << ", sum " << sum << std::endl;

        return 0;
    }





