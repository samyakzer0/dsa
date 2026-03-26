#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n,vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int low = 0;
    int high = n*m-1;
    int target;
    cin >> target;

    while(low<=high){
        int mid = low + (high-low)/2;
        int val = arr[mid/m][mid%m];
        if(val == target){
            cout << mid/m << " " << mid%m << endl;
            break;
        }
        else if(val<target){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return 0;
}