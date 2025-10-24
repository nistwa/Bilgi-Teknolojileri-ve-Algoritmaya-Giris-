#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main()
{
    printf("Bu program aracin konumunun nerede olacagini hesaplayacaktir.\n\n");

    float x1, y1, x2, y2, hiz, sure;

    printf("Lutfen A noktasinin koordinatlarini (x1, y1) metre olarak giriniz:\n");
    scanf("%f %f", &x1, &y1);

    printf("Lutfen B noktasinin koordinatlarini (x2, y2) metre olarak giriniz:\n");
    scanf("%f %f", &x2, &y2);

    printf("Lutfen aracin hizini (m/s) giriniz:\n");
    scanf("%f", &hiz);

    printf("Lutfen surus suresini (saniye) giriniz:\n");
    scanf("%f", &sure);

    float yolun_uzunlugu = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    float ulasma_suresi = yolun_uzunlugu / hiz;

    float gidilen_mesafe = hiz * sure;

    float oran = gidilen_mesafe / yolun_uzunlugu;

    float x3 = x1 + oran * (x2 - x1);
    float y3 = y1 + oran * (y2 - y1);

    printf("Yolun Uzunlugu: %.2f metre\n", yolun_uzunlugu);
    printf("Ulasma Suresi: %.2f saniye\n", ulasma_suresi);
    printf("Gidilen Mesafe: %.2f metre\n", gidilen_mesafe);
    printf("Aracin Yeni Konumu: %.2f %.2f\n", x3, y3);

    return 0;
}











