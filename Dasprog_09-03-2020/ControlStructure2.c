#include<stdio.h>
#include<string.h>

int main(void)
{
    char nama[100];
    float uts, uas, quiz, tugas, akhir;
    char nh[10];
    char ket[100];

    printf("Masukkan nama anda\t:");
    scanf("%s", &nama);
    
    printf("\nMasukkan Nilai UTS anda\t:");
    scanf("%f", &uts);

    printf("\nMasukkan Nilai UAS anda\t:");
    scanf("%f", &uas);

    printf("\nMasukkan Nilai Quiz anda\t:");
    scanf("%f", &quiz);

    printf("\nMasukkan Nilai Tugas anda\t:");
    scanf("%f", &tugas);

    akhir = uts*0.3 + uas*0.4 + tugas*0.1 + quiz*0.2;
    if(akhir >= 81) strcpy(nh, "A");
    else if (akhir >= 61) strcpy(nh,"B");
    else if (akhir >= 51) strcpy(nh,"C");
    else if (akhir >= 41) strcpy(nh,"D");
    else if (akhir >= 21) strcpy(nh,"E");

    switch(nh[0])
    {
        case 'A': strcpy(ket, "Sangat Baik");
                  break;

        case 'B': strcpy(ket, "Baik");
                  break;

        case 'C': strcpy(ket, "Cukup");
                  break;

        case 'D': strcpy(ket, "Kurang");
                  break;

        case 'E': strcpy(ket, "Sangat Kurang");
                  break;
    }
 
    printf("\nNilai Akhir: %.2f\nNilai Huruf:%s  %s", akhir, nh, ket);



    printf("\n");
}