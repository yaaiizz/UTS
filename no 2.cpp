#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah baris : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "";
        }
    for (int k = 1; k <= (1 * i - 1); k++) {
        cout << "*";
         }
        cout << endl;
    }
    return 0;
}
