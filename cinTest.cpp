#include <iostream>

using namespace std;

int Expression() {
  int term;
  if (!(cin >> term)) {
    cin.clear();
    cin.ignore();
  }
  return term;
}

int main() {
  while (cin) {
    cout << Expression() << "\n\n";
  }
  return 0;
}