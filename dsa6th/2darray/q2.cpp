#include <iostream>
#include <vector>
using namespace std;

// 1 2 3 4 
//     5 6 7 8 
//     9 10 11 12 
//     13 14 15 16 

//     print it like->

//     1 2 3 4 8 12 16 15 14 13 9 5 6 7 

int main() {
    int arr[4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};
    int t = 0, b = 3, l = 0, r = 3;
    
    while (t <= b && l <= r) {
        
        for (int i = l; i <= r; i++) {
            cout << arr[t][i] << " ";
        }
        t++;

        
        for (int i = t; i <= b; i++) {
            cout << arr[i][r] << " ";
        }
        r--;

        
        if (t <= b) {
            for (int i = r; i >= l; i--) {
                cout << arr[b][i] << " ";
            }
            b--;
        }

       
        if (l <= r) {
            for (int i = b; i >= t; i--) {
                cout << arr[i][l] << " ";
            }
            l++;
        }
    }

    // int n, m;
    // cin >> n >> m;

    // vector<vector<int>> arr(n, vector<int>(m));
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) { 
    //         cin >> arr[i][j];
    //     }
    // }
    return 0;
}