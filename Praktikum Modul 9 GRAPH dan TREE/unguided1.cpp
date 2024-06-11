#include <iostream>
#include <vector>

using namespace std;

int main() {
  int trienabilla_2311102071;
  cout << "Silakan masukan jumlah simpul : ";
  cin >> trienabilla_2311102071;

  vector<string> simpul(trienabilla_2311102071);
  cout << "Silakan masukan nama simpul\n";
  for (int i = 0; i < trienabilla_2311102071; i++) {
    cout << "Simpul " << i + 1 << " : ";
    cin >> simpul[i];
  }

  vector<vector<int>> bobot(trienabilla_2311102071, vector<int>(trienabilla_2311102071));
  cout << "Silakan masukkan bobot antar simpul\n";
  for (int i = 0; i < trienabilla_2311102071; i++) {
    for (int j = 0; j < trienabilla_2311102071; j++) {
      cout << simpul[i] << "--> " << simpul[j] << " = ";
      cin >> bobot[i][j];
    }
  }

  cout << "\n";
  cout << "\t";
  for (int i = 0; i < trienabilla_2311102071; i++) {
    cout << simpul[i] << "\t";
  }
  cout << endl;
  for (int i = 0; i < trienabilla_2311102071; i++) {
    cout << simpul[i] << "\t";
    for (int j = 0; j < trienabilla_2311102071; j++) {
      cout << bobot[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}