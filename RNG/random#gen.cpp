#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n' << num2 << '\n' << num3 << '\n';

//This will generate a *random* number from 0 and 32,767 by default

    return 0;
}