#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canPlace(vector<int> &stalls , int mid , int c){
    int cowPlaced = 1;
    int lastPlaced = stalls[0];
    for(int i = 1 ; i < stalls.size() ; i++){
        if(stalls[i]-lastPlaced >= mid){
            cowPlaced++;
            lastPlaced = stalls[i];
            if(cowPlaced == c){
                return true;
            }
        }
    }
    return false;
}

int main() {
    long long n;
    cin >> n;
    vector<int> stalls(n);
    for(int i = 0 ; i < n ; i++){
        cin >> stalls[i];
    }
    int c;
    cin >> c;
    sort(stalls.begin(), stalls.end());
    long long low = 1 ;
    long long high = stalls[n-1]-stalls[0];
    long long ans = 0;

    while(low<=high){
        long long mid = low + (high - low)/2;
        if(canPlace(stalls,mid,c)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}