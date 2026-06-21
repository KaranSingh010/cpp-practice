/*

Enter the size of array: 5
Enter the elements (sorted): 1 10 20 55 99
Enter the key to search: 55
Element found at index 3

*/
#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int n, key;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;

    int start = 0;
    int end = n - 1;
    int mid;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            cout << "Element found at index " << mid;
            return 0;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Element not found";
    return 0;
}
