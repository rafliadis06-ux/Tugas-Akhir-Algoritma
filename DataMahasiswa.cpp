#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int n; cout<<"Jumlah mahasiswa: "; if(!(cin>>n)) return 0;
    vector<string> nama(n); vector<int> nilai(n); cin.ignore();

    for(int i=0;i<n;++i){
        cout<<"Nama: "; getline(cin,nama[i]);
        cout<<"Nilai: "; cin>>nilai[i]; cin.ignore();
    }

    cout<<"\n============= HASIL ============\n";
    cout<<left<<setw(4)<<"No"<<setw(25)<<"Nama"<<setw(6)<<"Nilai"<<"Indeks\n";
    cout<<string(40,'-')<<"\n";
    for(int i=0;i<n;++i){
        char idx=(nilai[i]>=85)?'A':(nilai[i]>=70)?'B':(nilai[i]>=55)?'C':(nilai[i]>=40)?'D':'E';
        cout<<left<<setw(4)<<(i+1)<<setw(25)<<nama[i]<<setw(6)<<nilai[i]<<idx<<"\n";
    }
    return 0;
}
