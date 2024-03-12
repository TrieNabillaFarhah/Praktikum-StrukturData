#include <iostream>
using namespace std;

int tambah(int a, int b) {
   return a + b;
}

int kali(int a, int b) {
   return a * b;
}

int main() {
   int angka1 = 10;
   int angka2 = 20;

   cout << "Hasil dari penjumlahan angka1 dan angka2 adalah: " << tambah(angka1, angka2) << endl;

   cout << "Hasil dari perkalian angka1 dan adalah: " << kali(angka1, angka2) << endl;

   return 0;
}