#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "************ Temperature Converter *************\n";
    std::cout << "What unit would you like to convert to? (C/F): ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in C: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32;
        std::cout << "The temperature is: " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in F: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "The temperature is: " << temp << "C\n";
    }
    else{
        std::cout << "Please enter only C or F\n";
    }

    std::cout << "************************************************\n";
    return 0;
}