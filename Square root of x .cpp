/*

Enter a number: 100
Square root = 10

*/

#include <iostream>
using namespace std;

int main() {
    int x;
    
    cout << "Enter a number: ";
    cin >> x;

    if (x < 2) {
        cout << "Square root = " << x;
        return 0;
    }

    int start = 1, end = x;
    int ans = 0;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (mid * mid == x) {
            ans = mid;
            break;
        }
        else if (mid * mid < x) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Square root = " << ans;

    return 0;
}
