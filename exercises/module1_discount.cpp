#include <iostream>

using namespace std;

int main()
{
    // VARIABEL & TIPE DATA
    long originalPrice;
    const double DISCOUNT_RATE = 0.10; // Diskon 10% (0.10)
    long discountAmount;
    long finalPrice;

    cout << "==========================================" << endl;
    cout << "   PROGRAM HITUNG HARGA BARANG (DISKON)   " << endl;
    cout << "==========================================" << endl;

    // INPUT
    cout << "Masukkan harga awal barang (Rp): ";
    cin >> originalPrice;

    // PROSES
    // Step 1: Menghitung nominal potongan diskon (10% dari harga awal)
    discountAmount = originalPrice * DISCOUNT_RATE;

    // Step 2: Menghitung harga akhir setelah dikurangi diskon
    finalPrice = originalPrice - discountAmount;

    // OUTPUT
    cout << "\n------------------------------------------" << endl;
    cout << "PERHITUNGAN STEP-BY-STEP:" << endl;
    cout << "1. Harga Awal Barang     : Rp " << originalPrice << endl;
    cout << "2. Besar Diskon (10%)    : Rp " << discountAmount << " (Rp " << originalPrice << " x 10%)" << endl;
    cout << "3. Total Harga Akhir     : Rp " << finalPrice << " (Rp " << originalPrice << " - Rp " << discountAmount << ")" << endl;
    cout << "==========================================" << endl;

    return 0;
}