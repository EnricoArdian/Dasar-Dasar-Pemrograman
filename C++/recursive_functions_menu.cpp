#include <iostream>
using namespace std;

void menu() {
    system("cls");
    cout << "==== Menu ====" << endl;
    cout << "1. Recursive Palindrom" << endl;
    cout << "2. Recursive Deretan Angka Genap" << endl;
    cout << "3. Bintang Segitiga Sama Kaki" << endl;
    cout << "4. Keluar" << endl;
    cout << "Masukkan pilihan: ";
}

bool ulangProgram() {
    char ulang;
    cout << "Apakah anda ingin melanjutkan? (y/n): ";
    cin >> ulang;
    while (ulang != 'y' && ulang != 'n') {
        cout << "Input error, masukkan y/n!" << endl;
        cin >> ulang;
    }
    return ulang == 'y';
}

int inputInvalid() {
    int pilihan;
    while (!(cin >> pilihan)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << endl << "Input harus berupa angka" << endl;
        cout << "Tekan enter untuk mengulangi!";
        cin.get();
        system("cls");
        cout << "Masukkan batas: ";
        return inputInvalid();
    }
    return pilihan;
}

int balikAngka(int num, int angkaTerbalik = 0) {
    if (num == 0)
        return angkaTerbalik;
    return balikAngka(num / 10, angkaTerbalik * 10 + num % 10);
}

bool isPalindrom(int num) {
    return num == balikAngka(num);
}

void cetakPalindrom(int n) {
    if (n <= 0)
        return;
    cetakPalindrom(n - 1);
    if (isPalindrom(n)) {
        cout << n << " ";
    }
}

void angkaPalindrom() {
    int batas;
    system("cls");
    cout << "=== Menampilkan Angka Palindrom ===" << endl;
    cout << "Masukkan batas angka: ";
    cin >> batas;
    cout << "Angka palindrom hingga " << batas << " adalah: ";
    cetakPalindrom(batas);
    cout << endl;
    if (ulangProgram()) {
        angkaPalindrom();
    }
}

void cetakGenap(int n) {
    if (n <= 0)
        return;
    if (n % 2 == 0) {
        cetakGenap(n - 2);
        cout << n << " ";
    } else {
        cetakGenap(n - 1);
    }
}

void angkaGenap() {
    int batas;
    system("cls");
    cout << "=== Menampilkan Angka Genap ===" << endl;
    cout << "Masukkan batas angka: ";
    cin >> batas;
    cout << "Angka genap hingga " << batas << " adalah: ";
    cetakGenap(batas);
    cout << endl;
    if (ulangProgram()) {
        angkaGenap();
    }
}

void gambarSegitiga(int jumlahBaris) {
    for (int baris = 1; baris <= jumlahBaris; baris++) {
        int jumlahSpasi = jumlahBaris - baris;
        for (int spasi = 1; spasi <= jumlahSpasi; spasi++) {
            cout << " ";
        }
        for (int i = 1; i <= baris; i++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void segitigaSamaKaki() {
    int baris;
    system("cls");
    cout << "=== Segitiga Sama Kaki ===" << endl;
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    gambarSegitiga(baris);
    cout << endl;
    if (ulangProgram()) {
        segitigaSamaKaki();
    }
}

int main() {
    int pilihan;
    do {
        menu();
        while (!(cin >> pilihan)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl << "Input harus berupa angka" << endl;
            cout << "Tekan enter untuk mengulangi!";
            cin.get();
            system("cls");
            menu();
        }
        switch (pilihan) {
            case 1:
                angkaPalindrom();
                break;
            case 2:
                angkaGenap();
                break;
            case 3:
                segitigaSamaKaki();
                break;
            case 4:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cin.clear();
                cin.ignore(1000, '\n');
                cout << endl << "Input harus antara 1 sampai 4" << endl;
                cout << "Tekan enter untuk mengulangi!";
                cin.get();
                system("cls");
                break;
        }
    } while (pilihan != 4);
    return 0;
}
