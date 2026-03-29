#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    int left = 0;
    int right = n-1;

    for(int i = 0 ; i < n ; i++){
        if(arr[left]+arr[right]==target){
            cout << left <<" "<< right << endl;
            break;
        }
        else if(arr[left]+arr[right]<target){
            left++;
        }
        else {
            right--;
        }
    }
    return 0;
}