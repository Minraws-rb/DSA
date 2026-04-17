#include <iostream>
using namespace std;
// Function to demonstrate O(n)
void printArray(int arr[], int n) {
   for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to find sum of array elements
int sumArray(int arr[], int n) {
    int sum = 0;
  for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to find maximum element
int findMax(int arr[], int n) {
 int maxVal = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int arr[5] = {3, 1, 7, 4, 2};
    cout << "Array elements: ";
    printArray(arr, 5);
    cout << "Sum: " << sumArray(arr, 5) << endl;
    cout << "Maximum element: " << findMax(arr, 5) << endl;
    return 0;
}