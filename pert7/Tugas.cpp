#include <iostream>

using namespace std;

void TotalHarga(int harga);

void PesananMakanan() {
    int Makanan;
    char mengulang;

    do {
        cout << "Menu Makanan:\n";
        cout << "1. Pecel Lele\n";
        cout << "2. Nasi Goreng\n";
        cout << "3. Kembali\n";
        cout << "Pilih menu makanan: ";
        cin >> Makanan;

        switch (Makanan) {
            case 1:
                cout << "Anda telah memilih Pecel Lele.\n";
                TotalHarga(20000); // Harga Pecel Lele
                break;
            case 2:
                cout << "Anda telah memilih Nasi Goreng.\n";
                TotalHarga(25000); // Harga Nasi Goreng
                break;
            case 3:
                cout << "Kembali ke menu utama.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Coba lagi.\n";
        }

        if (Makanan != 3) {
            cout << "Apakah Anda ingin membeli lagi? (y/n): ";
            cin >> mengulang;
        } else {
            mengulang = 'n';
        }
    } while (mengulang == 'y' || mengulang == 'Y');
}

void PesananMinuman() {
    int Minuman;
    char mengulang;

    do {
        cout << "Menu Minuman:\n";
        cout << "1. Es Teh Manis\n";
        cout << "2. Es Jeruk\n";
        cout << "3. Kembali\n";
        cout << "Pilih menu minuman: ";
        cin >> Minuman;

        switch (Minuman) {
            case 1:
                cout << "Anda telah memilih Es Teh Manis.\n";
                TotalHarga(5000); // Harga Teh Manis
                break;
            case 2:
                cout << "Anda telah memilih Es Jeruk.\n";
                TotalHarga(7000); // Harga Air Putih
                break;
            case 3:
                cout << "Kembali ke menu utama.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Coba lagi.\n";
        }

        if (Minuman != 3) {
            cout << "Apakah Anda ingin membeli lagi? (y/n): ";
            cin >> mengulang;
        } else {
            mengulang = 'n';
        }
    } while (mengulang == 'y' || mengulang == 'Y');
}

void TotalHarga(int harga) {
    int qty;
    cout << "Masukkan jumlah pesanan: ";
    cin >> qty;
    int total = harga * qty;
    cout << "Total harga: " << total << " Rupiah\n";
}

int main() {
    int pilihan;

    do {
        cout << "Menu Utama:\n";
        cout << "1. Makanan\n";
        cout << "2. Minuman\n";
        cout << "3. Exit\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                PesananMakanan();
                break;
            case 2:
                PesananMinuman();
                break;
            case 3:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Coba lagi.\n";
        }
    } while (pilihan != 3);

    return 0;
}