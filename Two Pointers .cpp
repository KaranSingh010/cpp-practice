/*

Enter the size of array : 5
Enter the elements : 1 0 0 1 1
Array after sorting : 0 0 1 1 1 

*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[1000];
    int n;

    cout << "Enter the size of array : ";
    cin >> n;

    cout << "Enter the elements : ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int start = 0;
    int end = n - 1;

    while(start < end) {

        if(arr[start] == 0) {
            start++;
        }
        else {

            if(arr[end] == 0) {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            else {
                end--;
            }
        }
    }

    cout << "Array after sorting : ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
