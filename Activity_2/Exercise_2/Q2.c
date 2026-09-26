// Write a program, which accepts two integers and an operator as a character (+ - * /), 
// performs the corresponding operation and displays the result.
#include <stdio.h>
int main(){
    int num1, num2;
    char operator;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    switch(operator){
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0){
                printf("Result: %d\n", num1 / num2);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }
    return 0;
}