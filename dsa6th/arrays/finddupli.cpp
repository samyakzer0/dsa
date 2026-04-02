#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int i = 0;
    while(i<n){
        if(arr[i]<n && arr[i]!=arr[arr[i]]){
            swap(arr[i], arr[arr[i]]);
        }
        else{
            i++;
        }
    }
    vector<int> ans;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]!=i+1){
            ans.push_back(arr[i]);
        }
    }
    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << " ";
    }
    return 0;
}