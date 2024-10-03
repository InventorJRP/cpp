#include <iostream>

char getUserChoice();
char getComputerChoice();
void chooseWinner(char player, char computer);
bool playAgain();

int main(){

    char player;
    char computer;
    bool restart;

    std::cout << "ROCK, PAPER, SCISSORS GAME\n";

    do{
        player = getUserChoice();
        computer = getComputerChoice();
        chooseWinner(player, computer);
        restart = playAgain();
    }while(restart == true);
    
    std::cout << "Thanks for Playing!\n";

    return 0;
}

char getUserChoice(){

    char choice;

    std::cout << "Choose Rock(R), Paper(P), or Scissors(S)\n Enter Choice: ";
    
    std::cin >> choice;

    while(choice != 'R' && choice != 'P' && choice != 'S'){
        std::cout << "Invlid choice!\n";
        std::cin >> choice;
    }

    return choice;
}
char getComputerChoice(){

    char choice;

    srand(time(0));
    int num = rand() % 3;

    switch(num){
        case 0: choice = 'R';
                break;
        case 1: choice = 'P';
                break;
        case 2: choice = 'S';
                break;
    }
    return choice;
}
void chooseWinner(char player, char computer){
    
    switch(player){
        
         case 'R': switch(computer){
                
                case 'R':
                    std::cout << "Computer: R \nDraw, Try Again";
                    break;
                case 'P':
                    std::cout << "Computer: P \nYou Lose, Try Again!";
                    break;
                case 'S':
                    std::cout << "Computer: S \nYou Win!\n";
                    break;}
            break;
        
        case 'P': switch(computer){
                
                case 'R':
                    std::cout << "Computer: R \nYou Win!";
                    break;
                case 'P':
                    std::cout << "Computer: P \nDraw, Try Again!";
                    break;
                case 'S':
                    std::cout << "Computer: S \nYou Lose, Try Again!";
                    break;}
            break;
        case 'S': switch(computer){
                
                case 'R':
                    std::cout << "Computer: S \nYou Lose, Try Again!";
                    break;
                case 'P':
                    std::cout << "Computer: P \nYou Win!";
                    break;
                case 'S':
                    std::cout << "Computer: S \nDraw, Try Again!";
                    break;}
            break;
}
}
bool playAgain(){

    char choice;
    
    do{
        std::cout << "\nWould you like to play again?\n(y/n): ";
        std::cin >> choice;

        if(choice != 'y' && choice != 'n'){
            std::cout << "Invalid!\n";
    }
    }while(choice != 'y' && choice != 'n');
    
    if(choice == 'y'){
        return true;
    }else{
        return false;
    }
}