#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variabel & Tipe Data (Materi 1 & 2)
    string studentName;
    string studentNIM;
    int totalCourses;

    // Input / Output Dasar (Materi 3)
    cout << "====================================================" << endl;
    cout << "   COLLEGE - SHORT SEMESTER CLASSES (SP) MANAGEMENT SYSTEM    " << endl;
    cout << "====================================================" << endl;

    cout << "Masukan Nama Mahasiswa : ";
    getline(cin, studentName); // Menggunakan getline agar bisa input nama dengan spasi

    cout << "Masukan NIM Mahasiswa : ";
    cin >> studentNIM;

    cout << "Jumlah Mata Kuliah SP : ";
    cin >> totalCourses;

    cout << "\n----------------------------------------------------" << endl;
    cout << "Data Mahasiswa Berhasil Direkam!" << endl;
    cout << "Nama : " << studentName << " | NIM: " << studentNIM << endl;
    cout << "----------------------------------------------------" << endl;

    return 0;
}