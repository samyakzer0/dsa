#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool canEat(vector<int> &piles , int k , int h){
    long long hours = 0;
    for(int i = 0 ; i < piles.size() ; i++){
        hours += (piles[i]+k-1)/k;
    }
    return hours <= h;
}

int main() {
    long long n;
    cin >> n;
    vector<int> piles(n);
    for(int i = 0 ; i < n ; i++){
        cin>>piles[i];
    }
    int h;
    cin >> h;
    long long low = 1;
    long long high = *max_element(piles.begin(), piles.end());
    long long ans = high;

    while(low<=high){
        long long mid = low + (high-low)/2;
        if(canEat(piles,mid,h)){
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
cout << ans << endl;
    return 0;
}