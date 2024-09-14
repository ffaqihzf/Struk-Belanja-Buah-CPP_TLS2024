#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
    // Harga buah per kilogram
    const double harga_mangga = 15000;
    const double harga_apel = 20000;
    const double harga_nanas = 8000;

    // Variabel untuk menyimpan jumlah pembelian
    double berat_mangga, berat_apel, berat_nanas;

    // Input jumlah pembelian
    cout << "Masukkan berat mangga (kg): ";
    cin >> berat_mangga;
    cout << "Masukkan berat apel (kg): ";
    cin >> berat_apel;
    cout << "Masukkan berat nanas (kg): ";
    cin >> berat_nanas;

    // Hitung total harga
    double total_mangga = harga_mangga * berat_mangga;
    double total_apel = harga_apel * berat_apel;
    double total_nanas = harga_nanas * berat_nanas;
    double total_keseluruhan = total_mangga + total_apel + total_nanas;

    // Tampilkan receipt
    cout << "\n===== RECEIPT PEMBELIAN BUAH =====\n";
    cout << fixed << setprecision(2);
    cout << "Mangga : " << berat_mangga << " kg x Rp" << harga_mangga << " = Rp" << total_mangga << endl;
    cout << "Apel   : " << berat_apel << " kg x Rp" << harga_apel << " = Rp" << total_apel << endl;
    cout << "Nanas  : " << berat_nanas << " kg x Rp" << harga_nanas << " = Rp" << total_nanas << endl;
    cout << "--------------------------------\n";
    cout << "Total  : Rp" << total_keseluruhan << endl;
    cout << "==================================\n";

    return 0;
}
