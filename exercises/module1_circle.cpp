#include <iostream>

using namespace std;

int main()
{
    // KONSTANTA & VARIABEL
    // const digunakan agar nilai PHI dikunci dan tidak bisa diubah di tengah jalan
    const double PHI = 3.14159;
    double radius, area, circumference;

    cout << "==========================================" << endl;
    cout << "   PROGRAM LUAS & KELILING LINGKARAN      " << endl;
    cout << "==========================================" << endl;

    // INPUT
    cout << "Masukkan jari-jari lingkaran (r): ";
    cin >> radius;

    // PROSES (Perhitungan Rumus Matematika)
    area = PHI * radius * radius;     // Luas = PHI * r^2
    circumference = 2 * PHI * radius; // Keliling = 2 * PHI * r

    // OUTPUT
    cout << "\n------------------------------------------" << endl;
    cout << "HASIL PERHITUNGAN:" << endl;
    cout << "Jari-jari (r)     : " << radius << endl;
    cout << "Luas Lingkaran    : " << area << endl;
    cout << "Keliling Lingkaran: " << circumference << endl;
    cout << "==========================================" << endl;

    return 0;
}