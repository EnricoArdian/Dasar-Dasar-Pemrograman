#include <stdio.h>
#include <stdlib.h>

int main() {
    char huruf;
    int tinggi, jk;

   
    printf("Masukkan huruf (A/B/C): ");
    scanf(" %c", &huruf); 
    switch (huruf) {
        case 'A':
            printf("Hallo Anton\n");
            break;
        case 'B':
            printf("Hallo Budi\n");
            break;
        case 'C':
            printf("Hallo Camuel\n");
            break;
        default:
            printf("Hallo yang lihat\n");
    }
  
    printf("\n1. Pria\n2. Wanita\n");
    printf("Masukkan Jenis Kelamin (1/2): ");
    scanf("%d", &jk);
    printf("Masukkan Tinggi Badan (cm): ");
    scanf("%d", &tinggi);

    if (jk == 1) {
        if (tinggi >= 175) {
            printf("Anda Lulus\n");
        } else {
            printf("Anda Tidak Lulus\n");
        }
    } else if (jk == 2) { 
        if (tinggi >= 165) {
            printf("Anda Lulus\n");
        } else {
            printf("Anda Tidak Lulus\n");
        }
    } else {
        printf("Input Tidak Valid\n");
    }

    return 0;
}
