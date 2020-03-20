#include<stdio.h>
#include<string.h>

/*
Bab 4 Control Structure
Latihan
1. Buatlah program pendek yang menginputkan nama, umur, dan uang yang dimiliki
    a. Berikan ucapan selamat datang "Selamat datang sdr<nama> di Bioskop ABC"
    b. Jika HTM adalah Rp25.000 dan khusus dewasa, berikan message yang sesuai
*/


int main(void)
{
    char nama[100];
    char alamat[100];
    int umur;
    int uang;
    char msg[200];
    int urut;

    strcpy(msg, "");

    printf("Nama\t:  ");
    scanf("%s", &nama);


    printf("Umur\t:  ");
    scanf("%d", &umur);

    printf("Alamat\t: ");
    scanf("%s", &alamat);

    printf("Uang\t:  ");
    scanf("%d", &uang);

    printf("Nomor Urut Antrian: ");
    scanf("%d", &urut);

    printf("Selamat datang sdr %s  di Bioskop ABC\n", nama);
    printf("Yang berumur %d tahun dan beralamat di %s\n", umur, alamat);

    if(uang< 25000)
    {
        strcat(msg,"\nUang tidak mencukupi\n");
    }

    if(uang == 20000 && urut == 7)
    {
        strcat(msg, "\nSelamat, anda mendapatkan hadiah kipas angin");
    }
    
    if(umur < 17)
    {
        strcat(msg,"\nUmur tidak cukup, silahkan coba lagi tahun depan\n");
    }

    if(uang > 27000 && umur < 10)
    {
        strcat(msg, "\nSelamat, anda mendapatkan Ice Cream Chocolate");
    }

    strcat(msg, ((urut % 2 == 0)?"\nLewat Pintu Kanan":"\nLewat Pintu Kiri"));
/*
    if(urut % 2 == 0)
        strcat(msg, "Lewat Pintu Kanan");
    else
        strcat(msg,"Lewat Pintu Kiri");
*/
    printf("Peringatan: %s", msg);

    printf("\n");

}
