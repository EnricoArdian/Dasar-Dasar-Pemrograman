#include <iostream>
#include <vector>
using namespace std;

struct Buku {
    string judul;
    string pengarang;
};

vector<Buku> perpustakaan;

char validasiPilihan() {
    char pilihan;
    while (true) {
        cin >> pilihan;
        if (pilihan == 'y' || pilihan == 'Y' || pilihan == 'n' || pilihan == 'N') {
            return pilihan;
        } else {
            cout << "Input tidak valid. Masukkan 'y' atau 'n': ";
        }
    }
}

void tambahBuku() {
    char pilihan;
    do {
        Buku bukuBaru;
        system("cls");
        cout << "== Tambah Buku ==" << endl;
        cout << "Masukkan Judul: ";
        cin.ignore();
        getline(cin, bukuBaru.judul);
        cout << "Masukkan Pengarang: ";
        getline(cin, bukuBaru.pengarang);
        perpustakaan.push_back(bukuBaru);
        cout << "Buku berhasil ditambahkan!" << endl;

        cout << "Apakah Anda ingin menambah buku lagi? (y/n): ";
        pilihan = validasiPilihan();
    } while (pilihan == 'y' || pilihan == 'Y');

    cout << "Kembali ke menu utama? (y/n): ";
    pilihan = validasiPilihan();
    if (pilihan == 'n' || pilihan == 'N') {
        cout << "Program berakhir, Terima kasih!!";
        exit(0);
    }
}

void daftarBuku() {
    char pilihan;
    do {
        system("cls");
        if (perpustakaan.empty()) {
            cout << "Tidak ada buku yang tersedia!" << endl;
        } else {
            cout << "== Daftar Buku ==" << endl;
            for (size_t i = 0; i < perpustakaan.size(); i++) {
                cout << i + 1 << ". Judul    : " << perpustakaan[i].judul << endl;
                cout << "   Pengarang: " << perpustakaan[i].pengarang << endl;
            }
        }

        cout << "Apakah Anda ingin melihat daftar buku lagi? (y/n): ";
        pilihan = validasiPilihan();
    } while (pilihan == 'y' || pilihan == 'Y');

    cout << "Kembali ke menu utama? (y/n): ";
    pilihan = validasiPilihan();
    if (pilihan == 'n' || pilihan == 'N') {
        cout << "Program berakhir, Terima kasih!!";
        exit(0);
    }
}

void ubahBuku() {
    char pilihan;
    string judul, judulBaru, pengarangBaru;
    bool found;
    do {
        system("cls");
        cout << "== Ubah Buku ==" << endl;
        cout << "Masukkan judul buku yang akan diubah: ";
        cin.ignore();
        getline(cin, judul);
        found = false;

        for (auto &buku : perpustakaan) {
            if (buku.judul == judul) {
                cout << "Masukkan judul baru: ";
                getline(cin, judulBaru);
                cout << "Masukkan pengarang baru: ";
                getline(cin, pengarangBaru);
                buku.judul = judulBaru;
                buku.pengarang = pengarangBaru;
                cout << "Buku berhasil diubah!" << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Buku tidak ditemukan!" << endl;
        }

        cout << "Apakah Anda ingin mengubah buku lagi? (y/n): ";
        pilihan = validasiPilihan();
    } while (pilihan == 'y' || pilihan == 'Y');

    cout << "Kembali ke menu utama? (y/n): ";
    pilihan = validasiPilihan();
    if (pilihan == 'n' || pilihan == 'N') {
        cout << "Program berakhir, Terima kasih!!";
        exit(0);
    }
}

void hapusBuku() {
    char pilihan;
    string judul;
    bool found;
    do {
        system("cls");
        cout << "== Hapus Buku ==" << endl;
        cout << "Masukkan judul buku yang akan dihapus: ";
        cin.ignore();
        getline(cin, judul);
        found = false;

        for (auto i = perpustakaan.begin(); i != perpustakaan.end(); i++) {
            if (i->judul == judul) {
                perpustakaan.erase(i);
                cout << "Buku berhasil dihapus!" << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Buku tidak ditemukan!" << endl;
        }

        cout << "Apakah Anda ingin menghapus buku lagi? (y/n): ";
        pilihan = validasiPilihan();
    } while (pilihan == 'y' || pilihan == 'Y');

    cout << "Kembali ke menu utama? (y/n): ";
    pilihan = validasiPilihan();
    if (pilihan == 'n' || pilihan == 'N') {
        cout << "Program berakhir, Terima kasih!!";
        exit(0);
    }
}

int main() {
    char pilihan;
    while (true) {
        system("cls");
        cout << "== MENU PERPUSTAKAAN ==" << endl;
        cout << "1. Tambah Buku" << endl;
        cout << "2. Tampilkan Daftar Buku" << endl;
        cout << "3. Ubah Data Buku" << endl;
        cout << "4. Hapus Buku" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case '1':
                tambahBuku();
                break;
            case '2':
                daftarBuku();
                break;
            case '3':
                ubahBuku();
                break;
            case '4':
                hapusBuku();
                break;
            case '0':
                cout << "Terima kasih! Program berakhir." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid! Silakan masukkan angka sesuai menu." << endl;
                cout << "Tekan Enter untuk kembali ke menu utama...";
                cin.ignore();
                cin.get();
                break;
        }
    }
}
