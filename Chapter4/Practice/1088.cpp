#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    while (n) {
        if (n < 10)
            cout << n % 10;
        else
            cout << n % 10 << " ";
        n /= 10;
    }

    return 0;
}
