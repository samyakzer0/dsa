#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> height(n);
    for(int i = 0 ; i < n ; i++){
        cin>>height[i];
    }

    int left = 0;
    int right = n-1;
    int leftMax = 0;
    int rightMax = 0;
    int water = 0;

    while(left<=right){
        leftMax = max(leftMax,height[left]);
        rightMax = max(rightMax,height[right]);

        if(leftMax<rightMax){
            water+=leftMax-height[left];
        }else{
            water+=rightMax-height[right];
    }
    cout << water << endl;
    return 0;
}