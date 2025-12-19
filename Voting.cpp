#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    string namaMahasiswa;
    int jumlahJuri;
    double totalNilai = 0;
    double nilaiInput;

    cout << "=== SISTEM VOTING PENILAIAN MAHASISWA ===" << endl;
    
    // Input data mahasiswa
    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, namaMahasiswa);
    
    cout << "Masukkan Jumlah Juri/Dosen: ";
    cin >> jumlahJuri;

    // Validasi input
    if (jumlahJuri <= 0) {
        cout << "Jumlah juri tidak valid!" << endl;
        return 0;
    }

    // Proses Voting/Input Nilai
    for (int i = 1; i <= jumlahJuri; i++) {
        cout << "Nilai dari Juri ke-" << i << " (0-100): ";
        cin >> nilaiInput;
        
        // Menambahkan nilai ke total
        totalNilai += nilaiInput;
    }

    // Menghitung Rata-rata
    double rataRata = totalNilai / jumlahJuri;

    // Menampilkan Hasil
    cout << "\n--- HASIL PENILAIAN ---" << endl;
    cout << "Mahasiswa: " << namaMahasiswa << endl;
    cout << "Total Nilai: " << totalNilai << endl;
    cout << fixed << setprecision(2); // Mengatur 2 angka di belakang koma
    cout << "Rata-rata: " << rataRata << endl;

    // Logika Kelulusan
    if (rataRata >= 75) {
        cout << "Status: LULUS" << endl;
    } else {
        cout << "Status: TIDAK LULUS" << endl;
    }

    cout << "-----------------------" << endl;

    return 0;
}