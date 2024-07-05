/*In array size is find using "sizeof(fifth)/sizeof(int)"
 */
// Array is a similar type of element /item
// Array store in contiguos location
// array "index" use to access the array element

#include <bits/stdc++.h> //header file
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Print array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Print done" << endl;
}

int main()
{
    int num[15] = {5, 7, 11}; // Array initialize
    printArray(num, 15);
    cout << "value at 2 index" << num[2] << endl;
    
    int numsize = sizeof(num) / sizeof(int);//find array size
    cout << "num size: " << numsize << endl;
    
    
    return 0; // successfully run
}