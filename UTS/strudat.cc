#include <iostream>
#include <string>

using namespace std;

// Definisikan kelas Node untuk linked list
class Node {
public:
    string nama;
    int harga;
    Node* next;

    Node(string n, int h) : nama(n), harga(h), next(nullptr) {}
};

// Fungsi untuk menambahkan node baru ke linked list
void tambahProduk(Node*& head, string nama, int harga) {
    Node* newNode = new Node(nama, harga);
    newNode->next = head;
    head = newNode;
}

// Fungsi untuk menukar data antara dua node
void swap(Node* a, Node* b) {
    string tempNama = a->nama;
    int tempHarga = a->harga;
    a->nama = b->nama;
    a->harga = b->harga;
    b->nama = tempNama;
    b->harga = tempHarga;
}

// Implementasi Bubble Sort untuk mengurutkan harga produk dari terkecil ke terbesar
void bubbleSort(Node* head) {
    int swapped;
    Node* ptr1;
    Node* lptr = nullptr;

    if (head == nullptr)
        return;

    do {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->harga > ptr1->next->harga) {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

// Implementasi pencarian sekuensial untuk mencari produk berdasarkan nomor urutan
Node* searchByNumber(Node* head, int nomorCari) {
    Node* current = head;
    int nomorProduk = 1;
    while (current != nullptr) {
        if (nomorProduk == nomorCari) {
            return current; // Mengembalikan node jika nomor produk sesuai
        }
        current = current->next;
        nomorProduk++;
    }
    return nullptr; // Mengembalikan nullptr jika nomor produk tidak ditemukan
}

int main() {
    Node* head = nullptr;

    // Menambahkan produk ke linked list
    tambahProduk(head, "Handphone", 4500000);
    tambahProduk(head, "Laptop", 10000000);
    tambahProduk(head, "Televisi", 2000000);
    tambahProduk(head, "Kamera", 8000000);
    tambahProduk(head, "Kulkas", 1200000);

    // Menampilkan daftar produk sebelum diurutkan
    cout << "Daftar Produk Sebelum Diurutkan Berdasarkan Harga:" << endl;
    Node* currentBeforeSort = head;
    int nomorProdukSebelum = 1;
    while (currentBeforeSort != nullptr) {
        cout << nomorProdukSebelum << ". Nama Produk: " << currentBeforeSort->nama << ", Harga: RP." << currentBeforeSort->harga << endl;
        currentBeforeSort = currentBeforeSort->next;
        nomorProdukSebelum++;
    }

    // Mengurutkan daftar produk menggunakan Bubble Sort
    bubbleSort(head);

    // Menampilkan daftar produk setelah diurutkan
    cout << "\nDaftar Produk Setelah Diurutkan Berdasarkan Harga:" << endl;
    Node* current = head;
    int nomorProduk = 1;
    while (current != nullptr) {
        cout << nomorProduk << ". Nama Produk: " << current->nama << ", Harga: RP." << current->harga << endl;
        current = current->next;
        nomorProduk++;
    }

    // Input nomor produk yang ingin dicari
    int nomorCari;
    cout << "\nMasukkan nomor produk yang ingin dicari: ";
    cin >> nomorCari;

    // Mencari produk berdasarkan nomor urutan
    Node* result = searchByNumber(head, nomorCari);
    if (result != nullptr) {
        cout << "\nProduk dengan nomor urutan " << nomorCari << " ditemukan:" << endl;
        cout << "Nama Produk: " << result->nama << ", Harga: $" << result->harga << endl;
    } else {
        cout << "\nProduk dengan nomor urutan " << nomorCari << " tidak ditemukan." << endl;
    }

    // Hapus semua node pada linked list
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

