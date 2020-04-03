#include <stdio.h> // Standar header

/*
Tugas "Daftar Sepedaku"
diprogram oleh M Hilmi Ramadhan (05311940000044)
Mata Kuliah Pengantar Algoritma dan Teknik Pemrograman
Materi Array
*/

int main(void)
{
    // Deklarasi variabel dan jenis apa saja yang akan digunakan nantinya
    int jumlahElemen = 8;
    float hargaSepeda[] = {600, 1200, 3600, 2300, 5200, 7400, 1500};
    int index;
    int jumlah = 0;
    float rata;
    float masuk;
    int terbesar;
    int terkecil;

    for (index = 0; index < 7; index++) // Perulangan untuk menampilkan Harga sepeda serta indexing dari awal dengan data awal
    {
        printf("Harga sepeda ke-%d adalah Rp%g\n", index, hargaSepeda[index]);
    }

    for (index = 0; index < 7; index++) // Perulangan untuk mencari jumlah total dan rata-rata harga sepeda dengan data awal
    {
        jumlah = jumlah + hargaSepeda[index];
        rata = jumlah / 7;
    }
    printf("\nHasil penjumlahan semua harga sepeda yang ada  di index saat ini adalah Rp%d", jumlah); // Menampilkan hasil penjumlahan total harga sementara
    printf("\nHasil perhitungan rata-rata semua harga sepeda yang ada di index saat ini adalah Rp%.2f", rata); // Menampilkan hasil rata-rata harga sementara

    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nMisalkan aku beli sepeda baru"); 
    for (index = 7; index < 8; index++) // Perulangan untuk memasukkan harga sepeda baru terhadap array yang sudah ada
    {
        printf("\nMasukkan harga sepeda baru yang telah dibeli: Rp"); 
        scanf("%g", &hargaSepeda[index]); // Mendapatkan inputan harga dari user
        jumlah = jumlah + hargaSepeda[index];
        rata = jumlah / 8;
    }
    printf("\nHasil penjumlahan semua harga sepeda yang ada  di index saat ini adalah Rp%d", jumlah);// Menampilkan hasil penjumlahan total harga
    //dengan tambahan harga sepeda baru dari user
    printf("\nHasil perhitungan rata-rata semua harga sepeda yang ada di index saat ini adalah Rp%.2f", rata);// Menampilkan hasil rata-rata harga
    //dengan inputan user

    terbesar = hargaSepeda[0]; // deklarasi variabel mencari harga terbesar dengan membadingkan antar index array
    for (index = 1; index < 8; index++)// Perulangan dengan cara membandingkan variabel terbesar terhadap harga dalam index array lainnya
    {
        if (hargaSepeda[index] > terbesar) // Perbandingan variabel terbesar dengan tiap-tiap harga dalam index
        {
            terbesar = hargaSepeda[index];// penyimpanan nilai ke variabel terbesar
        }
    }
    printf("\nMaka harga sepeda termahal senilai Rp%d", terbesar);// Menampilkan harga sepeda termahal dari logics 

    terkecil = hargaSepeda[0];// deklarasi variabel mencari harga termurah dengan membadingkan antar index array
    for (index = 1; index < 8; index++)//Perulangan dengan cara membandingkan variabel terkecil terhadap harga dalam index array lainnya
    {
        if (hargaSepeda[index] < terkecil)// Perbandingan variabel terkecil dengan tiap-tiap harga dalam index
        {
            terkecil = hargaSepeda[index];// penyimpanan nilai ke variabel terkecil
        }
    }
    printf("\nMaka harga sepeda termurah senilai Rp%d", terkecil);// Menampilkan harga sepeda termurah dari logics
}
