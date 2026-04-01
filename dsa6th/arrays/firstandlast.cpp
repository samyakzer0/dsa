#include <iostream>
#include <vector>
using namespace std;

int helper(vector <int> &arr, int target , bool First){
int low = 0;
int high = arr.size()-1;
int ans = -1;

while(low<=high){
    int mid = low + (high-low)/2;
    if(arr[mid]==target){
        ans = mid;
        if(First){
            high = mid -1;
        }
        else {
            low = mid-1;
        }
    }

    else if (arr[mid]<target){
        low = mid + 1;
    }

    else {
        high = mid -1;
    }
}
return ans;
}

int main() {
    int n;
    cin>> n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    int first = helper(arr,target,true);
    int second = helper(arr,target,false);

    cout << first << " " << second;

    return 0;
}