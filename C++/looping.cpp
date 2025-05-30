#include <iostream>

using namespace std;

int main()
{
  /*
   * 1. Nilai awal
   * 2. Nilai Akhir
   * 3. Sifat Perulangan (maju atau mundur)
   */

  // Nilai variable i = 0
  // i++ -> i += i

  // For Loop

  // for (int i = 1; i <= 10; i++)
  // {
  //   cout << i << endl;
  // }

  // While Loop
  // int i = 1;

  // while (i <= 10)
  // {
  //   cout << i << endl;
  //   i++;
  // }

  // Do-While
  // int i = 1;
  // do
  // {
  //   cout << i << endl;
  //   i++;
  // } while (i <= 10);

  // int n;
  // cout << "Masukkin angka positif: ";
  // cin >> n;

  // while (n <= 0)
  // {
  //   cout << "Angka harus positif. Coba lagi: ";
  //   cin >> n;
  // }

  int pilihan;

  do
  {
    cout << "====== MENU ======" << endl;
    cout << "1. Menampilkan HelloWorld" << endl;
    cout << "2. Menampilkan Dhea" << endl;
    cout << "3. Program Positif Negatif" << endl;
    cout << "4. Exit" << endl;

    cout << "Masukkan pilihan anda: ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
      cout << "Hello World";
      break;
    case 4:
      break;
    default:
      break;
    }
  } while (pilihan != 4);
}
