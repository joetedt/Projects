#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_num;
int playerNum;
int player1point, player2point, i, attempts = 0;
char Player1char, Player2char;
void instructions();
char player1char();
int game();
int player1total, player2total = 0;

int main(){
    instructions();

    srand(time(NULL));

    for (int i = 0; i < 3; i++){
        rand_num = rand() % 59 + 1;
        printf("Enter Your choice round %d :", i + 1);
        scanf(" %c", &Player2char);
        if (Player2char == 'A' ||Player2char == 'B' || Player2char == 'C'){

    
            printf("%d\n", rand_num);
            player1char();
            game();
            player1total += player1point;
            player2total += player2point;
        }

        // while ((Player2char != 'A' ||Player2char != 'B' || Player2char != 'C') && (attempts < 3)){
        //     printf("Enter your Choice:");
        //     scanf("%c", &Player2char);
        //     attempts ++;
        // }

        // if (attempts >= 3){
        //     printf("Start Over\n");
        //     return 0;
        // }
    }

    printf("Player 1 Points: %d\n", player1total);
    printf("Player 2 Points: %d\n", player2total);
    if (player1total > player2total){
        printf("YOU LOSE\n");
    }

    else if (player1total == player2total) {
        printf("STALEMATE\n");
    }

    else{
        printf("YOU WIN\n");
    }

    return 0;
}


void instructions(){
    printf("\t\tROCK PAPER SCISSORS GAME\n\n");
    printf("\t\t\tInstructions\n\n");
    printf("Select your choice by using the different letters:\n");
    printf("\t\tA. Rock\n"); 
    printf("\t\tB. Paper\n"); 
    printf("\t\tC. Scissors\n\n"); 
    printf("You are Player 2\n\n");
}
char player1char(){
    if (rand_num >= 1 && rand_num <= 20){
        Player1char = 'A';
        printf("%c\n", Player1char);
    }

    else if (rand_num  >= 21 && rand_num <= 40){
        Player1char = 'B';
        printf("%c\n", Player1char);
    }

    else{
        Player1char = 'C';
        printf("%c\n", Player1char);
    }

    printf("DONE 1\n");
    return Player1char;
}
int game(){
    if (Player1char == 'A'){
        if (Player2char == 'A'){
            printf("Player 1:Rock\n");
            printf("Player 2:Rock\n");
            printf("stalemate\n");
        }

        else if (Player2char == 'B'){
            printf("Player 1: Rock\n");
            printf("Player 2: Paper\n");
            printf("Player 2 wins Round %d\n", i + 1);
            player2point = 1;
        }

        else {
            printf("Player 1: Rock\n");
            printf("Player 2: Scissors\n");
            printf("Player 1 wins Round %d\n", i + 1);
            player1point = 1;
        }
    }

    if (Player1char == 'B'){
        if (Player2char == 'A'){
            printf("Player 1:Paper\n");
            printf("Player 2:Rock\n");
            printf("Player 1 wins round %d\n", i + 1);
            player1point= 1;
        }

        else if (Player2char == 'B'){
            printf("Player 1: Paper\n");
            printf("Player 2: Paper\n");
            printf("Stalemate\n");
        
        }

        else {
            printf("Player 1: Paper\n");
            printf("Player 2: Scissors\n");
            printf("Player 2 wins Round %d\n", i + 1);
            player2point = 1;
        }
    }
   
    if (Player1char == 'C'){
        if (Player2char == 'A'){
            printf("Player 1:Scissors\n");
            printf("Player 2:Rock\n");
            printf("Player 2 wins round %d\n", i + 1);
            player2point = 1;
        }

        else if (Player2char == 'B'){
            printf("Player 1: Scissors\n");
            printf("Player 2: Paper\n");
            printf("Player 1 wins Round %d\n", i + 1);
            player2point = 1;
        }

        else {
            printf("Player 1: Scissors\n");
            printf("Player 2: Scissors\n");
            printf("Stalemate\n");
        }
    }

    printf ("DONE\n\n");
    return player1point;
    return player2point;

}