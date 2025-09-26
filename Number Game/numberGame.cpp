#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long x) {
    if (x < 2) return false;
    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n == 1) {
            cout << "FastestFinger\n";
        }
        else if (n == 2 || n % 2 == 1) {
            cout << "Ashishgup\n";
        }
        else {
            // check power of two
            if ((n & (n - 1)) == 0) {
                cout << "FastestFinger\n";
            }
            else if (n % 4 == 0) {
                cout << "Ashishgup\n";
            }
            else {
                long long odd = n / 2;
                if (isPrime(odd)) cout << "FastestFinger\n";
                else cout << "Ashishgup\n";
            }
        }
    }
    return 0;
}
