#include <stdio.h>
#include <string.h> 
#define DENSITY 62.4 

int main()
{

float weight, volume;
int size, letters;
char name[40]; 
printf("Здравствуйте!Каквас зовут?\n"); 
scanf("%s", name);
printf("%s, сколько вы весите в фунтах?", name); 
scanf("%f", &weight);
size = sizeof name;
letters = strlen(name);
volume = weight / DENSITY;
printf("Хорошо, %s, ваш объем составляет %2.2f кубических футов.\n",
name, volume);
printf("К тому же ваше имя состоит из %d букв,\n",
letters);
printf("и мы располагаем 40 байтами для его сохранения.\n", size);

return 0;
}
