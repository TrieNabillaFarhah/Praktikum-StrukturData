#include <iostream>
using namespace std;

int main(){
    int angka[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "===== Menentukan Angka Genap dan Ganjil pada Array =====" << endl;

    cout << " Data Array   : ";
    for (int l=0; l<10; l++){
        cout << " " << angka[l];
    }

    cout << "\n Angka Genap  : ";
    for (int l=0; l<10; l++){
        if (angka[l] % 2 == 0 ){
            cout << angka[l] << ", ";
        }
    }

    cout << "\n Angka ganjil : ";
    for(int j = 0; j < 10; j++){
        if (angka[j] % 2 != 0){
            cout << angka[j] << ", ";
        }
    }
}