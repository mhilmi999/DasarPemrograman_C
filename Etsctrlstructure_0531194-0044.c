#include <stdio.h>
/*
Evaluasi Tengah Semester 
Nama        : Muhammad Hilmi Ramadhan
NRP         : 05311940000044
Mata kuliah : Pengantar Algoritma dan Teknik Pemrograman (A)
Departemen  : Teknologi Informasi
Kode Soal   : Tipe A
*/

int main()
{
    int cek,kontak,suhu; // Deklarasi variabel yang akan digunakan dalam pembuatan program ini
    printf("============================\n"); 
    printf("Ajakan Untuk Masyarakat\n");
    printf("      Melakukan\n");
    printf("Self Checking COVID-19\n");
    printf("    (Tanpa Komorbid)\n");
    printf("      INGIN MULAI?\n");
    printf("===========================\n");
    printf("Apakah ada gejala COVID ?\npillih 1 jika iya dan 0 untuk tidak: \n"); 
    scanf("%d",&cek); // Mendapatkan jawaban user terkait mengalami gejala

    if ( cek == 0 ) // Jika user tanpa gejala covid, eksekusi program ini
    {
        printf("Apakah anda melakukan kontak COVID ?\n pillih 1 jika iya dan 0 untuk tidak (1/0): \n");
        scanf("%d",&kontak); // Mendapatkan jawaban user terkait kontak COVID-19

        if (kontak == 1) // Jika user melakukan kontak dengan COVID-19
        {
            printf("Berikut adalah upaya yang Anda harus lakukan : \n");
            printf("1. Anda harus melakukan Social Distancing\n2. Anda harus melakukan Self Monitoring\n3. Anda harus melakukan Self Isolation\n4. Anda harus tetap di rumah\n");

        }
        else // Jika user tidak melakukan kontak dengan COVID-19
        {
            printf("Berikut adalah upaya yang Anda harus lakukan : \n");
            printf("1. Anda harus melakukan Social Distancing\n2. Anda harus melakukan Self Monitoring\n3. Anda harus tetap di rumah\n");
        }


    }   
    else if(cek == 1) // Jika user dengan gejala covid, maka eksekusi program ini
    {
        printf("Masukkan suhu badan : \n");
        scanf("%d",&suhu); // Mendapatkan suhu tubuh user

        if (suhu >= 38) // Jika suhu tubuh lebih dari sama dengan 38 C, maka eksekusi program ini
        {
            printf("Berikut adalah upaya yang Anda harus lakukan : \n");
            printf("1. Anda harus melakukan Social Distancing\n2. Anda harus melakukan Self Monitoring\n3. Anda harus melakukan Self Isolation\n4. Anda harus menuju Rumah Sakit Rujukan\n");
        }
        else // Jika suhu tubuh user kurang dari 38 C, maka eksekusi program ini
        {
            printf("Berikut adalah upaya yang Anda harus lakukan : \n");
            printf("1. Anda harus melakukan Social Distancing\n2. Anda harus melakukan Self Monitoring\n3. Anda harus melakukan Self Isolation\n4. Anda harus tetap di rumah\n5. Segera hubungi hotline COVID-19 di 112");
        }

    }
    else // Jika jawaban yang diberikan tidak sesuai oleh user
    {
        printf("Mohon berikan jawaban yang benar");
    }
    
}