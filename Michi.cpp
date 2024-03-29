\\zublime
#include <iostream>
#include <ctime>
#include <iomanip>
void dibujo(char *array);
void turnoPersona(char *array);
void turnoComputador(char *array);
char check(char *array);
int main(){
    char array[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    std::cout << "************ MICHI ************\n";
    char winner = 'f';
    while(winner == 'f' || winner == ' '){
        turnoPersona(array);
        dibujo(array);
        winner = check(array);

        if(winner == 'X' || winner == 'O' || winner == 'E') break;

        turnoComputador(array);
        dibujo(array);
        winner = check(array);
        if(winner == 'X' || winner == 'O' || winner == 'E') break;
    }
    if(winner == 'E') std::cout << "Perdiste, un empate no sirve";
    else if(winner == 'X') std::cout << "Ganador: Hombre\nLoser: Computador";
    else if(winner == 'O') std::cout << "Ganador: Computador\nLoser: Hombre";
    std::cout << "\nGracias por jugar :7";
}
void dibujo(char *array){
    std::cout << std::endl;
    std::cout << "     |     |     \n";
    printf("  %c  |  %c  |  %c  \n", array[0], array[1], array[2]);
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n"; 
    printf("  %c  |  %c  |  %c  \n", array[3], array[4], array[5]);
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    printf("  %c  |  %c  |  %c  \n", array[6], array[7], array[8]);
    std::cout << "     |     |     \n";
    std::cout << std::endl;
}
void turnoPersona(char *array){
    int res;
    do{
        std::cout << "Marque una casilla (1 - 9): "; std::cin >> res;
        res--;
        if(array[res] == 'O') std::cout << "Casilla invalida!\n";
    }while(array[res] == 'O' || res < 0 || res > 8);
    switch(res){
        case 0: array[0] = 'X'; break;
        case 1: array[1] = 'X'; break;
        case 2: array[2] = 'X'; break;
        case 3: array[3] = 'X'; break;
        case 4: array[4] = 'X'; break;
        case 5: array[5] = 'X'; break;
        case 6: array[6] = 'X'; break;
        case 7: array[7] = 'X'; break;
        case 8: array[8] = 'X'; break;
        } 
}
void turnoComputador(char *array){
    srand(time(NULL));
    int opc;
    do{
        opc = rand() % 9;
    }while(array[opc] != ' ');
    
    switch(opc){
        case 0: array[0] = 'O'; break;
        case 1: array[1] = 'O'; break;
        case 2: array[2] = 'O'; break;
        case 3: array[3] = 'O'; break;
        case 4: array[4] = 'O'; break;
        case 5: array[5] = 'O'; break;
        case 6: array[6] = 'O'; break;
        case 7: array[7] = 'O'; break;
        case 8: array[8] = 'O'; break;
        }    
}
char check(char *array){
    int win = 0;
    if(array[0] == array[1] && array[1] == array[2]) win = 1;
    else if(array[3] == array[4] && array[4] == array[5]) win = 5;
    else if(array[6] == array[7] && array[7] == array[8]) win = 8;

    else if(array[0] == array[3] && array[3] == array[6]) win = 6;
    else if(array[1] == array[4] && array[4] == array[7]) win = 7;
    else if(array[2] == array[5] && array[5] == array[8]) win = 8;

    else if(array[0] == array[4] && array[4] == array[8]) win = 8;
    else if(array[6] == array[4] && array[4] == array[2]) win = 2;
    else if(array[0] != ' ' && array[1] != ' ' && array[2] != ' ' && array[3] != ' ' && array[4] != ' '
             && array[5] != ' ' && array[6] != ' ' && array[7] != ' ' && array[8] != ' ') return 'E';
    else return 'f';
    
    return array[win];
}
