#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << " Masukkan ukuran Array Tiga Dimensi : ";
    cin >> a >> b >> c;

    int arr[a][b][c];
    for (int x=0; x<a; x++){
        for (int y=0; y<b; y++){
            for (int z=0; z<c; z++){
                cout << "Masukkan Elemen ke- [" << x <<"] [" << y <<"] [" << z <<"] : ";
                cin >> arr[x][y][z];
            }
        }
    }

    for (int x=0; x < a; x++){
        for (int y=0; y<b; y++){
            for (int z=0; z<c; z++){
                cout << " Isi elemen ke- [" << x <<"] ["<< y <<"] ["<< z <<"] : " << arr[x][y][z] << endl;
            }
        }
    }
}