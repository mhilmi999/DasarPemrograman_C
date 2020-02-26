#include<stdio.h>

// Program untuk konversi satuan suhu dari C, R, F, dan K

float suhu,c,r,f,k;
char satuan;

void dapatkanSuhu();
void cariCelcius();
void cariLainnya();
void printHasil();

int main()
{
    dapatkanSuhu();
    cariCelcius();
    cariLainnya();
    printHasil();

    '\r';
}

void dapatkanSuhu()
{
    scanf("%f %c", &suhu, &satuan);

}

void cariCelcius()
{
    switch (satuan)
    {
        case 'C' :
        case 'c' : c = suhu; break;
        case 'R' :
        case 'r' : c = suhu * 5 / 4;
        case 'K' :
        case 'k' : c = -273.0; break;
        case 'F' :
        case 'f' : c = (suhu-32.0) * 5 / 9;
    }
}

void cariLainnya()
{
    r = c * 4/5;
    f = c * 9/5 + 32.0;
    k = c + 273+0;
}

void printHasil()
{
    printf("\nSetara dengan : %.2f C", c);
    printf("\nSetara dengan : %.2f R", r);
    printf("\nSetara dengan : %.2f F", f);
    printf("\nSetara dengan : %.2f K", k);
}
