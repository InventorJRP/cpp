#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);
void removeZeros(std::string &cardNumber);

int main(){

    std::string cardNumber;
    int result;

    std::cout << "Enter a card number: ";
    std::getline(std::cin, cardNumber);

    removeZeros(cardNumber);

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid\n";
    }else{
        std::cout << cardNumber << " is not valid\n";
    }

    return 0;
}
void removeZeros(std::string &cardNumber){
    if(cardNumber[4] == ' '){
        cardNumber.erase(4, 1);
        cardNumber.erase(8, 1);
        cardNumber.erase(12, 1);
    }
}
int getDigit(const int number){

    return number % 10 + (number / 10); //integer division here
    // this splits multi digit numbers
}
int sumOddDigits(const std::string cardNumber){
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i -=2){
        sum += cardNumber[i] - '0';
    }
    return sum;
}
int sumEvenDigits(const std::string cardNumber){

    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i -=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
        //subtracting char '0' because this converts each character into an int value
    }
    return sum;

}
