class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
      int n=arr.size();
      int s=0;
      int e=n-1;
      int mid=s+(e-s)/2;
      while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;

        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
      }
      return s;


        
       
    }
};

int main() {
    
    vector<int> arr = {1, 3, 5, 7, 6, 4, 2};
    
    Solution solution;
    int peakIndex = solution.peakIndexInMountainArray(arr);

    cout << "The peak index is: " << peakIndex << endl;

    return 0;
}