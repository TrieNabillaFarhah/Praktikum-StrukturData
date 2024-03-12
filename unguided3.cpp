#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
 map<string, int> hewan;

 hewan["kucing"] = 4;
 hewan["ayam"] = 2;
 hewan["semut"] = 6;

 cout << "Jumlah kaki kucing : " << hewan["kucing"] << endl;
 cout << "Jumlah kaki ayam : " << hewan["ayam"] << endl;
 cout << "Jumlah kaki semut : " << hewan["semut"] << endl;

 hewan["kalajengking"] = 8;
 hewan["kanguru"] = 2;

 for (auto& it : hewan) {
     cout << "Jumlah kaki " << it.first << ": " << it.second << endl;
 }

 hewan.erase("ikan");

 for (auto& it : hewan) {
     cout << "Jumlah kaki " << it.first << ": " << it.second << endl;
 }

 return 0;
}