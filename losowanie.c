#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    char liczba;
    srand(time(NULL));

    liczba=(rand()%10)+6;
    printf("Wynik: %d", liczba);
return 0;
}
