#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    int jumlahJuri;
    double totalNilai = 0, nilai;

    cout << "=== SISTEM PENILAIAN MAHASISWA ===" << endl;
    cout << "Nama Mahasiswa: ";
    getline(cin, nama);
    
    cout << "Jumlah Juri: ";
    cin >> jumlahJuri;

    for (int i = 1; i <= jumlahJuri; i++) {
        cout << "Nilai Juri " << i << ": ";
        cin >> nilai;
        totalNilai += nilai;
    }

    double rataRata = totalNilai / jumlahJuri;

    cout << "\n--- HASIL ---" << endl;
    cout << "Mahasiswa: " << nama << endl;
    cout << "Rata-rata: " << rataRata << endl;
    cout << "Status: " << (rataRata >= 75 ? "LULUS" : "TIDAK LULUS") << endl;

    return 0;
}