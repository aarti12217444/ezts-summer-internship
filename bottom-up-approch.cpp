#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    int arr[n + 1];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= n; ++i) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    return arr[n];
}

int main() {
    int input;
    cout << "Enter a number: ";
    cin >> input; // e.g., user enters 5
    int result = fibonacci(input);
    cout << "Fibonacci number at position " << input << " is " << result << endl;
    return 0;
}
