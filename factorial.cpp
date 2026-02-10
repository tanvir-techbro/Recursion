#include <iostream>
using namespace std;

int factorial(int n);

int main (int argc, char *argv[]) {

  int n;
  cout << "Enter a number to find it's factorial: ";
  cin >> n;

  int res = factorial(n);
  cout << "Factorial of " << n << " is " << res << ".\n";

  return 0;
}

//recursion function
int factorial(int n){
  if (n > 1){
    return n * factorial(n - 1);
  }else {
    return 1;
  }
}
