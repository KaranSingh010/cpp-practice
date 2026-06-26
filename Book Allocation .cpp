/*

Enter the number of books: 5
Enter the pages in each book: 20 30 88 99 105
Enter the number of students: 3
Minimum maximum pages = 138

*/


#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int n, m;

    cout << "Enter the number of books: ";
    cin >> n;

    cout << "Enter the pages in each book: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of students: ";
    cin >> m;

    if (m > n) {
        cout << -1;
        return 0;
    }

    int start = 0, end = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > start)
            start = arr[i];   // Maximum pages in a single book

        end += arr[i];        // Total pages
    }

    int ans = -1;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        int pages = 0;
        int count = 1;

        for (int i = 0; i < n; i++) {

            if (pages + arr[i] <= mid) {
                pages += arr[i];
            }
            else {
                count++;
                pages = arr[i];
            }
        }

        if (count <= m) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    cout << "Minimum maximum pages = " << ans;

    return 0;
}
