#include <stdio.h>



int main(){
    int choice;
    int a, b;

    printf("Choose the operation\n");
    printf("1. Addition\n");
    printf("2. Multiplication\n");
    printf("3. Subtraction\n");
    printf("4. Division\n\n");
    
    scanf("%d", &choice);
   
    printf("Enter Numbers:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    
    switch (choice){
    case 1:
        printf("%d\n", a + b);
        break;
    case 2:
        printf("%d\n", a * b);
        break;

    case 3:
        printf("%d\n", a - b);
        break;

    case 4:
        printf("%.2f\n",  (float) a/b);
        break;
       
    default:
        break;
    } 

    return 0;
}