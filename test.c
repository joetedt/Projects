#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rand_num;
char Player1char;
char player1char();

int main(){
    srand(time(NULL));
    rand_num = rand() % 60 + 1;
    printf("%d\n", rand_num);

    player1char();
    


    return 0;
}


char player1char(){
    if (rand_num >= 1 && rand_num <= 20){
        Player1char = 'A';
        printf("%c", Player1char);
    }

    else if (rand_num  >= 21 && rand_num <= 40){
        Player1char = 'B';
        printf("%c", Player1char);
    }

    else{
        Player1char = 'C';
        printf("%c", Player1char);
    }
    return Player1char;
}

