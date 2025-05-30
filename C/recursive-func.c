#include <stdio.h>
#include <math.h>


void main() {
    int l;

    printf("1.Program Pangkat\n");
    printf("2.Volume Limas\n");
    printf("3.Volume Kerucut\n\n");
    printf("Input Pilihan :\n");

    scanf("%d",&l);

    switch(l) {
        case 1:
            pangkat();
        break;

        case 2:
            limas();
        break;

        case 3:
            kerucut();
        break;

        default:
            printf("Salah Masukin Woeee)");
    }
}

int pangkat() {
    system("cls");
        int pangkat (int l,int k) {
            if(k==0) {
                return 1;
            } else {
                return l * pangkat(l,k-1);
            }
        }

        {
        int l,k;
        printf("Input Angka :");
        scanf("%d",&l);
        printf("Input Pangkat Bilangan :");
        scanf("%d",&k);
        printf("Hasil dari %d pangkat %d adalah %d",l,k,pangkat(l,k));
        getc;
        }
}

int limas() {
    system("cls");
    float sisi,tinggi,hasil_L,hasil_V;
    float S_miring,S_Tiga;

    printf("Volume Limas\n");
    printf("Input Tinggi :");
    scanf("%f",&tinggi);
    printf("Input Panjang sisi :");
    scanf("%f",&sisi);

    puts("");

    S_miring=sqrt((sisi*0.5)*(sisi*0.5)+(tinggi*tinggi));
    S_Tiga=0.5*sisi*S_miring;

    hasil_V=(0.33333)*(sisi*sisi)*tinggi;

    printf("\nVolume Limas = %.2f",hasil_V);

    puts("");
    getc;
}

int kerucut() {
    system("cls");
    float jari,tinggi,hasil_L,hasil_V;
    float p=3.14;
    float S;
    printf("Volume Kerucut\n");
    printf("Input Tinggi Kerucut :");
    scanf("%f",&tinggi);
    printf("Input Jari-Jari Lingkaran :");
    scanf("%f",&jari);

    puts("");

    S=sqrt((jari*jari)+(tinggi*tinggi));
    hasil_V=(0.33333)*p*(jari*jari)*tinggi;
    printf("Volume Kerucut = %.2f",hasil_V);

    puts("");
    getc;
}
