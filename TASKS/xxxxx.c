#include <stdio.h>
int main(void)
{
    int width = 10;
    int height = 5;
    for (int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            printf("x");
        }
        printf("\n");
    }
    return 0;
}