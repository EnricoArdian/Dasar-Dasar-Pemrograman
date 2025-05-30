#include <iostream>
#include <string>
using namespace std;

void menu() {
    cout << "===== MENU =====" << endl;
    cout << "1. Menampilkan Bilangan Genap" << endl;
    cout << "2. Menampilkan Angka 3N" << endl;
    cout << "3. Menampilkan Angka Palindrom" << endl;
    cout << "4. Menampilkan Angka Fibonacci" << endl;
    cout << "5. Keluar" << endl;
    cout << "Masukkan pilihan : ";
}

bool isContinue() {
    char c;
    cout << "Apakah Ingin lanjut? (y/n)" << endl;
    cin >> c;
    while (c != 'y' && c != 'n') {
        system("cls");
        cout << "Inputan salah, silahkan masukkan y/n" << endl;
        cin >> c;
    }
    return c == 'y';
}

void Genap() {
    int batas;
    bool lanjut;
    do {
        cout << "Masukkan batas : ";
        cin >> batas;
        cout << "Angka Genap hingga " << batas << " adalah : ";
        for (int i = 1; i < batas; i++) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
        lanjut = isContinue();
    } while (lanjut);
}

void TigaN() {
    int batas;
    bool lanjut;
    do {
        cout << "Masukkan batas : ";
        cin >> batas;
        cout << "Angka 3N sebelum angka " << batas << " adalah" << endl;
        for (int i = 1; i < batas; i++) {
            cout << i << " - " << i * 3 << endl;
        }
        cout << endl;
        lanjut = isContinue();
    } while (lanjut);
}

bool pali(int n) {
    int temp = n;
    int reverse = 0;
    while (temp > 0) {
        reverse = reverse * 10 + temp % 10;
        temp = temp / 10;
    }
    return n == reverse;
}

void Palindrom() {
    int batas;
    bool lanjut;
    do {
        cout << "Masukkan batas : ";
        cin >> batas;
        cout << "Angka Palindrom hingga " << batas << " adalah ";
        for (int i = 1; i < batas; i++) {
            if (pali(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
        lanjut = isContinue();
    } while (lanjut);
}

void Fibonacci() {
    int n;
    bool lanjut;
    do {
        cout << "Masukkan angka : ";
        cin >> n;
        cout << "Angka Fibonacci adalah : ";
        int f[n];
        f[0] = 0;
        f[1] = 1;
        for (int i = 2; i <= n; i++) {
            f[i] = f[i - 1] + f[i - 2];
        }
        for (int i : f) {
            cout << i << " ";
        }
        cout << endl;
        lanjut = isContinue();
    } while (lanjut);
}

int main() {
    int pilihan;
    do {
        menu();
        while (!(cin >> pilihan)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\nInput salah, harus angka" << endl;
            cout << "Tekan untuk mengulangi...";
            cin.get();
            system("cls");
            return main();
        }
        switch (pilihan) {
            case 1:
                Genap();
                system("cls");
                break;
            case 2:
                TigaN();
                system("cls");
                break;
            case 3:
                Palindrom();
                system("cls");
                break;
            case 4:
                Fibonacci();
                system("cls");
                break;
            case 5:
                system("cls");
                cout << "Terima Kasih :D" << endl;
                break;
            default:
                system("cls");
                cout << "Input Salah" << endl;
                cout << "Silahkan Input dari 1-5" << endl;
                break;
        }
    } while (pilihan != 5);
    return 0;
}
