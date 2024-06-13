#include <iostream>
#include <array>
#include <algorithm> // for std::sort
using namespace std;

int main() {
    // Initialization
    array<int, 5> arr = {5, 3, 4, 1, 2};

    // Accessing Elements
    cout << "Element at index 0: " << arr.at(0) << endl; // at() provides bounds checking
    cout << "Element at index 1: " << arr[1] << endl;   // operator[] does not provide bounds checking

    // Getting size
    cout << "Size of array: " << arr.size() << endl;

    // Iterating over array
    cout << "Elements in array: ";
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using range-based for loop
    cout << "Elements in array (range-based for loop): ";
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // Sorting array
    sort(arr.begin(), arr.end());
    cout << "Sorted array: ";
    for (int elem : arr) {
        cout << elem << " ";
    }
    cout << endl;

    // Accessing front and back elements
    cout << "First element (front): " << arr.front() << endl;
    cout << "Last element (back): " << arr.back() << endl;

    return 0;
}
