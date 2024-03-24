#include <iostream>
using namespace std;

int main() {
    int arr[100], a, tambah = 0, max, min;
    float rata_rata;
    char pilih;

    cout << " Masukkan jumlah elemen : ";
    cin >> a;

    cout << " Masukkan " << a << " angka : ";
    for (int y=0; y<a; y++){
        cin >> arr[y];
    }

    max = arr[0];
    min = arr[0];
    for (int y=0;y<a; y++){
        tambah += arr[y];
        if (arr[y] > max) {
            max = arr[y];
        }
        if (arr[y] < min) {
            min = arr[y];
        }
    }
    rata_rata = (float) tambah / a;

    cout << "\nPilih menu : " << endl;
    cout << "1. Cari nilai Maksimum" << endl;
    cout << "2. Cari nilai Minimum" << endl;
    cout << "3. Cari nilai Rata-Rata" << endl;
    cout << "Pilihan Anda : ";
    cin >> pilih;
    
    switch (pilih) {
        case '1' :
        cout << "Nilai Maksimum : " << max << endl;
        break;
        case '2' :
        cout << "Nilai Minimum : " << min << endl;
        break;
        case '3' :
        cout << "Nilai Rata-Rata : " << rata_rata << endl;
        break;
        default :
        cout << " Pilihan Anda tidak Valid " << endl;
    }
}