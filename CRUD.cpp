#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Jumlah mahasiswa: "; 
    cin >> n;
    cin.ignore();

    vector<string> nama(n);
    vector<int> nilai(n);

    // Input
    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa " << i + 1 << "\nNama: ";
        getline(cin, nama[i]);
        cout << "Nilai: "; 
        cin >> nilai[i];
        cin.ignore();
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
