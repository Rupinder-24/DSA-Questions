#include<bits/stdc++.h>

using namespace std;

// Sum of Array

void sumofaArray(int arr[],int n){
    int i=0;
    int sum=0;
    while(i<n){
        sum=sum+arr[i];
        i++;
    }
  cout<<"Sum: "<< sum;

}
int main(){
    int n;
    cout<<"Enter a size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    sumofaArray(arr,n);
    return 0;
}
