#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Jumlah mahasiswa: "; 
    cin >> n;

    string nama[n];
    int nilai[n];

    // Input & tentukan indeks langsung
    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa " << i + 1 << "\nNama: ";
        cin.ignore();
        getline(cin, nama[i]);
        cout << "Nilai: "; 
        cin >> nilai[i];
    }

    // Output
    cout << "\n=== HASIL ===\n";
    for (int i = 0; i < n; i++) {
        char indeks = nilai[i] >= 85 ? 'A' : nilai[i] >= 70 ? 'B' : 
                      nilai[i] >= 55 ? 'C' : nilai[i] >= 40 ? 'D' : 'E';
        cout << i + 1 << ". " << nama[i] << " - Nilai: " 
             << nilai[i] << " (Indeks " << indeks << ")\n";
    }
    
    return 0;
}