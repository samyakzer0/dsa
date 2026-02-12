#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;

arr.push_back(0);
arr.push_back(10);
arr.push_back(20);
arr.push_back(30);
arr.push_back(32);
cout << arr.size() << endl;
cout << arr.capacity() << endl;

    return 0;
}