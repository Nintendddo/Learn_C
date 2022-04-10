#include <stdio.h>
#define MIN_IN_HOUR 60

int main(void)

{
    int min, hour, left;

    printf("Введите количество минут: ");
    scanf("%d", &min);

    while (min > 0)
    {
        hour = min / MIN_IN_HOUR;
        left = min % MIN_IN_HOUR;
        
        printf ("%d минут - это %d %s и %d %s\n", 
                min, 
                hour, hour == 1 ? "час" : 2 <= hour && hour <= 4 ? "часа" : "часов",
                left, left == 1 ? "минута" : 2 <= left && left <= 4? "минуты" : "минут");

        printf("Введите следующее значение:\n");
        scanf("%d", &min);
    }

    printf("Готово!\n");

    return 0;
}