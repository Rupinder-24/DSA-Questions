#include <iostream>
#include <climits>  // For INT_MIN and INT_MAX

using namespace std;

// To find the duplicate element present in array or not.

void duplicate(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    bool found = false;

    while (start <= end) {
        if (arr[start] == arr[end]) {
            cout << "duplicate: " << arr[start] << endl;
            found = true;
            break; // To stop after finding the first duplicate
        }
        start++;
        end--;
    }

    if (!found) {
        cout << "No duplicates found" << endl;
    }
}

int main() {
    int arr[5] ={1,2,3,4,4};
    int n = 5;
    //findDuplicates(arr, n);
    duplicate(arr,n);
    return 0;
}
