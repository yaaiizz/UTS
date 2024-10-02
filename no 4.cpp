#include <iostream>
using namespace std;

void tampilkanGanjilGenap(int n) {
    cout << "Angka genap: ";
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0)
            cout << i << " ";
    }
    cout << endl;

    cout << "Angka ganjil: ";
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0)
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;
    tampilkanGanjilGenap(n);
    return 0;
}
