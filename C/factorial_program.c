#include <stdio.h>
#include <stdlib.h>

int main()

{
 int angka,hasil,i;

  printf("Input angka: ");
  scanf("%d",&angka);

  hasil = 1;
  for(i=1; i<=angka; i++) {
    hasil = hasil * i;
  }
  printf("Hasil dari :%d! = %d \n",angka, hasil);

  return 0;
}
