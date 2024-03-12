#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
 // Membuat map
 map<string, int> hewan;

 // Menambahkan elemen ke map
 hewan["kucing"] = 4;
 hewan["ayam"] = 2;
 hewan["semut"] = 6;

 // Mengakses elemen dari map
 cout << "Jumlah kaki kucing : " << hewan["kucing"] << endl;
 cout << "Jumlah kaki ayam : " << hewan["ayam"] << endl;
 cout << "Jumlah kaki semut : " << hewan["semut"] << endl;

 // Menambahkan elemen baru ke map
 hewan["kalajengking"] = 8;
 hewan["kanguru"] = 2;

 // Menampilkan semua elemen dari map
 for (auto& it : hewan) {
     cout << "Jumlah kaki " << it.first << ": " << it.second << endl;
 }

 // Menghapus elemen dari map
 hewan.erase("ikan");

 // Menampilkan semua elemen dari map setelah dihapus
 for (auto& it : hewan) {
     cout << "Jumlah kaki " << it.first << ": " << it.second << endl;
 }

 return 0;
}