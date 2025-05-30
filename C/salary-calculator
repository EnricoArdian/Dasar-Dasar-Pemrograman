#include <stdio.h>
int main()
{
    int gaji,jam,lembur,tunja;

    printf("---SELAMAT DATANG DI GAJIEH DATABASE :D---\n\n");

    printf( "Gaji pokok anda: Rp " );
    scanf( "%d", &gaji );

    printf( "Jam kerja anda: " );
    scanf( "%d", &jam );

    if ( gaji < 10000000) {
        printf ("\n**PEGAWAI KONTRAK**\n\n" );

        lembur=jam*50000;
        tunja=gaji*14/100;

        printf("Gaji Lembur: Rp %d \n",lembur);
        printf("Tunjangan: Rp %d \n\n",tunja );
        printf("Gaji Total: Rp %d \n", gaji+lembur+tunja);
    } else if ( gaji >= 10000000 ) {
        printf ("\n**PEGAWAI TETAP**\n\n" );

        lembur=jam*75000;
        tunja=gaji*28/100;

        printf("Gaji Lembur: Rp %d \n",lembur);
        printf("Tunjangan: Rp %d \n\n", tunja);
        printf("Gaji Total: Rp %d \n", gaji+lembur+tunja);
    }
    return 0;
}
