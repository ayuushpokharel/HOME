#include <iostream>
using namespace std;

// Function to sort an array in ascending order
void sort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int N;

    // Ask the user for the number of elements
    cout << "Enter the number of elements: ";
    cin >> N;

    // Dynamically allocate memory for the array
    int* arr = new int[N];

    // Input the elements
    cout << "Enter the numbers: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Sort the array in ascending order
    sort(arr, N);

    // Display the sorted numbers
    cout << "Numbers in ascending order: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate the memory
    delete[] arr;

    return 0;
}
