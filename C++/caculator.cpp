#include <iostream>
using namespace std;

int a,b;
char confirm;

void operasiTambah(){
        system("cls");
        cout << "Operasi Pertambahan" << endl;
        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan angka kedua: ";
        cin >> b;
        cout << "Hasil Operasi Tambah: " << a + b << endl;

        cout << "Apakah anda ingin mengulang operasi tambah? (y/n)" << endl;
        cin >> confirm;
}
void operasiKurang(){
        system("cls");
        cout << "Operasi Pengurangan" << endl;
        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan angka kedua: ";
        cin >> b;
        cout << "Hasil Operasi Kurang: " << a - b << endl;

        cout << "Apakah anda ingin mengulang operasi kurang? (y/n)" << endl;
        cin >> confirm;
}
void operasiKali(){
        system("cls");
        cout << "Operasi Perkalian" << endl;
        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan angka kedua: ";
        cin >> b;
        cout << "Hasil Operasi Kali: " << a * b << endl;

        cout << "Apakah anda ingin mengulang operasi kali? (y/n)" << endl;
        cin >> confirm;
}
void operasiBagi(){
        system("cls");
        cout << "Operasi Pembagian" << endl;
        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan angka kedua: ";
        cin >> b;
        if (b != 0) 
        {cout << "Hasil Operasi Bagi: " << a / b << endl; }
        else
        {cout << "Error: tidak bisa membagi menggunakan nol!" << endl;}
        cout << "Apakah anda ingin mengulang operasi bagi? (y/n)" << endl;
        cin >> confirm;
}
void operasiModulus(){
        system("cls");
        cout << "Operasi Modulus" << endl;
        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan angka kedua: ";
        cin >> b;
        if (b != 0) 
        {cout << "Hasil Operasi Modulus: " << a % b << endl;}
        else
        {cout << "Error: tidak bisa modulus menggunakan nol!" << endl;}
        cout << "Apakah anda ingin mengulang operasi modulus? (y/n)" << endl;
        cin >> confirm;
}
int main()
{
    char confirmMenu;
    int operasiBilangan;
    do{
    cout << "=============== Operasi Bilangan ===============" << endl;
    cout << "1. Tambah" << endl;
    cout << "2. Kurang" << endl;
    cout << "3. Kali" << endl;
    cout << "4. Bagi" << endl;
    cout << "5. Modulus" << endl;
    cout << "6. Exit" << endl;

    cout << "Masukkan pilihan anda:";
    cin >> operasiBilangan;
      
    switch (operasiBilangan)
    {
    case 1:
        do 
        {operasiTambah();}
        while (confirm == 'y');
         cout << "Apakah anda ingin kembali ke menu? (y/n)" << endl;
         cin >> confirmMenu;
         if (confirmMenu == 'y')
         {system("cls");}
        break;
    case 2:
        do
        {operasiKurang();}
        while (confirm == 'y');
         cout << "Apakah anda ingin kembali ke menu? (y/n)" << endl;
         cin >> confirmMenu;
         if (confirmMenu == 'y')
         {system("cls");}
        break;
    case 3:
        do
        {operasiKali();}
        while (confirm == 'y');
         cout << "Apakah anda ingin kembali ke menu? (y/n)" << endl;
         cin >> confirmMenu;
         if (confirmMenu == 'y')
         {system("cls");}
        break;
    case 4:
        do
        {operasiBagi();}
        while (confirm == 'y');
         cout << "Apakah anda ingin kembali ke menu? (y/n)" << endl;
         cin >> confirmMenu;
         if (confirmMenu == 'y')
         {system("cls");}
        break;
    case 5:
        do
        {operasiModulus();}
        while (confirm == 'y');
         cout << "Apakah anda ingin kembali ke menu? (y/n)" << endl;
         cin >> confirmMenu;
         if (confirmMenu == 'y')
         {system("cls");}
        break;
    case 6:
        cout << "Terima Kasih !!!" << endl;
        confirmMenu = 'n';
        break;
    default:
        system("cls");
        cout << "Pilihan tidak tersedia" << endl;
        cout << "Apakah anda ingin kembali ke menu? (y/n)" << endl;
        cin >> confirmMenu;
        if (confirmMenu == 'y')
        {system("cls");}
     break;
    }
    }while (confirmMenu == 'y');
    system("cls");
    cout << "Program Berakhir" << endl;
 }
