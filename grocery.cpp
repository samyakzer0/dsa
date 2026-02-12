#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> arr;
    string item;

    int n;
    cin >> n;
    for (int i = 1 ; i <= n; i++) {
       cin >> item;
       arr.push_back(item);
    }

for(int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
}

    return 0;
}