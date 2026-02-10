#include <iostream>
using namespace std;

int fibonacchi(int term);

int main (int argc, char *argv[]) {

  int term;
  cout << "Enter the fibonacci term you want to find: ";
  cin >> term;
  int last_digit = term % 10;

  //output
  int result = fibonacchi(term);
  switch (last_digit) {
    case 1:
      cout << term << "st fibonacchi number is " << result << ".\n";
      break;
    case 2:
      cout << term << "nd fibonacchi number is " << result << ".\n";
      break;
    case 3:
      cout << term << "rd fibonacchi number is " << result << ".\n";
      break;
    default:
      cout << term << "th fibonacchi number is " << result << ".\n";
      break;
  }

  return 0;
}

//recursion function
int fibonacchi(int term){
  //base case
  if (term == 0) return 0;
  if (term == 1) return 1;

  return fibonacchi(term - 1) + fibonacchi(term - 2);
}
