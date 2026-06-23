/*

Enter the size of array : 7
Enter the elements : 2 4 6 8 10 8 5
Peak element index : 4
Peak element value : 10

*/


#include <iostream>
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
        int mid = start + (end - start) / 2;

        if(arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
    }

    cout << "Peak element index : " << start << endl;
    cout << "Peak element value : " << arr[start] << endl;

    return 0;
}
