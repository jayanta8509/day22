// Write a program to express a number as a sum of two prime numbers
#include <cmath>
#include <iostream>

using namespace std;

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }

  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  for (int i = 2; i <= n / 2; i++) {
    if (isPrime(i) && isPrime(n - i)) {
      cout << n << " can be expressed as the sum of " << i << " and " << n - i
           << endl;
      break;
    }
  }

  return 0;
}
