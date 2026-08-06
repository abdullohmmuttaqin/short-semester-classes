#include <iostream>

using namespace std;

int main()
{

    // ABDULLAH MUHAMMAD MUTTAQIM-22EO10034-IF8B

    int choice;
    double num1, num2, result;

    cout << "==========================================" << endl;
    cout << "    KALKULATOR ARITMATIKA SEDERHANA       " << endl;
    cout << "==========================================" << endl;
    cout << "Pilihan Menu Operasi:" << endl;
    cout << "1. Penjumlahan (+)" << endl;
    cout << "2. Pengurangan (-)" << endl;
    cout << "3. Perkalian   (*)" << endl;
    cout << "4. Pembagian   (/)" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Pilih menu (1-4): ";
    cin >> choice;

    // Cek input angka jika pilihan menu valid (1 sampai 4)
    if (choice >= 1 && choice <= 4)
    {
        cout << "Masukkan angka pertama : ";
        cin >> num1;
        cout << "Masukkan angka kedua   : ";
        cin >> num2;
    }

    cout << "\n------------------------------------------" << endl;
    cout << "HASIL PERHITUNGAN:" << endl;

    // PERCABANGAN SWITCH-CASE
    switch (choice)
    {
    case 1:
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result << endl;
        break;
    case 2:
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result << endl;
        break;
    case 3:
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result << endl;
        break;
    case 4:
        // Penanganan pembagian dengan angka nol
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result << endl;
        }
        else
        {
            cout << "Error: Pembagian dengan angka nol (0) tidak diperbolehkan!" << endl;
        }
        break;
    default:
        cout << "Pilihan menu tidak tersedia! Silakan pilih angka 1-4." << endl;
        break;
    }

    cout << "==========================================" << endl;

    return 0;
}