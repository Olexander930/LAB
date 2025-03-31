#include <stdio.h>


int main() {

    int num1 = 5, num2 = 2;
    float result = (float)num1 / num2;
    printf("Результат ділення: %.1f\n", result);

    const float PI = 3.14;
    printf("Константа PI: %.2f\n", PI);

    char a = 'A';
    printf("ASCII-код символа А: %d\n", a);

    int x;
    float y;
    printf("Введіть ціле число: ");
    scanf("%d", &x);
    printf("Введіть дробове число: ");
    scanf("%f", &y);
    printf("Сума чисел: %.1f\n", x + y);

    char b;
    printf("Введіть символ: ");
    scanf(" %c", &b); 
    printf("Наступний символ у таблиці ASCII: %c\n", b + 1);
}