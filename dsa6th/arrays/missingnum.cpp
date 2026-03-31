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

   for(int i = 0 ; i < n ; i++){
    if(arr[i]!=i){
        cout << i << endl;
        break;
    }
    else {
        cout << n << endl;
        break;
    }
   }
    return 0;
}