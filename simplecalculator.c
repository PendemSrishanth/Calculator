#include<stdio.h>

int main() {

    char operator;
    printf("Choose an operator ['+', '-', '*', '/']: ");
    scanf("%c", &operator);

    double num1, num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second  number: ");
    scanf("%lf", &num2);

    int result;
    
    switch(operator) {
    
        case '+':
        result = num1 + num2;
        break;

        case '-':
        result = num1 - num2;
        break;

        case '*':
        result = num1 * num2;
        break;

        case '/':
        result = num1 / num2;
        break;

    }
    printf("result: %d", result); 
}