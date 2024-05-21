/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    
    int angka1, angka2;
    
    // Meminta input angka
    cout << "Masukkan Angka pertama : ";
    cin >> angka1;
    
    cout << "Masukkan Angka kedua : ";
    cin >> angka2;
    
    // Melakukan operasi matematika
    int penjumlahan = angka1 + angka2;
    int pengurangan = angka1 - angka2;
    int perkalian = angka1 * angka2;
    int pembagian = angka1 / angka2;
    
    // Menampilkan hasil
    cout << "Penjumlahan : " << penjumlahan << endl;
    cout << "Pengurangan : " << pengurangan << endl;
    cout << "Perkalian : " << perkalian << endl;
    cout << "Pembagian : " << pembagian << endl;

    return 0;
}
