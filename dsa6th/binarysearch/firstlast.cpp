#include <iostream>
#include <vector>
using namespace std;


int search(vector<int> &arr , int target , bool isFirst){
   int n = arr.size();
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
            ans = mid;
            if(isFirst){
                high = mid -1;
            } else {
                low = mid + 1;
            }
        }
        else if(arr[mid]<target){
            low = mid +1;
        }
        else {
            high = mid-1;
        }
}
return ans;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    int first = search(arr,target,true);
    int last = search(arr,target,false);
    cout << max(first, last) << " " << min(first, last) << endl;


    return 0;
}