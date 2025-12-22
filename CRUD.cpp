#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah mahasiswa: "; cin >> n;

    // Deklarasi array sederhana
    string nama[n];
    int nilai[n];
    char indeks[n];

    // Input data
    for (int i = 0; i < n; i++) {
        cout << "Nama mahasiswa ke-" << i + 1 << ": ";
        cin.ignore();
        getline(cin, nama[i]);
        cout << "Nilai: "; cin >> nilai[i];

        // Logika IF sederhana
        if (nilai[i] >= 85) indeks[i] = 'A';
        else if (nilai[i] >= 70) indeks[i] = 'B';
        else if (nilai[i] >= 55) indeks[i] = 'C';
        else if (nilai[i] >= 40) indeks[i] = 'D';
        else if (nilai[i] < 40)  indeks[i] = 'E';
    }

    // Output Tabel (Jarak dikurangi agar lebih rapat)
    cout << "\n====================================\n";
    cout << left << setw(4)  << "No" 
         << setw(15) << "Nama"   // Jarak nama dipersempit ke 15
         << setw(8)  << "Nilai"  // Jarak nilai dipersempit ke 8
         << "Indeks" << endl;
    cout << "------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << left << setw(4)  << i + 1 
             << setw(15) << nama[i] 
             << setw(8)  << nilai[i] 
             << indeks[i] << endl;
    }
    return 0;
}