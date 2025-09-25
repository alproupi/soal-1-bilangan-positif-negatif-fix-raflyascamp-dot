#include <stdio.h>
#include <stdlib.h>

// If Then, Logika soal :
// Jika mahasiswa yang mengontrak matkul alpro < 45, maka tampilkan "Kuota kelas masih tersedia."

int main() {

    int angka;

    printf("Masukan tahun: ");
    scanf("%d", &angka);

    if (angka < 0) {
        printf("Angka negatif\n");
    }
    
     if (angka > 0) {
        printf("Angka positif\n");
    }

     else {
        printf("Angka 0\n");
    }
    printf("---------------------------------");

    return 0;
}
