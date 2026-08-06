#include <iostream>
#include <string>

using namespace std;

int main()
{
    // ABDULLAH MUHAMMAD MUTTAQIM-22EO10034-IF8B

    // VARIABEL & TIPE DATA
    string studentName;
    string studentNIM;
    double assignmentScore, utsScore, uasScore, finalScore;

    cout << "==========================================" << endl;
    cout << "    PROGRAM HITUNG NILAI AKHIR MAHASISWA  " << endl;
    cout << "==========================================" << endl;

    // INPUT DATA MAHASISWA
    cout << "Masukkan Nama Mahasiswa : ";
    getline(cin, studentName); // Menggunakan getline agar nama ber-spasi tidak terpotong

    cout << "Masukkan NIM Mahasiswa  : ";
    cin >> studentNIM;

    // INPUT NILAI-NILAI
    cout << "Masukkan Nilai Tugas    : ";
    cin >> assignmentScore;

    cout << "Masukkan Nilai UTS      : ";
    cin >> utsScore;

    cout << "Masukkan Nilai UAS      : ";
    cin >> uasScore;

    // PROSES (Perhitungan Bobot Persentase)
    finalScore = (assignmentScore * 0.30) + (utsScore * 0.30) + (uasScore * 0.40);

    // OUTPUT HASIL AKHIR
    cout << "\n------------------------------------------" << endl;
    cout << "HASIL EVALUASI AKADEMIK:" << endl;
    cout << "Nama Mahasiswa : " << studentName << endl;
    cout << "NIM Mahasiswa  : " << studentNIM << endl;
    cout << "Nilai Akhir    : " << finalScore << endl;
    cout << "==========================================" << endl;

    return 0;
}