#include <stdio.h>

int main()
{
    float mil, km;

    printf("Bu program mil degerini kilometreye cevircektir.\n");
    printf("Lutfen mil degerini giriniz: ");
    scanf("%f", &mil);

    km = mil * 1.609;

    printf("Mesafe: %f mil olarak girilmistir.\n", mil);
    printf("Bu ise %f kilometreye karsilik gelir.\n", km);

    return 0;
}
