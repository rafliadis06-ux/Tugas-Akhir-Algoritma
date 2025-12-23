#include <iostream>
#include <string>
using namespace std;

int main(){
    string nama; int jumlahJuri; double total=0, nilai;
    cout<<"Nama Mahasiswa : "; getline(cin,nama);
    cout<<"Jumlah Juri    : "; if(!(cin>>jumlahJuri)) return 0;
    for(int i=1;i<=jumlahJuri;i++){ cout<<"Nilai Juri "<<i<<" : "; cin>>nilai; total+=nilai; }
    double rata=total/jumlahJuri;
    cout<<"\n=== HASIL ===\n\n";
    cout<<"Mahasiswa    : "<<nama<<"\n";
    cout<<"Rata-rata    : "<<rata<<"\n";
    cout<<"Status       : ";
    if(rata>=85) cout<<"SANGAT BAIK\n";
    else if(rata>=75) cout<<"LULUS\n";
    else cout<<"TIDAK LULUS\n";
    return 0;
}