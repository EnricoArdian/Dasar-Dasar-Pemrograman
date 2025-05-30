#include <stdio.h>

void main()
{
    int menu;
    do{
             int tahun,angka;
            system("cls");
            printf("= Program Kalender =\n");
            printf("1. Cek Tahun Kabisat\n");
            printf("2. Cek Jumlah Hari Pada Bulan\n");
            printf("0. Exit\n\n");
            printf("Pilihan : ");
            scanf("%d",&menu);
       switch(menu){
        case 1:
            system("cls");
            printf(" Cek Tahun Kabisat \n");
            printf("Input Tahun (ZZZZ) : ");
            scanf("%d", &tahun);
            if ( tahun % 400 == 0 ){
                printf("Tahun %d merupakan tahun kabisat.\n\n", tahun);
                    printf("Enter Untuk Ke Menu\n\n");
                } else if ( tahun % 100 == 0){
                    printf("Tahun %d bukan merupakan tahun kabisat.\n\n", tahun);
                    printf("Enter Untuk Ke Menu\n\n");
                } else if ( tahun % 4 == 0){
                    printf("Tahun %d merupakan tahun kabisat.\n\n", tahun);
                    printf("Enter Untuk Ke Menu\n\n");
                } else {
                    printf("Tahun %d bukan merupakan tahun kabisat.\n\n", tahun);
                    printf("Enter Untuk Ke Menu\n\n");
                }
                    printf("\n\n");
            getch();
            break;
        case 2:
            system("cls");
            int bulan[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            printf("= Cek Jumlah Hari Pada Bulan =\n");
            printf("(Tahun 2022) \n");
            printf("Input Bulan (1 - 12): ");
            scanf("%i", &angka);
            printf ("Jumlah Hari: %i\n\n", bulan[angka-1]);
            printf("Enter Untuk Ke Menu\n\n");
            getch();
            break;
        case 0:
            system("cls");
            printf("Mengakhiri Program\n\n");
            printf("Enter Untuk Ke Menu\n");
            printf("Enter Untuk Ke Menu\n\n");
            break;
        default:
            printf("\nInputan Tidak Valid");
       }
    }while(menu != 0);
}
