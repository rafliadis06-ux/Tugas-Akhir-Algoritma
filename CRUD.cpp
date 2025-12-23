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
        char indeks;
        if (nilai[i] >= 85) indeks = 'A';
        else if (nilai[i] >= 70) indeks = 'B';
        else if (nilai[i] >= 55) indeks = 'C';
        else if (nilai[i] >= 40) indeks = 'D';
        else indeks = 'E';
        
        cout << i + 1 << ". " << nama[i] << " - Nilai: " 
             << nilai[i] << " (Indeks " << indeks << ")\n";
    }
    
    return 0;
}
