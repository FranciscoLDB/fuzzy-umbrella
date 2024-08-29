#include <iostream>
#include <ctime>

using std::cout;
using std::cin;

void drawBoard(char* spaces){
    cout << "=+=+=+=+=+=\n";
    cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << " \n";
    cout << "---|---|---\n";
    cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << " \n";
    cout << "---|---|---\n";
    cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << " \n";
    cout << "=+=+=+=+=+=\n";
}
void playerMove(char* spaces, char player){
    int move = 0;
    do{
        cout << "Enter a number between 1 and 9: ";
        cin >> move;
        move--;
        if(spaces[move] == ' '){
            spaces[move] = player;
            break;
        }
    }while(true);
}
void computerMove(char* spaces, char computer){
    int move = 0;
    srand(time(0));
    while(true){
        move = (rand() % 9);
        if(spaces[move] == ' '){
            spaces[move] = computer;
            break;
        }
    };
}
bool checkWin(char* spaces, char player, char computer){
    return 0;
}
bool checkTie(char* spaces){
    return 0;
}

int main (){
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    while(true){
        drawBoard(spaces);
        playerMove(spaces, player);
        if(checkWin(spaces, player, computer)){
            cout << "Congratulations! You won!\n";
            break;
        } else if(checkTie(spaces)){
            cout << "It's a tie!\n";
            break;
        }
        computerMove(spaces, computer);
        if(checkWin(spaces, player, computer)){
            cout << "Game Over! You lost!\n";
            break;
        }else if(checkTie(spaces)){
            cout << "It's a tie!\n";
            break;
        }
    }

    return 0;
}