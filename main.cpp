#include <iostream>
#include <string>

using namespace std;

int main()
{
    // VARIABEL & TIPE DATA (Materi 1 & 2)
    string studentName;
    string studentNIM;
    int totalCourses;

    // INPUT / OUTPUT DASAR (Materi 3)
    cout << "====================================================" << endl;
    cout << "   COLLEGE - SHORT SEMESTER CLASSES (SP) MANAGEMENT SYSTEM    " << endl;
    cout << "====================================================" << endl;

    cout << "Masukan Nama Mahasiswa : ";
    getline(cin, studentName); // Menggunakan getline agar bisa input nama dengan spasi

    cout << "Masukan NIM Mahasiswa : ";
    cin >> studentNIM;

    cout << "Jumlah Mata Kuliah SP : ";
    cin >> totalCourses;

    // ARRAY & PERULANGAN / LOOPING (Materi 4 & 5)
    // Menyiapkan Arrsay untuk menampung nama matkul dan SKS yang dipilih
    string selectedCourseNames[10];
    int selectedCourseSKS[10];
    int totalSKS = 0;

    cout << "\n--- DAFTAR PILIHAN MATA KULIAH SP ---" << endl;
    cin.ignore(); // Membersihkan buffer input sebelum getline di dalam loop

    // Perulangan FOR untuk mengambil input mata kuliah sebanyak totalCourses
    for (int i = 0; i < totalCourses; i++)
    {
        cout << "\nMata Kuliah ke-" << (i + 1) << ":" << endl;
        cout << "  Nama Mata Kuliah : ";
        getline(cin, selectedCourseNames[i]);

        cout << "  Jumlah SKS       : ";
        cin >> selectedCourseSKS[i];
        cin.ignore(); // Membersihkan sisa newline agar tidak mengganggu loop berikutnya

        // Menjumlahkan akumulasi SKS
        totalSKS += selectedCourseSKS[i];
    }

    cout << "\n----------------------------------------------------" << endl;
    cout << "Data Mahasiswa Berhasil Direkam!" << endl;
    cout << "Nama : " << studentName << " | NIM: " << studentNIM << endl;
    cout << "----------------------------------------------------" << endl;

    return 0;
}