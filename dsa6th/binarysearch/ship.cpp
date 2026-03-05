#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;


bool canShip(vector<int> &weights , int days , int capacity){
    int daysUsed = 1;
    int load = 0;
    for(int i = 0 ; i < weights.size() ; i++){
        if(load + weights[i]>capacity){
            daysUsed++;
            load = weights[i];
        }
        else{
            load += weights[i];
        }
    }
    return daysUsed <= days;
}
int main() {
    int n;
    cin >> n;
    vector<int> weights(n);
    for(int i = 0 ; i < n ; i++){
        cin>>weights[i];
    }
    int days;
    cin>>days;
    int capacity;
    cin>>capacity;
    int ans = 0;
    int low = *max_element(weights.begin(),weights.end());
    int high = accumulate(weights.begin(),weights.end(),0);
   
    while(low<=high){
        int mid = low + (high-low)/2;
        if(canShip(weights,days,mid)){
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid +1;
        }
    }
  cout << ans << endl;
    return 0;
}