//Number Manipulation and Prime Numbers
#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}
void findFactors(int num) {
    cout << "Factors of " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            cout << i << " ";
    }
    cout << endl;
}
int nextPrime(int num) {
    int next = num + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
        cout << "The next prime number is: " << nextPrime(n) << endl;
    } else {
        cout << n << " is not a prime number." << endl;
        findFactors(n);
    }
    return 0;
}
