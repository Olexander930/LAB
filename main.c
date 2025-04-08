#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define PI 3.14159

int main()
{

    float metr;
    printf("Введіть довжину в метрах:");
    scanf("%f", &metr);
    float santi = metr * 100;
    float milimetr = metr * 1000;
    printf("Довжина в сантиментрах: %.f\n", santi);
    printf("Довжина в міліметрах: %.f\n\n", milimetr); 

    float rad, ploscha;
    printf("Введіть радіус кола:");
    scanf("%f", &rad);
    if (rad < 0) {
         printf("Радіус не може бути від'ємним.\n\n");
    } else {
        ploscha = pow(rad, 2) * PI;
        printf("Площа кола: %.2f\n\n", ploscha);
    }


    int input_seconds, hour, minutes, seconds;
    printf("Введіть кількість секунд: ");
    scanf("%d", &input_seconds);

    if (input_seconds < 0) {
        printf("Кількість секунд не може бути від'ємною.\n\n");
    } else {
        hour = input_seconds / 3600;
        minutes = (input_seconds % 3600) / 60;
        seconds = input_seconds % 60;
        printf("%d секунд - це %d год. %d хв. %d сек.\n\n", input_seconds, hour, minutes, seconds);
    }


    int num;
    printf("Введіть ціле число: ");
    scanf("%d", &num);
    if (num % 2) 
    {
        printf("Число непарне.\n\n");
    }
    else
    {
        printf("Число парне.\n\n");
    }

    char ch;
    printf("Введіть малу літеру англійського алфавіту: ");
    scanf(" %c", &ch); 
    if (ch >= 'a' && ch <= 'z') {
        char upper = toupper(ch); 
        printf("Велика літера: %c\n", upper);
    }
    else {
        printf("Це не мала літера англійського алфавіту.\n");
    }

    return 0;
}