/*

Enter the size of array : 5
Enter the elements of array : 44 22 55 99 11
Sorted Array : 11 22 44 55 99 

*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[1000];
    int n;

    cout << "Enter the size of array : ";
    cin >> n;

    cout << "Enter the elements of array : ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Insertion Sort
    for(int i = 1; i < n; i++) {
        for(int j = i; j > 0; j--) {
            if(arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
            else {
                break;
            }
        }
    }

    cout << "Sorted Array : ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
