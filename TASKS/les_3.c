//Программа преобразует возраст в годах в возраст дней
#include <stdio.h>
#define YEAR_IN_DAYS 365 // константа показывает 365 в году, не обращая внимание на високосные
int main(void)
{
    int age; // объявление пременной
    age = 40; // присваивание значения переменной

    printf("Мой возраст лет %d лет это %d дней\n", age, age * YEAR_IN_DAYS); 
    return 0;
}