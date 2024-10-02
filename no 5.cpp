#include <iostream>
using namespace std;

double hitungBMI(double berat, double tinggi) {
    return berat / (tinggi * tinggi);
}

string kategoriBMI(double bmi) {
    if (bmi < 18.5)
        return "Berat Badan Kurang";
    else if (bmi >= 18.5 && bmi < 24.9)
        return "Berat Badan Ideal";
    else if (bmi >= 25 && bmi < 29.9)
        return "Berat Badan Lebih";
    else if (bmi >= 30 && bmi < 39.9)
        return "Gemuk";
    else
        return "Sangat Gemuk";
}

int main() {
    double berat, tinggi, bmi;

    cout << "Masukkan berat badan (kg): ";
    cin >> berat;

    cout << "Masukkan tinggi badan (cm): ";
    cin >> tinggi;
    tinggi = tinggi / 100;

    bmi = hitungBMI(berat, tinggi);

    cout << "BMI Anda: " << bmi << endl;
    cout << "Kategori: " << kategoriBMI(bmi) << endl;

    return 0;
}
