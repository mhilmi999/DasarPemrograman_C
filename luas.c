#include<stdio.h>

// Program menghitung luas dengan variabel panjang dan lebar

double p, l;
double luas;

double hitung_luas(double panjang, double lebar)
{
    return panjang * lebar;
}
int main()
{
    // inputkan panjang, lebar
    printf("\nMasukkan nilai untuk panjang dan lebar ");
    scanf("%lf %lf", &p, &l );

    //hitung luas lantai
    luas = hitung_luas(p,l);

    //tampilkan luas lantai
    printf("\nluas = %6.2f", luas);

    '\r';
}
