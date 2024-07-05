#include <iostream>
#include <climits>  // For INT_MIN and INT_MAX

using namespace std;

// void findDuplicates(int arr[], int n) {
//     bool found = false;
    
//     for (int i = 0; i < n; ++i) {
//         for (int j = i + 1; j < n; ++j) {
//             if (arr[i] == arr[j]) {
//                 cout << "duplicate: " << arr[i] << endl;
//                 found = true;
//                 break; // To print each duplicate only once
//             }
//         }
//     }

//     if (!found) {
//         cout << "No duplicates found" << endl;
//     }
// }

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
