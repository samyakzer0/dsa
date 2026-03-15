#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 
    int target;
    cin >> target;
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            cout << mid << endl;
            break;
        }
        if(arr[low]<=arr[mid]){
            if(target>=arr[low] && target < arr[mid]){
                high = mid -1;
            }
            else {
                low = mid +1;
            }
        }
        else {
            if(target>arr[mid] && target<=arr[high]){
                low = mid + 1 ;
            }
            else {
                high = mid -1;
            }
        }
    }  
    return 0;
}