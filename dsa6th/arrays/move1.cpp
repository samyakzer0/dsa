#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }

    int k = 0;

    for(int i = 1 ; i < n ; i++){
        if(arr[i]!=1){
            swap(arr[i],arr[k]);
             k++;{
            
        }
    }
}
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}