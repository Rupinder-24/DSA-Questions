#include<bits/stdc++.h>

using namespace std;

int linear(int arr[],int n,int key){
    for(int i=0;i<n;i++){

        if(arr[i]==key){
            return i;
        }

    }
    return -1;
}

int main(){
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    int key;
    cin>>key;
    cout<<linear(arr,10,key)<<" ";
    return 0;
}