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
    cout << "COLLEGE - SHORT SEMESTER CLASSES (SP) MANAGEMENT SYSTEM" << endl;
    cout << "====================================================" << endl;

    cout << "Masukan Nama Mahasiswa : ";
    getline(cin, studentName); // Menggunakan getline agar bisa input nama dengan spasi

    cout << "Masukan NIM Mahasiswa  : ";
    cin >> studentNIM;

    cout << "Jumlah Mata Kuliah SP  : ";
    cin >> totalCourses;

    // ARRAY & PERULANGAN / LOOPING (Materi 4 & 5)
    // Menyiapkan Array untuk menampung nama matkul dan SKS yang dipilih
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

    // STRUKTUR KONTROL / IF-ELSE (Materi 6)
    long pricePerSKS = 150000;
    long subtotal = totalSKS * pricePerSKS;
    double discountPercentage = 0.0;

    // Logika penentuan diskon berdasarkan total SKS yang diambil
    if (totalSKS >= 6)
    {
        discountPercentage = 0.10; // Diskon 10% jika ambil 6 SKS atau lebih
    }
    else
    {
        discountPercentage = 0.0; // Tanpa diskon jika di bawah 6 SKS
    }

    long discountAmount = subtotal * discountPercentage;
    long grandTotal = subtotal - discountAmount;

    // INVOICE / STRUK PEMBAYARAN FINAL
    cout << "\n====================================================" << endl;
    cout << "               KUITANSI PEMBAYARAN SP               " << endl;
    cout << "====================================================" << endl;
    cout << " Nama Mahasiswa : " << studentName << endl;
    cout << " NIM            : " << studentNIM << endl;
    cout << "----------------------------------------------------" << endl;
    cout << " Detail Matkul yang Diambil:" << endl;

    // Loop kedua untuk menampilkan ringkasan data dari Array
    for (int i = 0; i < totalCourses; i++)
    {
        cout << " " << (i + 1) << ". " << selectedCourseNames[i]
             << " (" << selectedCourseSKS[i] << " SKS)" << endl;
    }

    cout << "----------------------------------------------------" << endl;
    cout << " Total SKS         : " << totalSKS << " SKS" << endl;
    cout << " Biaya per SKS     : Rp " << pricePerSKS << endl;
    cout << " Subtotal Biaya    : Rp " << subtotal << endl;
    cout << " Diskon (" << (discountPercentage * 100) << "%)     : Rp " << discountAmount << endl;
    cout << "----------------------------------------------------" << endl;
    cout << " TOTAL BAYAR       : Rp " << grandTotal << endl;
    cout << "====================================================" << endl;

    return 0;
}