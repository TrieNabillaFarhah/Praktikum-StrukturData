#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5,  12, 4, 13, 4, 10};

    int cari = 10;
    bool ketemu = false;
    int i;

    for (i = 0; i < n; i++){
        if(data[i] == cari){
            ketemu = true;
            break;
        }
    }
    cout << "\t Program Sequential Search sederhana\n" << endl;
    cout << " Data : {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;

    if(ketemu){
        cout << "\n Angka " << cari << " Ditemukan pada indeks ke-" << endl;
    } else {
        cout << cari << "Tidak dapat ditemukan pada data." << endl;
    }
    return 0;
}