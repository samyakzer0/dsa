#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool canPaint(vector<int> &boards, int mid , int k){
    long long painters = 1;
    long long time = 0;
    for(int i = 0 ; i < boards.size() ; i++){
        if(time+boards[i]>mid){
            painters++;
            time = boards[i];
        }
        else{
            time = time + boards[i];
        }
    }
    return painters <= k;
}

int main() {
    int k;
    cin >> k;
    int n;
    cin>>n;
    vector<int> boards(n);
    for(int i = 0 ; i < n ; i++){
        cin >> boards[i];
    }

    long long low = *max_element(boards.begin(), boards.end());
    long long high = accumulate(boards.begin(), boards.end(), 0LL);
    long long ans = high;
    while(low<=high){
        long long mid = low + (high-low)/2;
        if(canPaint(boards,mid,k)){
            ans = mid;
            high = mid -1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}