#include <iostream>
using namespace std;

struct athlete {
    string nama;
    string pekerjaan;
    string kebangsaan;
    string jeniskelamin;
    int umur;
};

class buku {
public:
    string judul;
    string penulis;
    int tahunterbit;

    void info() {
        cout << "judul buku adalah : " << judul << endl;
        cout << "penulis buku adalah : " << penulis << endl;
        cout << "Tahun terbit buku adalah : " << tahunterbit << endl;
    }
};

int main() {
   
    athlete org;
    org.nama = "Leah Williamson";
    org.umur = 26;
    org.jeniskelamin = "wanita";
    org.pekerjaan = "pemain sepak bola";
    org.kebangsaan = "inggris";

    cout << "\nInformasi athlete adalah :" << endl;
    cout << "Nama anggota adalah : " << org.nama << endl;
    cout << "Umur anggota adalah : " << org.umur << endl;
    cout << "Jenis Kelamin anggota adalah : " << org.jeniskelamin << endl;
    cout << "pekerjaan anggota adalah : " << org.pekerjaan << endl;
    cout << "kebangsaan anggota adalah : " << org.kebangsaan << endl;

    buku buku1;
    buku1.judul = "Harry Potter dan Batu Bertuah";
    buku1.penulis = "J.K Rowling";
    buku1.tahunterbit = 2008;
    cout << "\nInformasi buku 1 adalah :" << endl;
    buku1.info();

    return 0;
}
