#include <stdio.h>

int main () {
     char operator;
     double first, second;
     
     printf("Enter the Operator (+, -, * , / ) : ");
     scanf("%c", &operator);

    printf("Enter the Two Numbers one by one  : ");
    scanf("%lf %lf", &first, &second);

    switch (operator)  
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", first,second,(first+second));
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf", first,second,(first-second));
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf", first,second,(first*second));
            break;
        case '/':
            if(second != 0.0) 
                printf("%.2lf / %.28lf = %.2lf", first,second,(first/second));
            else
                printf("Divide by zero situation");
            break;
        default:
            printf("Invalid Operator");
        }

    return 0;
}