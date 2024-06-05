#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Kelas untuk merepresentasikan ikan hias
class IkanHias {
private:
    string jenis;
    int harga;
    int stok;
public:
    IkanHias(string j, int h, int s) : jenis(j), harga(h), stok(s) {}
    string getJenis() const { return jenis; }
    int getHarga() const { return harga; }
    int getStok() const { return stok; }
    void setStok(int s) { stok = s; }
    void display() const {
        cout << "Jenis: " << jenis << ", Harga: " << harga << " IDR, Stok: " << stok << endl;
    }
};

// Kelas untuk manajemen inventaris ikan hias
class InventarisIkan {
private:
    vector<IkanHias> inventaris;
public:
    void tambahIkan(const IkanHias& ikan) {
        inventaris.push_back(ikan);
    }
    void tampilkanInventaris() const {
        cout << "=== Inventaris Ikan Hias ===" << endl;
        for (const auto& ikan : inventaris) {
            ikan.display();
        }
        cout << endl;
    }
    void jualIkan(string jenis, int jumlah) {
        for (auto& ikan : inventaris) {
            if (ikan.getJenis() == jenis) {
                if (jumlah <= ikan.getStok()) {
                    ikan.setStok(ikan.getStok() - jumlah);
                    cout << "Berhasil menjual " << jumlah << " ekor " << jenis << endl;
                    return;
                } else {
                    cout << "Stok " << jenis << " tidak mencukupi." << endl;
                    return;
                }
            }
        }
        cout << "Tidak ada " << jenis << " di inventaris." << endl;
    }
};

int main() {
    // Inisialisasi inventaris
    InventarisIkan inventarisIkan;
    inventarisIkan.tambahIkan(IkanHias("Koi", 50000, 10));
    inventarisIkan.tambahIkan(IkanHias("Discus", 80000, 5));
    inventarisIkan.tambahIkan(IkanHias("Arwana", 1200000, 3));

    // Menu aplikasi
    int pilihan;
    do {
        cout << "=== Aplikasi Manajemen Ikan Hias ===" << endl;
        cout << "1. Tampilkan Inventaris" << endl;
        cout << "2. Jual Ikan" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                inventarisIkan.tampilkanInventaris();
                break;
            case 2: {
                string jenisIkan;
                int jumlah;
                cout << "Jenis Ikan: ";
                cin >> jenisIkan;
                cout << "Jumlah: ";
                cin >> jumlah;
                inventarisIkan.jualIkan(jenisIkan, jumlah);
                break;
            }
            case 3:
                cout << "Terima kasih telah menggunakan aplikasi." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
    } while (pilihan != 3);

    return 0;
}
