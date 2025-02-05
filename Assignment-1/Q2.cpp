//Array Operations
#include <iostream>
using namespace std;
void reverseArray(int arr[], int n) {
    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void findSecondMinMax(int arr[], int n) {
    if (n < 2) {
        cout << "Not enough elements" << endl;
        return;
    }
    int smallest = arr[0], secondSmallest = -1;
    int largest = arr[0], secondLargest = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] > smallest && (secondSmallest == -1 || arr[i] < secondSmallest)) {
            secondSmallest = arr[i];
        }
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && (secondLargest == -1 || arr[i] > secondLargest)) {
            secondLargest = arr[i];
        }
    }
    if (secondSmallest == -1 || secondLargest == -1)
        cout << "Not enough distinct elements" << endl;
    else {
        cout << "Second Smallest: " << secondSmallest << endl;
        cout << "Second Largest: " << secondLargest << endl;
    }
}
int main() {
    int n;
    cout << "Enter the number of elements of array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 0;
    }
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverseArray(arr, n);
    findSecondMinMax(arr, n);
    return 0;
}
