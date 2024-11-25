#include <iostream>

using namespace std;

class Token {
public:
  char kind;
  double value;
};

int main() {
  double result = 0;

  cout << "Enter express:" << endl;
  cin >> result;
  for (char op; cin>>op;) {
    if (op=='x') {
      break;
    }
    int rval;
    cin >> rval;
    if (!cin) throw invalid_argument("no number provided");
    switch(op) 
    {
      case '+': 
        result += rval;
        break;
      case '-':
        result -= rval;
        break;
      case '*':
        result *= rval;
        break;
      case '/':
        result  /= rval;
        break;
      default:
        throw invalid_argument("unknown operand");
    }
  }

  cout << "Result:" << result << "\n\n";

  return 0;

}