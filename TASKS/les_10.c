//Программа переводит число в символ по коду в ASCII
#include <stdio.h>
int main(void)
{
    int kod;

    printf("Введите значение в коде ASCII: ");
    scanf("%d", &kod);
    printf("%c\n", kod);

    return 0;
}