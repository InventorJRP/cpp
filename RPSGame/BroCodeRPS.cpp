#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();

    return 0;
}
char getUserChoice(){

    char player;
    std::cout << "Rock-Paper-Scissors Game!";

    do{
        std::cout << "choose one of the following: \n";
        std::cout << "'r' for rock\n'p' for paper\n's' for scissors\n";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

   return player; 
}
char getComputerChoice(){
    
    srand(time(0));
    int num = rand() % 3 + 1;
}
void showChoice(char choice){

    switch(choice){
        case 'r': std::cout << "Rock\n";
                  break;
        case 'p': std::cout << "Paper\n";
                  break;
        case 's': std::cout << "Scissors\n";
                  break;
    }
}