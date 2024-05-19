#include <iostream>
#include <stack>
#include <vector>
using namespace std;

string kataterbalik(string input)
{
  stack<char> tumpukankata;
  string kataterbalik = "";

  for (char ch : input)
  {
    tumpukankata.push(ch);
  }

  while (!tumpukankata.empty())
  {
    kataterbalik += tumpukankata.top();
    tumpukankata.pop();
  }

  return kataterbalik;
}

int main()
{
  vector<string> kata;

  string input;
  cout << "-----Ketik 'selesai' jika anda sudah selesai----" << endl;
  cout << "Masukkan kata yang ingin di balik : ";
  getline(cin, input);

  while (input != "selesai")
  {
    kata.push_back(input);

    cout << "Masukkan kata yang ingin di balik : ";
    getline(cin, input);
  }

  cout << "Kata-kata yang telah diinputkan: " << endl;
  for (int i = 0; i < kata.size(); i++)
  {
    cout << i + 1 << ". "<< kata[i] << endl;
  }
  cout << endl;

  cout << "Kata-kata dalam bentuk terbalik: " << endl;
  for (int i = 0; i < kata.size(); i++)
  {
    string terbalik = kataterbalik(kata[i]);
    cout << i + 1 << ". " << terbalik << endl;
  }
  cout << endl;
  
  return 0;
}