#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canInstall(vector<int> &poles , int c , int mid){
    int placed = 1;
    int n = poles.size();
    int lastPlaced = poles[0];
    for(int i = 1 ; i < n ; i++){
    if(poles[i]-lastPlaced >= mid){
        placed++;
        lastPlaced = poles[i];
    }
   
    if(placed>=c){
        return true;
    }
}
return false;
}

int main() {
    int n;
    cin >> n;
    int c;
    cin>>c;
    vector<int> poles(n);
    for(int i = 0 ; i < n ; i++){
        cin>>poles[i];
    }
    
    sort(poles.begin(),poles.end());

    int low = 1;
    int high = poles[n-1]-poles[0];
    int ans = 0;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(canInstall(poles,c,mid)){
            ans = mid;
            low = mid+1;
        }
        else {
            high = mid -1;
        }
    }
cout << ans << endl;
    return 0;
}