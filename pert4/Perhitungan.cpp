#include <iostream>

using namespace std;

int main (){
    char operasi;
    int value1 = 1;
    int value2 = 2;

    cout << "Operasi Aritmatika" << endl;
    cout << "1. Tambah (+)" << endl;
    cout << "2. Kurang (-)" << endl;
    cout << "3. Kali (*)" << endl;
    cout << "4. Bagi (/)" << endl;
    cout << "Pilih Operasi : ";
    cin >> operasi;
    switch (operasi){
        case '1':
        cout << value1 << " + " << value2 << " = " << value1 + value2;
        break;

        case '2':
        cout << value1 << " - " << value2 << " = " << value1 - value2;
        break;

        case '3':
        cout << value1 << " * " << value2 << " = " << value1 * value2;
        break;

        case '4':
        cout << value1 << " / " << value2 << " = " << value1 / value2;
        break;
    }

    return 0;
}