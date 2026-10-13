#include <iostream>
    using namespace std;

int main() {
    const int N = 50;
    int sum = 0;

    // Method 1: add numbers one by one using a loop
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    cout << "Sum of first " << N << " natural numbers (loop): " << sum << endl;

    return 0;
}
