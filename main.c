#include <stdio.h>


int main() {

    int choice;
    int num = 10;
    printf("Choose an option from 1 to 10: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Hello, world!\n");
            break;
        case 2:
            printf("Integer variable: %d\n", num);
            break;
            case 3: {
                float pi = 3.14;
                printf("Float variable: %.2f\n", pi);
                break;
            }
            case 4: {
                int a = 5, b = 7;
                printf("Sum of 5 + 7 = %d\n", a + b);
                break;
            }
            case 5:
                printf("Hello\tWorld\n");
                break;
            case 6: {
                float value = 12.345;
                printf("Float variable with width 8: %8.3f\n", value);
                break;
            }
            case 7: {
                float x = 3.5, y = 2.7;
                printf("Sum of 3.5 + 2.7 = %.1f\n", x + y);
                break;
            }
            case 8: {
                double celsius;
                printf("Enter the temperature in Celsius.: ");
                scanf("%lf", &celsius);
                double fahrenheit = celsius * 9 / 5 + 32;
                printf("Temperature in Fahrenheit: %.1f\n", fahrenheit);
                break;
            }
            case 9: {
                int number;
                printf("Enter a number: ");
                scanf("%d", &number);
                if (number % 2) {
                    printf("Odd number\n");
                } else {
                    printf("Even number\n");
                }
                break;
            }
            case 10: {
                int num1, num2;
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                if (num1 > num2) {
                    printf("Larger number: %d\n", num1);
                } 
                else if  (num1 < num2){
                    printf("Larger number: %d\n", num2);
                }
                else{
                    printf("Numbers are equal:\n");
                }
                break;
            }
            default:
                printf("Invalid choice. Please try again.\n");
        }
        return 0;
    }