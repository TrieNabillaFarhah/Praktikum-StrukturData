#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool kataPalindrome(string kata)
{
  stack<char> tumpukanStack;

  for (char ch : kata)
  {
    tumpukanStack.push(ch);
  }
  
  for (char ch : kata){
    if (ch != tumpukanStack.top())
    {
      return false;
    }
    tumpukanStack.pop();
  }

  return true;
}

int main()
{
  string masukkan;
  char pilih;
  bool masukkanlanjut = true;

  while (masukkanlanjut)
  {
    cout << "Masukkan sebuah kata: ";
    cin >> masukkan;

    bool palindrome = kataPalindrome(masukkan);

    if (palindrome)
    {
      cout << "Kata " << masukkan << " Adalah Palindrom."
           << endl;
    }
    else
    {
      cout << "Kata " << masukkan << " Bukan Palindrom."
           << endl;
    }

    cout << "Lanjutkan? (y/n): ";
    cin >> pilih;

    if (pilih == 'n' || pilih == 'N')
    {
      masukkanlanjut = false;
    }

    cout << endl;
  }

  return 0;
}