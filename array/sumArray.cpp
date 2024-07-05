#include<bits/stdc++.h>

using namespace std;
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
    // int arr[6]={1,2,3,4,5,6};
    // int i=0;
    // while(i<=6){

    // cout<<arr[i];
    // i++;
    // }

    // int n=5;
    // int i=0;
    // int sum=0;
    // while(i<=6){
    //     sum=sum+arr[i];
    //     i++;

    // }
    // cout<<sum<<" ";


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