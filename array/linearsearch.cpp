#include<bits/stdc++.h>

using namespace std;

int linearSearch(int arr[],int n,int key){
     for(int i=1;i<n;i++){
         if(arr[i]==key){

            return i;

    }
    }
   return -1;

}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter a key: ";
    cin>>key;
     
        cout<<linearSearch(arr,n,key)<<" ";
    
    
    return 0;
}