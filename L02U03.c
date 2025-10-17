#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;

    printf("Bu program ikinci dereceden denklemin diskriminantýný hesaplayacaktýr.\n");
    printf("Denkleminiz ax2 + bx +c=0 formatýndadýr.\n");
    printf("Lutfen a, b ve c deðerlerini giriniz.\n ");

    printf("a=\n ");
    scanf("%f", &a);
    printf("b=\n ");
    scanf("%f", &b);
    printf("c=\n ");
    scanf("%f", &c);

float diskriminant=b*b-4*a*c;
float karekokdelta=sqrt(diskriminant);

float kok1 = (-b + sqrt(diskriminant)) / (2 * a);
float kok2 = (-b - sqrt(diskriminant)) / (2 * a);

printf("Diskriminant=%f\n", diskriminant);
printf("Kokler bunlardir=%f\n", kok1);
printf("Kokler bunlardir=%f\n", kok2);
    return 0;
}

