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

    int sum = 0;
    int leftSum = 0;

    for(int i = 0 ; i < n ; i++){
        sum+=arr[i];
    }

    for(int i = 0 ; i < n ; i++){
        if(leftSum==sum-arr[i]-leftSum){
            cout << i << endl;
            break;
        }
        else {
            leftSum+=arr[i];
        }
    }

    return 0;
}