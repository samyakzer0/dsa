#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

bool canAssign(vector<int> &boxes , int m , int mid){
    int volunteers = 1 ;
    int range = 0;
    int n = boxes.size();

    for(int i = 0 ; i < n ; i++){
        if(range+boxes[i]>mid){
            volunteers++;
            range = boxes[i];
        }
        else {
            range += boxes[i];
        }
    }
    return volunteers<=m;
}

int main() {
    int n;
    cin >>n;
    int m;
    cin >> m;
    vector<int> boxes(n);
    for(int i = 0 ; i < n ; i++){
        cin>>boxes[i];
    }

    int low = *max_element(boxes.begin(),boxes.end());
    int high = accumulate(boxes.begin(),boxes.end(),0);
    int ans = high;

    while(low<=high){
        int mid = low + (high-low)/2;
        if(canAssign(boxes,m,mid)){
            ans = mid;
            high = mid -1 ;
        }
        else {
            low = mid + 1;
        }
    }
 cout << ans << endl;
    return 0;
}