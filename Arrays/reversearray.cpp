#include<bits/stdc++.h>

using namespace std;

// Reverse array element

void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

  
}

// Print array
void printArray(int arr[],int n){
reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
    }
    printArray(arr,n);
    return 0;
}
