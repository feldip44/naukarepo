#include <stdio.h>
int main()
{
    int liczba;
    do
    {
    printf("Podaj liczbe 5\n");
    scanf("%d",&liczba);
    }while(liczba!=5);
    printf("Podano dobra liczbe\n");
    {
         printf("Podaj liczbe calkowita wieksza od 0\n");
 scanf("%d",&liczba);
 if (liczba>0)
 {
     printf("Liczba prawidlowa\n");
 }
 else
 {
     printf("Liczba nieprawidlowa\n");
 }
    }
    getchar();
    return 0;

}

